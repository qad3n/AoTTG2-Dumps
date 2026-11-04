using System;
using System.Buffers.Binary;
using System.IO;
using System.Security.Cryptography;
using System.Text;

namespace loader
{
	// rebuilds a stock global-metadata.dat so the interop generator can read a build that ships it encrypted
	internal static class MetadataDecryptor
	{
		private const uint kSanity = 0xFAB11BAF;
		private const int kSboxSize = 256;
		private const int kTripleSize = 12;
		private const int kStockPrefix = 8;
		private const int kImagesSection = 20;
		private const int kStringSection = 2;
		private const string kImageSuffix = ".dll";

		private static int sectionOffset(byte[] metadata, int section) => MetadataDecryptor.field(metadata, MetadataDecryptor.kStockPrefix + section * MetadataDecryptor.kTripleSize);

		private static int field(byte[] buffer, int offset) => BinaryPrimitives.ReadInt32LittleEndian(buffer.AsSpan(offset));

		private static int align4(int value) => (value + 3) & ~3;

		internal static bool encrypted(string metadataPath)
		{
			using (FileStream stream = File.OpenRead(metadataPath))
			{
				Span<byte> magic = stackalloc byte[sizeof(uint)];
				stream.ReadExactly(magic);

				return BinaryPrimitives.ReadUInt32LittleEndian(magic) != MetadataDecryptor.kSanity;
			}
		}

		internal static byte[] decrypt(string modulePath, string metadataPath)
		{
			byte[] moduleBytes = File.ReadAllBytes(modulePath);
			string hash = Convert.ToHexString(SHA256.HashData(moduleBytes)).ToLowerInvariant();

			MetadataScheme scheme = MetadataSchemes.find(hash);
			if (scheme == null)
				throw new InvalidDataException($"this game build encrypts its metadata with an unknown scheme (module {hash[..8]}); the loader needs an update for it");

			byte[] sbox = PeImage.load(modulePath).read(scheme.sboxRva, MetadataDecryptor.kSboxSize).ToArray();
			byte[] shipped = File.ReadAllBytes(metadataPath);
			byte[] header = shipped.AsSpan(0, scheme.headerSize).ToArray();

			MetadataDecryptor.xor(header, scheme.headerSeed, sbox);

			int start = int.MaxValue;
			foreach (MetadataSpan span in scheme.spans)
			{
				int offset = MetadataDecryptor.field(header, span.offsetField) + span.bias;
				int size = MetadataDecryptor.field(header, span.sizeField);

				MetadataDecryptor.xor(shipped.AsSpan(offset, size), span.seed, sbox);
				start = Math.Min(start, offset);
			}

			byte[] rebuilt = MetadataDecryptor.relayout(scheme, header, shipped, start);
			MetadataDecryptor.verify(rebuilt);

			return rebuilt;
		}

		// the sections tile the file in stock order from the first encrypted span, so only their order is build specific
		private static byte[] relayout(MetadataScheme scheme, byte[] header, byte[] shipped, int start)
		{
			int stockHeader = MetadataDecryptor.kStockPrefix + MetadataDecryptor.kTripleSize * scheme.sectionOrder.Length;
			int shift = start - stockHeader;
			byte[] rebuilt = new byte[stockHeader + shipped.Length - start];

			BinaryPrimitives.WriteUInt32LittleEndian(rebuilt, MetadataDecryptor.kSanity);
			BinaryPrimitives.WriteInt32LittleEndian(rebuilt.AsSpan(sizeof(uint)), scheme.version);

			int position = start;
			for (int i = 0; i < scheme.sectionOrder.Length; i++)
			{
				int triple = scheme.sectionOrder[i] * MetadataDecryptor.kTripleSize;
				int count = MetadataDecryptor.field(header, triple + sizeof(int));
				int size = MetadataDecryptor.field(header, triple + 2 * sizeof(int));

				Span<byte> entry = rebuilt.AsSpan(MetadataDecryptor.kStockPrefix + i * MetadataDecryptor.kTripleSize);
				BinaryPrimitives.WriteInt32LittleEndian(entry, position - shift);
				BinaryPrimitives.WriteInt32LittleEndian(entry.Slice(sizeof(int)), size);
				BinaryPrimitives.WriteInt32LittleEndian(entry.Slice(2 * sizeof(int)), count);

				position = MetadataDecryptor.align4(position + size);
			}

			shipped.AsSpan(start).CopyTo(rebuilt.AsSpan(stockHeader));
			return rebuilt;
		}

		// a misplaced section shows up as garbage where the first image name should be
		private static void verify(byte[] metadata)
		{
			int strings = MetadataDecryptor.sectionOffset(metadata, MetadataDecryptor.kStringSection);
			int images = MetadataDecryptor.sectionOffset(metadata, MetadataDecryptor.kImagesSection);
			int name = strings + MetadataDecryptor.field(metadata, images);
			int end = Array.IndexOf(metadata, (byte)0, name);

			if (name >= metadata.Length || end < 0 || !Encoding.ASCII.GetString(metadata, name, end - name).EndsWith(MetadataDecryptor.kImageSuffix, StringComparison.Ordinal))
				throw new InvalidDataException("decrypted metadata failed its layout check");
		}

		// xorshift64 with marsaglia's 13 7 17 folded to a byte and passed through the module's substitution box
		private static void xor(Span<byte> buffer, ulong seed, byte[] sbox)
		{
			ulong state = seed;
			for (int i = 0; i < buffer.Length; i++)
			{
				state ^= state << 13;
				state ^= state >> 7;
				state ^= state << 17;

				ulong folded = (state >> 24) ^ (state >> 16) ^ (state >> 8) ^ state;
				buffer[i] ^= sbox[(byte)folded];
			}
		}
	}
}