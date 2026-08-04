// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.DateTimeParser
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000A5")]
internal struct DateTimeParser
{
	[Token(Token = "0x40003E1")]
	[FieldOffset(Offset = "0x0")]
	public int Year;

	[Token(Token = "0x40003E2")]
	[FieldOffset(Offset = "0x4")]
	public int Month;

	[Token(Token = "0x40003E3")]
	[FieldOffset(Offset = "0x8")]
	public int Day;

	[Token(Token = "0x40003E4")]
	[FieldOffset(Offset = "0xC")]
	public int Hour;

	[Token(Token = "0x40003E5")]
	[FieldOffset(Offset = "0x10")]
	public int Minute;

	[Token(Token = "0x40003E6")]
	[FieldOffset(Offset = "0x14")]
	public int Second;

	[Token(Token = "0x40003E7")]
	[FieldOffset(Offset = "0x18")]
	public int Fraction;

	[Token(Token = "0x40003E8")]
	[FieldOffset(Offset = "0x1C")]
	public int ZoneHour;

	[Token(Token = "0x40003E9")]
	[FieldOffset(Offset = "0x20")]
	public int ZoneMinute;

	[Token(Token = "0x40003EA")]
	[FieldOffset(Offset = "0x24")]
	public ParserTimeZone Zone;

	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x28")]
	private char[] _text;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x30")]
	private int _end;

	[Token(Token = "0x40003ED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int[] Power10;

	[Token(Token = "0x40003EE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int Lzyyyy;

	[Token(Token = "0x40003EF")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int Lzyyyy_;

	[Token(Token = "0x40003F0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int Lzyyyy_MM;

	[Token(Token = "0x40003F1")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int Lzyyyy_MM_;

	[Token(Token = "0x40003F2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int Lzyyyy_MM_dd;

	[Token(Token = "0x40003F3")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int Lzyyyy_MM_ddT;

	[Token(Token = "0x40003F4")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int LzHH;

	[Token(Token = "0x40003F5")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int LzHH_;

	[Token(Token = "0x40003F6")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int LzHH_mm;

	[Token(Token = "0x40003F7")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int LzHH_mm_;

	[Token(Token = "0x40003F8")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int LzHH_mm_ss;

	[Token(Token = "0x40003F9")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int Lz_;

	[Token(Token = "0x40003FA")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Lz_zz;

	[Token(Token = "0x40003FB")]
	private const short MaxFractionDigits = 7;

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x3DB13F0", Offset = "0x3DB13F0", VA = "0x3DB13F0")]
	static DateTimeParser()
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x3DB1660", Offset = "0x3DB1660", VA = "0x3DB1660")]
	public bool Parse(char[] text, int startIndex, int length)
	{
		return default(bool);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x3DB17F0", Offset = "0x3DB17F0", VA = "0x3DB17F0")]
	private bool ParseDate(int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x3DB1A90", Offset = "0x3DB1A90", VA = "0x3DB1A90")]
	private bool ParseTimeAndZoneAndWhitespace(int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x3DB1C50", Offset = "0x3DB1C50", VA = "0x3DB1C50")]
	private bool ParseTime(ref int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x3DB2180", Offset = "0x3DB2180", VA = "0x3DB2180")]
	private bool ParseZone(int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x3DB1B20", Offset = "0x3DB1B20", VA = "0x3DB1B20")]
	private bool Parse4Digit(int start, out int num)
	{
		return default(bool);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x3DB1BE0", Offset = "0x3DB1BE0", VA = "0x3DB1BE0")]
	private bool Parse2Digit(int start, out int num)
	{
		return default(bool);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x3DB1A60", Offset = "0x3DB1A60", VA = "0x3DB1A60")]
	private bool ParseChar(int start, char ch)
	{
		return default(bool);
	}
}
