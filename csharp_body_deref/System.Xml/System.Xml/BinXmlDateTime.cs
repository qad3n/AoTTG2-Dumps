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
	[Address(RVA = "0x4348250", Offset = "0x4348250", VA = "0x4348250")]
	private static void Write2Dig(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x43482C0", Offset = "0x43482C0", VA = "0x43482C0")]
	private static void Write4DigNeg(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4348410", Offset = "0x4348410", VA = "0x4348410")]
	private static void Write3Dec(StringBuilder sb, int val)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x43484D0", Offset = "0x43484D0", VA = "0x43484D0")]
	private static void WriteDate(StringBuilder sb, int yr, int mnth, int day)
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x43485F0", Offset = "0x43485F0", VA = "0x43485F0")]
	private static void WriteTime(StringBuilder sb, int hr, int min, int sec, int ms)
	{
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4348850", Offset = "0x4348850", VA = "0x4348850")]
	private static void WriteTimeFullPrecision(StringBuilder sb, int hr, int min, int sec, int fraction)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4348B20", Offset = "0x4348B20", VA = "0x4348B20")]
	private static void WriteTimeZone(StringBuilder sb, TimeSpan zone)
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4348C50", Offset = "0x4348C50", VA = "0x4348C50")]
	private static void WriteTimeZone(StringBuilder sb, bool negTimeZone, int hr, int min)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4348D80", Offset = "0x4348D80", VA = "0x4348D80")]
	private static void BreakDownXsdDateTime(long val, out int yr, out int mnth, out int day, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4348F60", Offset = "0x4348F60", VA = "0x4348F60")]
	private static void BreakDownXsdDate(long val, out int yr, out int mnth, out int day, out bool negTimeZone, out int hr, out int min)
	{
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x43490D0", Offset = "0x43490D0", VA = "0x43490D0")]
	private static void BreakDownXsdTime(long val, out int hr, out int min, out int sec, out int ms)
	{
	}

	[Token(Token = "0x6000030")]
	[Address(RVA = "0x43491D0", Offset = "0x43491D0", VA = "0x43491D0")]
	public static string XsdDateTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x4349320", Offset = "0x4349320", VA = "0x4349320")]
	public static string XsdDateToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x4349430", Offset = "0x4349430", VA = "0x4349430")]
	public static string XsdTimeToString(long val)
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x4349600", Offset = "0x4349600", VA = "0x4349600")]
	public static string SqlDateTimeToString(int dateticks, uint timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x4349710", Offset = "0x4349710", VA = "0x4349710")]
	public static DateTime SqlDateTimeToDateTime(int dateticks, uint timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x43497F0", Offset = "0x43497F0", VA = "0x43497F0")]
	public static string SqlSmallDateTimeToString(short dateticks, ushort timeticks)
	{
		return null;
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x4349940", Offset = "0x4349940", VA = "0x4349940")]
	public static DateTime SqlSmallDateTimeToDateTime(short dateticks, ushort timeticks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x43499A0", Offset = "0x43499A0", VA = "0x43499A0")]
	public static DateTime XsdKatmaiDateToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4349AF0", Offset = "0x4349AF0", VA = "0x4349AF0")]
	public static DateTime XsdKatmaiDateTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x4349E10", Offset = "0x4349E10", VA = "0x4349E10")]
	public static DateTime XsdKatmaiTimeToDateTime(byte[] data, int offset)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x4349E60", Offset = "0x4349E60", VA = "0x4349E60")]
	public static DateTimeOffset XsdKatmaiDateOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x4349EB0", Offset = "0x4349EB0", VA = "0x4349EB0")]
	public static DateTimeOffset XsdKatmaiDateTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x434A020", Offset = "0x434A020", VA = "0x434A020")]
	public static DateTimeOffset XsdKatmaiTimeOffsetToDateTimeOffset(byte[] data, int offset)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x434A070", Offset = "0x434A070", VA = "0x434A070")]
	public static string XsdKatmaiDateToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x434A180", Offset = "0x434A180", VA = "0x434A180")]
	public static string XsdKatmaiDateTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x434A3F0", Offset = "0x434A3F0", VA = "0x434A3F0")]
	public static string XsdKatmaiTimeToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x434A570", Offset = "0x434A570", VA = "0x434A570")]
	public static string XsdKatmaiDateOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x434A710", Offset = "0x434A710", VA = "0x434A710")]
	public static string XsdKatmaiDateTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x434A9C0", Offset = "0x434A9C0", VA = "0x434A9C0")]
	public static string XsdKatmaiTimeOffsetToString(byte[] data, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4349A90", Offset = "0x4349A90", VA = "0x4349A90")]
	private static long GetKatmaiDateTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4349BD0", Offset = "0x4349BD0", VA = "0x4349BD0")]
	private static long GetKatmaiTimeTicks(byte[] data, ref int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4349FD0", Offset = "0x4349FD0", VA = "0x4349FD0")]
	private static long GetKatmaiTimeZoneTicks(byte[] data, int pos)
	{
		return default(long);
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x434A2E0", Offset = "0x434A2E0", VA = "0x434A2E0")]
	private static int GetFractions(DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x434A890", Offset = "0x434A890", VA = "0x434A890")]
	private static int GetFractions(DateTimeOffset dt)
	{
		return default(int);
	}
}
