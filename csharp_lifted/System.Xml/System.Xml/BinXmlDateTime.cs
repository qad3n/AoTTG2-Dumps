// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.BinXmlDateTime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000010")]
internal abstract class BinXmlDateTime
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x0")]
	internal static int[] KatmaiTimeScaleMultiplicator;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly double SQLTicksPerMillisecond;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int SQLTicksPerSecond;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x14")]
	public static readonly int SQLTicksPerMinute;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x18")]
	public static readonly int SQLTicksPerHour;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int SQLTicksPerDay;

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x5F8C9B0", Offset = "0x5F8B9B0", VA = "0x5F8C9B0")]
	private static void Write2Dig(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x5F8CA20", Offset = "0x5F8BA20", VA = "0x5F8CA20")]
	private static void Write4DigNeg(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x5F8CB60", Offset = "0x5F8BB60", VA = "0x5F8CB60")]
	private static void Write3Dec(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5F8CC20", Offset = "0x5F8BC20", VA = "0x5F8CC20")]
	private static void WriteDate(StringBuilder sb, int yr, int mnth, int day)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5F8CD30", Offset = "0x5F8BD30", VA = "0x5F8CD30")]
	private static void WriteTime(StringBuilder sb, int hr, int min, int sec, int ms)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x5F8CF90", Offset = "0x5F8BF90", VA = "0x5F8CF90")]
	private static void WriteTimeFullPrecision(StringBuilder sb, int hr, int min, int sec, int fraction)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5F8D220", Offset = "0x5F8C220", VA = "0x5F8D220")]
	private static void WriteTimeZone(StringBuilder sb, TimeSpan zone)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5F8D340", Offset = "0x5F8C340", VA = "0x5F8D340")]
	private static void WriteTimeZone(StringBuilder sb, bool negTimeZone, int hr, int min)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x5F8D470", Offset = "0x5F8C470", VA = "0x5F8D470")]
	private static void BreakDownXsdDateTime(long val, out int yr, out int mnth, out int day, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5F8D640", Offset = "0x5F8C640", VA = "0x5F8D640")]
	private static void BreakDownXsdDate(long val, out int yr, out int mnth, out int day, out bool negTimeZone, out int hr, out int min)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x5F8D790", Offset = "0x5F8C790", VA = "0x5F8D790")]
	private static void BreakDownXsdTime(long val, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x5F8D890", Offset = "0x5F8C890", VA = "0x5F8D890")]
	public static string XsdDateTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x5F8D9E0", Offset = "0x5F8C9E0", VA = "0x5F8D9E0")]
	public static string XsdDateToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x5F8DAF0", Offset = "0x5F8CAF0", VA = "0x5F8DAF0")]
	public static string XsdTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x5F8DCC0", Offset = "0x5F8CCC0", VA = "0x5F8DCC0")]
	public static string SqlDateTimeToString(int dateticks, uint timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x5F8DDE0", Offset = "0x5F8CDE0", VA = "0x5F8DDE0")]
	public static DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x5F8DEC0", Offset = "0x5F8CEC0", VA = "0x5F8DEC0")]
	public static string SqlSmallDateTimeToString(short dateticks, ushort timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x5F8E020", Offset = "0x5F8D020", VA = "0x5F8E020")]
	public static DateTime SqlSmallDateTimeToDateTime(short dateticks, ushort timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x5F8E080", Offset = "0x5F8D080", VA = "0x5F8E080")]
	public static DateTime XsdKatmaiDateToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x5F8E1D0", Offset = "0x5F8D1D0", VA = "0x5F8E1D0")]
	public static DateTime XsdKatmaiDateTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x5F8E4E0", Offset = "0x5F8D4E0", VA = "0x5F8E4E0")]
	public static DateTime XsdKatmaiTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x5F8E530", Offset = "0x5F8D530", VA = "0x5F8E530")]
	public static DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x5F8E580", Offset = "0x5F8D580", VA = "0x5F8E580")]
	public static DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x5F8E6F0", Offset = "0x5F8D6F0", VA = "0x5F8E6F0")]
	public static DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x5F8E740", Offset = "0x5F8D740", VA = "0x5F8E740")]
	public static string XsdKatmaiDateToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x5F8E840", Offset = "0x5F8D840", VA = "0x5F8E840")]
	public static string XsdKatmaiDateTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x5F8EA90", Offset = "0x5F8DA90", VA = "0x5F8EA90")]
	public static string XsdKatmaiTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x5F8EC20", Offset = "0x5F8DC20", VA = "0x5F8EC20")]
	public static string XsdKatmaiDateOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x5F8EDB0", Offset = "0x5F8DDB0", VA = "0x5F8EDB0")]
	public static string XsdKatmaiDateTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x5F8F070", Offset = "0x5F8E070", VA = "0x5F8F070")]
	public static string XsdKatmaiTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x5F8E170", Offset = "0x5F8D170", VA = "0x5F8E170")]
	private static long GetKatmaiDateTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x5F8E2A0", Offset = "0x5F8D2A0", VA = "0x5F8E2A0")]
	private static long GetKatmaiTimeTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x5F8E6A0", Offset = "0x5F8D6A0", VA = "0x5F8E6A0")]
	private static long GetKatmaiTimeZoneTicks(byte[] data, int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x5F8E990", Offset = "0x5F8D990", VA = "0x5F8E990")]
	private static int GetFractions(DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x5F8EF40", Offset = "0x5F8DF40", VA = "0x5F8EF40")]
	private static int GetFractions(DateTimeOffset dt)
	{
		return default(int);
	}
}
