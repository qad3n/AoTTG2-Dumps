using System;
using System.Buffers.Binary;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace loader
{
	// just enough pe32+ to read sections, exports and rip relative references of a game module
	internal sealed class PeImage
	{
		private static class Headers
		{
			internal const int kNtOffset = 0x3c;
			internal const uint kSignature = 0x4550;
			internal const ushort kPe32Plus = 0x20b;
			internal const int kSectionCount = 6;
			internal const int kOptionalSize = 20;
			internal const int kOptional = 24;
			internal const int kImageBase = 24;
			internal const int kExportDirectory = 112;
		}

		private static class Sections
		{
			internal const int kSize = 40;
			internal const int kRva = 12;
			internal const int kRawSize = 16;
			internal const int kRaw = 20;
			internal const int kFlags = 36;
			internal const uint kCodeFlag = 0x20000000;
		}

		private static class Exports
		{
			internal const int kNameCount = 24;
			internal const int kNameTable = 32;
		}

		// lea r64 with a rip relative operand, the form msvc uses to pass a string literal
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

		private readonly record struct Section(uint rva, uint raw, uint rawSize, bool code);

		private readonly Section[] m_sections;
		private readonly uint m_exportDirectory;

		internal byte[] data { get; }

		private PeImage(byte[] data)
		{
			this.data = data;
			int nt = this.u32(Headers.kNtOffset);
			int optional = nt + Headers.kOptional;
			if ((uint)this.u32(nt) != Headers.kSignature || this.u16(optional) != Headers.kPe32Plus)
				throw new InvalidDataException("not a 64 bit pe image");

			m_exportDirectory = (uint)this.u32(optional + Headers.kExportDirectory);

			int count = this.u16(nt + Headers.kSectionCount);
			int table = optional + this.u16(nt + Headers.kOptionalSize);
			m_sections = new Section[count];
			for (int i = 0; i < count; i++)
			{
				int at = table + i * Sections.kSize;
				bool code = ((uint)this.u32(at + Sections.kFlags) & Sections.kCodeFlag) != 0;
				m_sections[i] = new Section((uint)this.u32(at + Sections.kRva), (uint)this.u32(at + Sections.kRaw), (uint)this.u32(at + Sections.kRawSize), code);
			}
		}

		internal static PeImage load(string path) => new PeImage(File.ReadAllBytes(path));

		internal ReadOnlySpan<byte> read(uint rva, int count)
		{
			int offset = this.offsetOf(rva);
			if (offset < 0 || offset + count > this.data.Length)
				throw new InvalidDataException($"rva 0x{rva:x} is outside the image");

			return this.data.AsSpan(offset, count);
		}

		internal List<string> exportNames()
		{
			List<string> names = new List<string>();
			if (m_exportDirectory == 0)
				return names;

			int directory = this.offsetOf(m_exportDirectory);
			int count = this.u32(directory + Exports.kNameCount);
			int table = this.offsetOf((uint)this.u32(directory + Exports.kNameTable));
			for (int i = 0; i < count; i++)
				names.Add(this.cString(this.offsetOf((uint)this.u32(table + i * sizeof(uint)))));

			return names;
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
			foreach (Section section in m_sections)
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

		private int offsetOf(uint rva)
		{
			foreach (Section section in m_sections)
			{
				if (rva >= section.rva && rva - section.rva < section.rawSize)
					return (int)(section.raw + (rva - section.rva));
			}

			return -1;
		}

		private uint rvaOf(int offset)
		{
			foreach (Section section in m_sections)
			{
				if (offset >= section.raw && offset < section.raw + section.rawSize)
					return section.rva + (uint)(offset - section.raw);
			}

			return 0;
		}

		private string cString(int offset)
		{
			int end = Array.IndexOf(this.data, (byte)0, offset);
			return Encoding.ASCII.GetString(this.data, offset, end - offset);
		}

		private int u32(int offset) => BinaryPrimitives.ReadInt32LittleEndian(this.data.AsSpan(offset));

		private int u16(int offset) => BinaryPrimitives.ReadUInt16LittleEndian(this.data.AsSpan(offset));
	}
}
