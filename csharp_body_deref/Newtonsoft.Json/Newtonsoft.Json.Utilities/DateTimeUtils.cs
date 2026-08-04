// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.DateTimeUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Globalization;
using System.IO;
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000A6")]
internal static class DateTimeUtils
{
	[Token(Token = "0x40003FC")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly long InitialJavaScriptDateTicks;

	[Token(Token = "0x40003FD")]
	private const string IsoDateFormat = "yyyy-MM-ddTHH:mm:ss.FFFFFFFK";

	[Token(Token = "0x40003FE")]
	private const int DaysPer100Years = 36524;

	[Token(Token = "0x40003FF")]
	private const int DaysPer400Years = 146097;

	[Token(Token = "0x4000400")]
	private const int DaysPer4Years = 1461;

	[Token(Token = "0x4000401")]
	private const int DaysPerYear = 365;

	[Token(Token = "0x4000402")]
	private const long TicksPerDay = 864000000000L;

	[Token(Token = "0x4000403")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int[] DaysToMonth365;

	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int[] DaysToMonth366;

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x3DB2480", Offset = "0x3DB2480", VA = "0x3DB2480")]
	static DateTimeUtils()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3DB2570", Offset = "0x3DB2570", VA = "0x3DB2570")]
	public static TimeSpan GetUtcOffset(this DateTime d)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3DB25F0", Offset = "0x3DB25F0", VA = "0x3DB25F0")]
	public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind)
	{
		return default(XmlDateTimeSerializationMode);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3DB2740", Offset = "0x3DB2740", VA = "0x3DB2740")]
	internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3DB2870", Offset = "0x3DB2870", VA = "0x3DB2870")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3DB2940", Offset = "0x3DB2940", VA = "0x3DB2940")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3DB2A10", Offset = "0x3DB2A10", VA = "0x3DB2A10")]
	private static long ToUniversalTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3DB2B40", Offset = "0x3DB2B40", VA = "0x3DB2B40")]
	private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3DB2C90", Offset = "0x3DB2C90", VA = "0x3DB2C90")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3DB2DB0", Offset = "0x3DB2DB0", VA = "0x3DB2DB0")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3DB2E20", Offset = "0x3DB2E20", VA = "0x3DB2E20")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc)
	{
		return default(long);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x3DB2D40", Offset = "0x3DB2D40", VA = "0x3DB2D40")]
	private static long UniversalTicksToJavaScriptTicks(long universalTicks)
	{
		return default(long);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x3DA84F0", Offset = "0x3DA84F0", VA = "0x3DA84F0")]
	internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x3DB2F40", Offset = "0x3DB2F40", VA = "0x3DB2F40")]
	internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x3DB3660", Offset = "0x3DB3660", VA = "0x3DB3660")]
	internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x3DB3560", Offset = "0x3DB3560", VA = "0x3DB3560")]
	private static DateTime CreateDateTime(DateTimeParser dateTimeParser)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x3DB3960", Offset = "0x3DB3960", VA = "0x3DB3960")]
	internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x3DB3E50", Offset = "0x3DB3E50", VA = "0x3DB3E50")]
	internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x3DB40F0", Offset = "0x3DB40F0", VA = "0x3DB40F0")]
	internal static bool TryParseDateTimeOffset(StringReference s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x3DB4600", Offset = "0x3DB4600", VA = "0x3DB4600")]
	internal static bool TryParseDateTimeOffset(string s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x3DB4920", Offset = "0x3DB4920", VA = "0x3DB4920")]
	private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x3DB3B80", Offset = "0x3DB3B80", VA = "0x3DB3B80")]
	private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x3DB3D80", Offset = "0x3DB3D80", VA = "0x3DB3D80")]
	private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x3DB4360", Offset = "0x3DB4360", VA = "0x3DB4360")]
	private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x3DB4570", Offset = "0x3DB4570", VA = "0x3DB4570")]
	private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x3DB4A90", Offset = "0x3DB4A90", VA = "0x3DB4A90")]
	private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x3DB4C10", Offset = "0x3DB4C10", VA = "0x3DB4C10")]
	internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x3DB4D60", Offset = "0x3DB4D60", VA = "0x3DB4D60")]
	internal static int WriteDateTimeString(char[] chars, int start, DateTime value, TimeSpan? offset, DateTimeKind kind, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x3DB54D0", Offset = "0x3DB54D0", VA = "0x3DB54D0")]
	internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x3DB5D00", Offset = "0x3DB5D00", VA = "0x3DB5D00")]
	private static void CopyIntToCharArray(char[] chars, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x3DB5250", Offset = "0x3DB5250", VA = "0x3DB5250")]
	internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x3DB5D70", Offset = "0x3DB5D70", VA = "0x3DB5D70")]
	internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x3DB5AD0", Offset = "0x3DB5AD0", VA = "0x3DB5AD0")]
	private static void GetDateValues(DateTime td, out int year, out int month, out int day)
	{
	}
}
