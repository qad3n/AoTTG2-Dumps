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
	[Address(RVA = "0x467A320", Offset = "0x467A320", VA = "0x467A320")]
	private static void Write2Dig(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x467A390", Offset = "0x467A390", VA = "0x467A390")]
	private static void Write4DigNeg(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x467A4E0", Offset = "0x467A4E0", VA = "0x467A4E0")]
	private static void Write3Dec(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x467A5A0", Offset = "0x467A5A0", VA = "0x467A5A0")]
	private static void WriteDate(StringBuilder sb, int yr, int mnth, int day)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x467A6C0", Offset = "0x467A6C0", VA = "0x467A6C0")]
	private static void WriteTime(StringBuilder sb, int hr, int min, int sec, int ms)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x467A920", Offset = "0x467A920", VA = "0x467A920")]
	private static void WriteTimeFullPrecision(StringBuilder sb, int hr, int min, int sec, int fraction)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x467ABF0", Offset = "0x467ABF0", VA = "0x467ABF0")]
	private static void WriteTimeZone(StringBuilder sb, TimeSpan zone)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x467AD20", Offset = "0x467AD20", VA = "0x467AD20")]
	private static void WriteTimeZone(StringBuilder sb, bool negTimeZone, int hr, int min)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x467AE50", Offset = "0x467AE50", VA = "0x467AE50")]
	private static void BreakDownXsdDateTime(long val, out int yr, out int mnth, out int day, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x467B030", Offset = "0x467B030", VA = "0x467B030")]
	private static void BreakDownXsdDate(long val, out int yr, out int mnth, out int day, out bool negTimeZone, out int hr, out int min)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x467B1A0", Offset = "0x467B1A0", VA = "0x467B1A0")]
	private static void BreakDownXsdTime(long val, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x467B2A0", Offset = "0x467B2A0", VA = "0x467B2A0")]
	public static string XsdDateTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x467B3F0", Offset = "0x467B3F0", VA = "0x467B3F0")]
	public static string XsdDateToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x467B500", Offset = "0x467B500", VA = "0x467B500")]
	public static string XsdTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x467B6D0", Offset = "0x467B6D0", VA = "0x467B6D0")]
	public static string SqlDateTimeToString(int dateticks, uint timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x467B7E0", Offset = "0x467B7E0", VA = "0x467B7E0")]
	public static DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x467B8C0", Offset = "0x467B8C0", VA = "0x467B8C0")]
	public static string SqlSmallDateTimeToString(short dateticks, ushort timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x467BA10", Offset = "0x467BA10", VA = "0x467BA10")]
	public static DateTime SqlSmallDateTimeToDateTime(short dateticks, ushort timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x467BA70", Offset = "0x467BA70", VA = "0x467BA70")]
	public static DateTime XsdKatmaiDateToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x467BBC0", Offset = "0x467BBC0", VA = "0x467BBC0")]
	public static DateTime XsdKatmaiDateTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x467BEE0", Offset = "0x467BEE0", VA = "0x467BEE0")]
	public static DateTime XsdKatmaiTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x467BF30", Offset = "0x467BF30", VA = "0x467BF30")]
	public static DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x467BF80", Offset = "0x467BF80", VA = "0x467BF80")]
	public static DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x467C0F0", Offset = "0x467C0F0", VA = "0x467C0F0")]
	public static DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x467C140", Offset = "0x467C140", VA = "0x467C140")]
	public static string XsdKatmaiDateToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x467C250", Offset = "0x467C250", VA = "0x467C250")]
	public static string XsdKatmaiDateTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x467C4C0", Offset = "0x467C4C0", VA = "0x467C4C0")]
	public static string XsdKatmaiTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x467C640", Offset = "0x467C640", VA = "0x467C640")]
	public static string XsdKatmaiDateOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x467C7E0", Offset = "0x467C7E0", VA = "0x467C7E0")]
	public static string XsdKatmaiDateTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x467CA90", Offset = "0x467CA90", VA = "0x467CA90")]
	public static string XsdKatmaiTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x467BB60", Offset = "0x467BB60", VA = "0x467BB60")]
	private static long GetKatmaiDateTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x467BCA0", Offset = "0x467BCA0", VA = "0x467BCA0")]
	private static long GetKatmaiTimeTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x467C0A0", Offset = "0x467C0A0", VA = "0x467C0A0")]
	private static long GetKatmaiTimeZoneTicks(byte[] data, int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x467C3B0", Offset = "0x467C3B0", VA = "0x467C3B0")]
	private static int GetFractions(DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x467C960", Offset = "0x467C960", VA = "0x467C960")]
	private static int GetFractions(DateTimeOffset dt)
	{
		return default(int);
	}
}
