// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XsdDateTime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x26C24B0", Offset = "0x26C0AB0", VA = "0x1826C24B0")]
		public bool Parse(string text, XsdDateTimeFlags kinds)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x26C1A10", Offset = "0x26C0010", VA = "0x1826C1A10")]
		private bool ParseDate(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0A")]
		[Address(RVA = "0x26C1D70", Offset = "0x26C0370", VA = "0x1826C1D70")]
		private bool ParseTimeAndZoneAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0B")]
		[Address(RVA = "0x26C1CF0", Offset = "0x26C02F0", VA = "0x1826C1CF0")]
		private bool ParseTimeAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0C")]
		[Address(RVA = "0x26C1E00", Offset = "0x26C0400", VA = "0x1826C1E00")]
		private bool ParseTime(ref int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x26C2210", Offset = "0x26C0810", VA = "0x1826C2210")]
		private bool ParseZoneAndWhitespace(int start)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0E")]
		[Address(RVA = "0x26C18C0", Offset = "0x26BFEC0", VA = "0x1826C18C0")]
		private bool Parse4Dig(int start, ref int num)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A0F")]
		[Address(RVA = "0x26C1830", Offset = "0x26BFE30", VA = "0x1826C1830")]
		private bool Parse2Dig(int start, ref int num)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A10")]
		[Address(RVA = "0x26C19D0", Offset = "0x26BFFD0", VA = "0x1826C19D0")]
		private bool ParseChar(int start, char ch)
		{
			return default(bool);
		}

		[Token(Token = "0x6001A11")]
		[Address(RVA = "0x26C3560", Offset = "0x26C1B60", VA = "0x1826C3560")]
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
		[Address(RVA = "0x26C63C0", Offset = "0x26C49C0", VA = "0x1826C63C0")]
		get
		{
			return default(DateTimeTypeCode);
		}
	}

	[Token(Token = "0x170006B2")]
	private XsdDateTimeKind InternalKind
	{
		[Token(Token = "0x60019F5")]
		[Address(RVA = "0x1A931A0", Offset = "0x1A917A0", VA = "0x181A931A0")]
		get
		{
			return default(XsdDateTimeKind);
		}
	}

	[Token(Token = "0x170006B3")]
	public int Year
	{
		[Token(Token = "0x60019F6")]
		[Address(RVA = "0x26C64C0", Offset = "0x26C4AC0", VA = "0x1826C64C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B4")]
	public int Month
	{
		[Token(Token = "0x60019F7")]
		[Address(RVA = "0x26C6420", Offset = "0x26C4A20", VA = "0x1826C6420")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B5")]
	public int Day
	{
		[Token(Token = "0x60019F8")]
		[Address(RVA = "0x26C6200", Offset = "0x26C4800", VA = "0x1826C6200")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B6")]
	public int Hour
	{
		[Token(Token = "0x60019F9")]
		[Address(RVA = "0x26C6370", Offset = "0x26C4970", VA = "0x1826C6370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B7")]
	public int Minute
	{
		[Token(Token = "0x60019FA")]
		[Address(RVA = "0x26C63D0", Offset = "0x26C49D0", VA = "0x1826C63D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B8")]
	public int Second
	{
		[Token(Token = "0x60019FB")]
		[Address(RVA = "0x26C6470", Offset = "0x26C4A70", VA = "0x1826C6470")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006B9")]
	public int Fraction
	{
		[Token(Token = "0x60019FC")]
		[Address(RVA = "0x26C6250", Offset = "0x26C4850", VA = "0x1826C6250")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BA")]
	public int ZoneHour
	{
		[Token(Token = "0x60019FD")]
		[Address(RVA = "0x1A931B0", Offset = "0x1A917B0", VA = "0x181A931B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006BB")]
	public int ZoneMinute
	{
		[Token(Token = "0x60019FE")]
		[Address(RVA = "0x180F960", Offset = "0x180DF60", VA = "0x18180F960")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x26C5D20", Offset = "0x26C4320", VA = "0x1826C5D20")]
	public XsdDateTime(string text, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x26C5F50", Offset = "0x26C4550", VA = "0x1826C5F50")]
	private XsdDateTime(Parser parser)
	{
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x26C42E0", Offset = "0x26C28E0", VA = "0x1826C42E0")]
	private void InitiateXsdDateTime(Parser parser)
	{
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x26C5440", Offset = "0x26C3A40", VA = "0x1826C5440")]
	internal static bool TryParse(string text, XsdDateTimeFlags kinds, out XsdDateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x26C5FE0", Offset = "0x26C45E0", VA = "0x1826C5FE0")]
	public XsdDateTime(DateTime dateTime, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x26C6190", Offset = "0x26C4790", VA = "0x1826C6190")]
	public XsdDateTime(DateTimeOffset dateTimeOffset)
	{
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x26C5BA0", Offset = "0x26C41A0", VA = "0x1826C5BA0")]
	public XsdDateTime(DateTimeOffset dateTimeOffset, XsdDateTimeFlags kinds)
	{
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x26C6510", Offset = "0x26C4B10", VA = "0x1826C6510")]
	public static implicit operator DateTime(XsdDateTime xdt)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x26C6B70", Offset = "0x26C5170", VA = "0x1826C6B70")]
	public static implicit operator DateTimeOffset(XsdDateTime xdt)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6001A01")]
	[Address(RVA = "0x26C4E40", Offset = "0x26C3440", VA = "0x1826C4E40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x26C4440", Offset = "0x26C2A40", VA = "0x1826C4440")]
	private void PrintDate(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x26C4750", Offset = "0x26C2D50", VA = "0x1826C4750")]
	private void PrintTime(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x26C4B70", Offset = "0x26C3170", VA = "0x1826C4B70")]
	private void PrintZone(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x26C43A0", Offset = "0x26C29A0", VA = "0x1826C43A0")]
	private void IntToCharArray(char[] text, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6001A06")]
	[Address(RVA = "0x26C4DC0", Offset = "0x26C33C0", VA = "0x1826C4DC0")]
	private void ShortToCharArray(char[] text, int start, int value)
	{
	}
}
