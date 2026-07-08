using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200027E")]
internal struct XsdDateTime
{
	[Token(Token = "0x200027F")]
	private enum DateTimeTypeCode
	{
		[Token(Token = "0x4000D9F")]
		DateTime,
		[Token(Token = "0x4000DA0")]
		Time,
		[Token(Token = "0x4000DA1")]
		Date,
		[Token(Token = "0x4000DA2")]
		GYearMonth,
		[Token(Token = "0x4000DA3")]
		GYear,
		[Token(Token = "0x4000DA4")]
		GMonthDay,
		[Token(Token = "0x4000DA5")]
		GDay,
		[Token(Token = "0x4000DA6")]
		GMonth,
		[Token(Token = "0x4000DA7")]
		XdrDateTime
	}

	[Token(Token = "0x2000280")]
	private enum XsdDateTimeKind
	{
		[Token(Token = "0x4000DA9")]
		Unspecified,
		[Token(Token = "0x4000DAA")]
		Zulu,
		[Token(Token = "0x4000DAB")]
		LocalWestOfZulu,
		[Token(Token = "0x4000DAC")]
		LocalEastOfZulu
	}

	[Token(Token = "0x2000281")]
	private struct Parser
	{
		[Token(Token = "0x4000DAD")]
		[FieldOffset(Offset = "0x0")]
		public DateTimeTypeCode typeCode;

		[Token(Token = "0x4000DAE")]
		[FieldOffset(Offset = "0x4")]
		public int year;

		[Token(Token = "0x4000DAF")]
		[FieldOffset(Offset = "0x8")]
		public int month;

		[Token(Token = "0x4000DB0")]
		[FieldOffset(Offset = "0xC")]
		public int day;

		[Token(Token = "0x4000DB1")]
		[FieldOffset(Offset = "0x10")]
		public int hour;

		[Token(Token = "0x4000DB2")]
		[FieldOffset(Offset = "0x14")]
		public int minute;

		[Token(Token = "0x4000DB3")]
		[FieldOffset(Offset = "0x18")]
		public int second;

		[Token(Token = "0x4000DB4")]
		[FieldOffset(Offset = "0x1C")]
		public int fraction;

		[Token(Token = "0x4000DB5")]
		[FieldOffset(Offset = "0x20")]
		public XsdDateTimeKind kind;

		[Token(Token = "0x4000DB6")]
		[FieldOffset(Offset = "0x24")]
		public int zoneHour;

		[Token(Token = "0x4000DB7")]
		[FieldOffset(Offset = "0x28")]
		public int zoneMinute;

		[Token(Token = "0x4000DB8")]
		[FieldOffset(Offset = "0x30")]
		private string text;

		[Token(Token = "0x4000DB9")]
		[FieldOffset(Offset = "0x38")]
		private int length;

		[Token(Token = "0x4000DBA")]
		[FieldOffset(Offset = "0x0")]
		private static int[] Power10;

		[Token(Token = "0x6001A08")]
		[Address(RVA = "0x442D5A0", Offset = "0x442D5A0", VA = "0x442D5A0")]
		public bool Parse(string text, XsdDateTimeFlags kinds)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x4431490", Offset = "0x4431490", VA = "0x4431490")]
		private bool ParseDate(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0A")]
		[Address(RVA = "0x44317D0", Offset = "0x44317D0", VA = "0x44317D0")]
		private bool ParseTimeAndZoneAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0B")]
		[Address(RVA = "0x4431B80", Offset = "0x4431B80", VA = "0x4431B80")]
		private bool ParseTimeAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0C")]
		[Address(RVA = "0x4431D70", Offset = "0x4431D70", VA = "0x4431D70")]
		private bool ParseTime(ref int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x4431860", Offset = "0x4431860", VA = "0x4431860")]
		private bool ParseZoneAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0E")]
		[Address(RVA = "0x4431C00", Offset = "0x4431C00", VA = "0x4431C00")]
		private bool Parse4Dig(int start, ref int num)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0F")]
		[Address(RVA = "0x4431CF0", Offset = "0x4431CF0", VA = "0x4431CF0")]
		private bool Parse2Dig(int start, ref int num)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A10")]
		[Address(RVA = "0x44317A0", Offset = "0x44317A0", VA = "0x44317A0")]
		private bool ParseChar(int start, char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A11")]
		[Address(RVA = "0x4431480", Offset = "0x4431480", VA = "0x4431480")]
		private static bool Test(XsdDateTimeFlags left, XsdDateTimeFlags right)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000D85")]
	[FieldOffset(Offset = "0x0")]
	private DateTime dt;

	[Token(Token = "0x4000D86")]
	[FieldOffset(Offset = "0x8")]
	private uint extra;

	[Token(Token = "0x4000D87")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int Lzyyyy;

	[Token(Token = "0x4000D88")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int Lzyyyy_;

	[Token(Token = "0x4000D89")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int Lzyyyy_MM;

	[Token(Token = "0x4000D8A")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int Lzyyyy_MM_;

	[Token(Token = "0x4000D8B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int Lzyyyy_MM_dd;

	[Token(Token = "0x4000D8C")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int Lzyyyy_MM_ddT;

	[Token(Token = "0x4000D8D")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int LzHH;

	[Token(Token = "0x4000D8E")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int LzHH_;

	[Token(Token = "0x4000D8F")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int LzHH_mm;

	[Token(Token = "0x4000D90")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int LzHH_mm_;

	[Token(Token = "0x4000D91")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int LzHH_mm_ss;

	[Token(Token = "0x4000D92")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int Lz_;

	[Token(Token = "0x4000D93")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int Lz_zz;

	[Token(Token = "0x4000D94")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int Lz_zz_;

	[Token(Token = "0x4000D95")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Lz_zz_zz;

	[Token(Token = "0x4000D96")]
	[FieldOffset(Offset = "0x3C")]
	private static readonly int Lz__;

	[Token(Token = "0x4000D97")]
	[FieldOffset(Offset = "0x40")]
	private static readonly int Lz__mm;

	[Token(Token = "0x4000D98")]
	[FieldOffset(Offset = "0x44")]
	private static readonly int Lz__mm_;

	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int Lz__mm__;

	[Token(Token = "0x4000D9A")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int Lz__mm_dd;

	[Token(Token = "0x4000D9B")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int Lz___;

	[Token(Token = "0x4000D9C")]
	[FieldOffset(Offset = "0x54")]
	private static readonly int Lz___dd;

	[Token(Token = "0x4000D9D")]
	[FieldOffset(Offset = "0x58")]
	private static readonly XmlTypeCode[] typeCodes;

	[Token(Token = "0x170006B1")]
	private DateTimeTypeCode InternalTypeCode
	{
		[Token(Token = "0x60019F4")]
		[Address(RVA = "0x442EEA0", Offset = "0x442EEA0", VA = "0x442EEA0")]
		get
		{
			return default(DateTimeTypeCode);
		}
	}

	[Token(Token = "0x170006B2")]
	private XsdDateTimeKind InternalKind
	{
		[Token(Token = "0x60019F5")]
		[Address(RVA = "0x442EEB0", Offset = "0x442EEB0", VA = "0x442EEB0")]
		get
		{
			return default(XsdDateTimeKind);
		}
	}

	[Token(Token = "0x170006B3")]
	public int Year
	{
		[Token(Token = "0x60019F6")]
		[Address(RVA = "0x442EEC0", Offset = "0x442EEC0", VA = "0x442EEC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B4")]
	public int Month
	{
		[Token(Token = "0x60019F7")]
		[Address(RVA = "0x442EF30", Offset = "0x442EF30", VA = "0x442EF30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B5")]
	public int Day
	{
		[Token(Token = "0x60019F8")]
		[Address(RVA = "0x442EFA0", Offset = "0x442EFA0", VA = "0x442EFA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B6")]
	public int Hour
	{
		[Token(Token = "0x60019F9")]
		[Address(RVA = "0x442F010", Offset = "0x442F010", VA = "0x442F010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B7")]
	public int Minute
	{
		[Token(Token = "0x60019FA")]
		[Address(RVA = "0x442F080", Offset = "0x442F080", VA = "0x442F080")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B8")]
	public int Second
	{
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0x442F0F0", Offset = "0x442F0F0", VA = "0x442F0F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B9")]
	public int Fraction
	{
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x442F160", Offset = "0x442F160", VA = "0x442F160")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BA")]
	public int ZoneHour
	{
		[Token(Token = "0x60019FD")]
		[Address(RVA = "0x442F260", Offset = "0x442F260", VA = "0x442F260")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BB")]
	public int ZoneMinute
	{
		[Token(Token = "0x60019FE")]
		[Address(RVA = "0x442F270", Offset = "0x442F270", VA = "0x442F270")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x442D2D0", Offset = "0x442D2D0", VA = "0x442D2D0")]
	public XsdDateTime(string text, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x442E890", Offset = "0x442E890", VA = "0x442E890")]
	private XsdDateTime(Parser parser)
	{
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x442E7D0", Offset = "0x442E7D0", VA = "0x442E7D0")]
	private void InitiateXsdDateTime(Parser parser)
	{
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x442EA40", Offset = "0x442EA40", VA = "0x442EA40")]
	internal static bool TryParse(string text, XsdDateTimeFlags kinds, out XsdDateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x442EB10", Offset = "0x442EB10", VA = "0x442EB10")]
	public XsdDateTime(DateTime dateTime, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x442ECB0", Offset = "0x442ECB0", VA = "0x442ECB0")]
	public XsdDateTime(DateTimeOffset dateTimeOffset)
	{
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x442ED10", Offset = "0x442ED10", VA = "0x442ED10")]
	public XsdDateTime(DateTimeOffset dateTimeOffset, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x442F280", Offset = "0x442F280", VA = "0x442F280")]
	public static implicit operator DateTime(XsdDateTime xdt)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x442F980", Offset = "0x442F980", VA = "0x442F980")]
	public static implicit operator DateTimeOffset(XsdDateTime xdt)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001A01")]
	[Address(RVA = "0x442FE90", Offset = "0x442FE90", VA = "0x442FE90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x4430730", Offset = "0x4430730", VA = "0x4430730")]
	private void PrintDate(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x4430A40", Offset = "0x4430A40", VA = "0x4430A40")]
	private void PrintTime(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x4430EC0", Offset = "0x4430EC0", VA = "0x4430EC0")]
	private void PrintZone(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x4430DF0", Offset = "0x4430DF0", VA = "0x4430DF0")]
	private void IntToCharArray(char[] text, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x4430E60", Offset = "0x4430E60", VA = "0x4430E60")]
	private void ShortToCharArray(char[] text, int start, int value)
	{
	}
}
