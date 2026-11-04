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
	[Address(RVA = "0x1B07C60", Offset = "0x1B06260", VA = "0x181B07C60")]
	private static void Write2Dig(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x25CE0D0", Offset = "0x25CC6D0", VA = "0x1825CE0D0")]
	private static void Write4DigNeg(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x25CE000", Offset = "0x25CC600", VA = "0x1825CE000")]
	private static void Write3Dec(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x25CE220", Offset = "0x25CC820", VA = "0x1825CE220")]
	private static void WriteDate(StringBuilder sb, int yr, int mnth, int day)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x25CE800", Offset = "0x25CCE00", VA = "0x1825CE800")]
	private static void WriteTime(StringBuilder sb, int hr, int min, int sec, int ms)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x25CE350", Offset = "0x25CC950", VA = "0x1825CE350")]
	private static void WriteTimeFullPrecision(StringBuilder sb, int hr, int min, int sec, int fraction)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x25CE710", Offset = "0x25CCD10", VA = "0x1825CE710")]
	private static void WriteTimeZone(StringBuilder sb, TimeSpan zone)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x25CE5D0", Offset = "0x25CCBD0", VA = "0x1825CE5D0")]
	private static void WriteTimeZone(StringBuilder sb, bool negTimeZone, int hr, int min)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x25CD1B0", Offset = "0x25CB7B0", VA = "0x1825CD1B0")]
	private static void BreakDownXsdDateTime(long val, out int yr, out int mnth, out int day, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x25CD3A0", Offset = "0x25CB9A0", VA = "0x1825CD3A0")]
	private static void BreakDownXsdDate(long val, out int yr, out int mnth, out int day, out bool negTimeZone, out int hr, out int min)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x25CD580", Offset = "0x25CBB80", VA = "0x1825CD580")]
	private static void BreakDownXsdTime(long val, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x25CEA40", Offset = "0x25CD040", VA = "0x1825CEA40")]
	public static string XsdDateTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x25CECE0", Offset = "0x25CD2E0", VA = "0x1825CECE0")]
	public static string XsdDateToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x25CFDB0", Offset = "0x25CE3B0", VA = "0x1825CFDB0")]
	public static string XsdTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x25CDD60", Offset = "0x25CC360", VA = "0x1825CDD60")]
	public static string SqlDateTimeToString(int dateticks, uint timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x25CDC80", Offset = "0x25CC280", VA = "0x1825CDC80")]
	public static DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x25CDEE0", Offset = "0x25CC4E0", VA = "0x1825CDEE0")]
	public static string SqlSmallDateTimeToString(short dateticks, ushort timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x25CDE70", Offset = "0x25CC470", VA = "0x1825CDE70")]
	public static DateTime SqlSmallDateTimeToDateTime(short dateticks, ushort timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x25CF770", Offset = "0x25CDD70", VA = "0x1825CF770")]
	public static DateTime XsdKatmaiDateToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x25CF510", Offset = "0x25CDB10", VA = "0x1825CF510")]
	public static DateTime XsdKatmaiDateTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x25CFBF0", Offset = "0x25CE1F0", VA = "0x1825CFBF0")]
	public static DateTime XsdKatmaiTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x25CF030", Offset = "0x25CD630", VA = "0x1825CF030")]
	public static DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x25CF220", Offset = "0x25CD820", VA = "0x1825CF220")]
	public static DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x25CF9F0", Offset = "0x25CDFF0", VA = "0x1825CF9F0")]
	public static DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x25CF830", Offset = "0x25CDE30", VA = "0x1825CF830")]
	public static string XsdKatmaiDateToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x25CF5E0", Offset = "0x25CDBE0", VA = "0x1825CF5E0")]
	public static string XsdKatmaiDateTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x25CFC50", Offset = "0x25CE250", VA = "0x1825CFC50")]
	public static string XsdKatmaiTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x25CF0B0", Offset = "0x25CD6B0", VA = "0x1825CF0B0")]
	public static string XsdKatmaiDateOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x25CF350", Offset = "0x25CD950", VA = "0x1825CF350")]
	public static string XsdKatmaiDateTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x25CFA70", Offset = "0x25CE070", VA = "0x1825CFA70")]
	public static string XsdKatmaiTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x25CD940", Offset = "0x25CBF40", VA = "0x1825CD940")]
	private static long GetKatmaiDateTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x25CD9B0", Offset = "0x25CBFB0", VA = "0x1825CD9B0")]
	private static long GetKatmaiTimeTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x25CDC30", Offset = "0x25CC230", VA = "0x1825CDC30")]
	private static long GetKatmaiTimeZoneTicks(byte[] data, int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x25CD810", Offset = "0x25CBE10", VA = "0x1825CD810")]
	private static int GetFractions(DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x25CD6D0", Offset = "0x25CBCD0", VA = "0x1825CD6D0")]
	private static int GetFractions(DateTimeOffset dt)
	{
		return default(int);
	}
}
