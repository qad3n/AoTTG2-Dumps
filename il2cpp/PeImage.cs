using System.Collections.Generic;
using System.IO;

namespace loader
{
	// just enough pe32+ to read sections and exports of a game module
	internal sealed class PeImage : ModuleImage
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

		private readonly uint m_exportDirectory;

		internal PeImage(byte[] data) : base(data)
		{
			int nt = this.u32(Headers.kNtOffset);
			int optional = nt + Headers.kOptional;
			if ((uint)this.u32(nt) != Headers.kSignature || this.u16(optional) != Headers.kPe32Plus)
				throw new InvalidDataException("not a 64 bit pe image");

			m_exportDirectory = (uint)this.u32(optional + Headers.kExportDirectory);

			int count = this.u16(nt + Headers.kSectionCount);
			int table = optional + this.u16(nt + Headers.kOptionalSize);
			Section[] found = new Section[count];
			for (int i = 0; i < count; i++)
			{
				int at = table + i * Sections.kSize;
				bool code = ((uint)this.u32(at + Sections.kFlags) & Sections.kCodeFlag) != 0;
				found[i] = new Section((uint)this.u32(at + Sections.kRva), (uint)this.u32(at + Sections.kRaw), (uint)this.u32(at + Sections.kRawSize), code);
			}

			this.sections = found;
		}

		internal override List<string> exportNames()
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
	}
}
