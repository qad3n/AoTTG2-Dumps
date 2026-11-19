using System;
using System.Buffers.Binary;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace loader
{
	// the pe or elf game module, with the section mapping and reference scans both formats share
	internal abstract class ModuleImage
	{
		private const uint kElfMagic = 0x464C457F;

		// lea r64 with a rip relative operand, the form msvc and clang use to pass a string literal
		private static class Lea
		{
			internal const byte kRex = 0x48;
			internal const byte kRexWide = 0x4c;
			internal const byte kOpcode = 0x8d;
			internal const byte kModRmMask = 0xc7;
			internal const byte kRipRelative = 0x05;
			internal const int kDisplacement = 3;
			internal const int kLength = 7;
		}

		protected readonly record struct Section(uint rva, uint raw, uint rawSize, bool code);

		internal byte[] data { get; }

		protected Section[] sections { get; init; }

		protected ModuleImage(byte[] data)
		{
			this.data = data;
		}

		internal static ModuleImage load(string path) => ModuleImage.parse(File.ReadAllBytes(path));

		internal static ModuleImage parse(byte[] data)
		{
			if (data.Length >= sizeof(uint) && BinaryPrimitives.ReadUInt32LittleEndian(data) == ModuleImage.kElfMagic)
				return new ElfImage(data);

			return new PeImage(data);
		}

		internal abstract List<string> exportNames();

		internal ReadOnlySpan<byte> read(uint rva, int count)
		{
			int offset = this.offsetOf(rva);
			if (offset < 0 || offset + count > this.data.Length)
				throw new InvalidDataException($"rva 0x{rva:x} is outside the image");

			return this.data.AsSpan(offset, count);
		}

		// only copies that start a string count since a name can also end a longer one
		internal Dictionary<uint, string> stringRvas(IEnumerable<string> texts)
		{
			Dictionary<uint, string> found = new Dictionary<uint, string>();
			foreach (string text in texts)
			{
				byte[] needle = Encoding.ASCII.GetBytes(text + "\0");
				int from = 0;
				int hit;
				while ((hit = this.data.AsSpan(from).IndexOf(needle)) >= 0)
				{
					int offset = from + hit;
					from = offset + 1;
					if (offset > 0 && this.data[offset - 1] != 0)
						continue;

					uint rva = this.rvaOf(offset);
					if (rva != 0)
						found[rva] = text;
				}
			}

			return found;
		}

		internal List<(uint site, string text)> leaReferences(Dictionary<uint, string> targets)
		{
			List<(uint site, string text)> hits = new List<(uint site, string text)>();
			foreach (Section section in this.sections)
			{
				if (!section.code)
					continue;

				ReadOnlySpan<byte> code = this.data.AsSpan((int)section.raw, (int)section.rawSize);
				for (int i = 0; i + Lea.kLength <= code.Length; i++)
				{
					if ((code[i] != Lea.kRex && code[i] != Lea.kRexWide) || code[i + 1] != Lea.kOpcode || (code[i + 2] & Lea.kModRmMask) != Lea.kRipRelative)
						continue;

					uint site = section.rva + (uint)i;
					uint target = (uint)(site + Lea.kLength + BinaryPrimitives.ReadInt32LittleEndian(code.Slice(i + Lea.kDisplacement)));
					if (targets.TryGetValue(target, out string text))
						hits.Add((site, text));
				}
			}

			return hits;
		}

		protected int offsetOf(uint rva)
		{
			foreach (Section section in this.sections)
			{
				if (rva >= section.rva && rva - section.rva < section.rawSize)
					return (int)(section.raw + (rva - section.rva));
			}

			return -1;
		}

		protected string cString(int offset)
		{
			int end = Array.IndexOf(this.data, (byte)0, offset);
			return Encoding.ASCII.GetString(this.data, offset, end - offset);
		}

		protected int u32(int offset) => BinaryPrimitives.ReadInt32LittleEndian(this.data.AsSpan(offset));

		protected int u16(int offset) => BinaryPrimitives.ReadUInt16LittleEndian(this.data.AsSpan(offset));

		private uint rvaOf(int offset)
		{
			foreach (Section section in this.sections)
			{
				if (offset >= section.raw && offset < section.raw + section.rawSize)
					return section.rva + (uint)(offset - section.raw);
			}

			return 0;
		}
	}
}
