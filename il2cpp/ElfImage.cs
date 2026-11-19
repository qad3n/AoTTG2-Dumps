using System;
using System.Buffers.Binary;
using System.Collections.Generic;
using System.IO;

namespace loader
{
	// just enough elf64 to read sections and dynamic exports of a game module, which links at address 0 so rvas are addresses
	internal sealed class ElfImage : ModuleImage
	{
		private static class Headers
		{
			internal const int kClass = 4;
			internal const byte kClass64 = 2;
			internal const int kSectionTable = 0x28;
			internal const int kSectionEntrySize = 0x3a;
			internal const int kSectionCount = 0x3c;
		}

		private static class Sections
		{
			internal const int kType = 4;
			internal const int kFlags = 8;
			internal const int kAddress = 0x10;
			internal const int kOffset = 0x18;
			internal const int kSize = 0x20;
			internal const int kLink = 0x28;
			internal const int kNoBits = 8;
			internal const int kDynamicSymbols = 11;
			internal const long kExecute = 4;
		}

		private static class Symbols
		{
			internal const int kSize = 24;
			internal const int kInfo = 4;
			internal const int kSectionIndex = 6;
			internal const int kTypeMask = 0xf;
			internal const int kBindShift = 4;
			internal const int kFunction = 2;
			internal const int kGlobal = 1;
			// the statically linked c++ runtime exports mangled names that can never be api exports
			internal const string kMangledPrefix = "_Z";
		}

		private readonly record struct Header(int type, long flags, long address, long offset, long size, int link);

		private readonly Header[] m_headers;

		internal ElfImage(byte[] data) : base(data)
		{
			if (data[Headers.kClass] != Headers.kClass64)
				throw new InvalidDataException("not a 64 bit elf image");

			long table = this.u64(Headers.kSectionTable);
			int entrySize = this.u16(Headers.kSectionEntrySize);
			int count = this.u16(Headers.kSectionCount);
			m_headers = new Header[count];
			List<Section> mapped = new List<Section>();
			for (int i = 0; i < count; i++)
			{
				int at = checked((int)(table + i * entrySize));
				Header header = new Header(this.u32(at + Sections.kType), this.u64(at + Sections.kFlags), this.u64(at + Sections.kAddress), this.u64(at + Sections.kOffset), this.u64(at + Sections.kSize), this.u32(at + Sections.kLink));
				m_headers[i] = header;
				if (header.address == 0 || header.type == Sections.kNoBits)
					continue;

				bool code = (header.flags & Sections.kExecute) != 0;
				mapped.Add(new Section(checked((uint)header.address), checked((uint)header.offset), checked((uint)header.size), code));
			}

			this.sections = mapped.ToArray();
		}

		internal override List<string> exportNames()
		{
			List<string> names = new List<string>();
			foreach (Header table in m_headers)
			{
				if (table.type != Sections.kDynamicSymbols)
					continue;

				int strings = checked((int)m_headers[table.link].offset);
				for (long at = table.offset; at + Symbols.kSize <= table.offset + table.size; at += Symbols.kSize)
				{
					int symbol = checked((int)at);
					byte info = this.data[symbol + Symbols.kInfo];
					bool exported = this.u16(symbol + Symbols.kSectionIndex) != 0 && info >> Symbols.kBindShift == Symbols.kGlobal && (info & Symbols.kTypeMask) == Symbols.kFunction;
					if (!exported)
						continue;

					string name = this.cString(strings + this.u32(symbol));
					if (!name.StartsWith(Symbols.kMangledPrefix, StringComparison.Ordinal))
						names.Add(name);
				}
			}

			return names;
		}

		private long u64(int offset) => BinaryPrimitives.ReadInt64LittleEndian(this.data.AsSpan(offset));
	}
}
