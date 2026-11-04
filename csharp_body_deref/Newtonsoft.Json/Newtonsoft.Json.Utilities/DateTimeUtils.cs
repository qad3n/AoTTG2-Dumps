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
	[Address(RVA = "0x1C238F0", Offset = "0x1C21EF0", VA = "0x181C238F0")]
	static DateTimeUtils()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x1C20810", Offset = "0x1C1EE10", VA = "0x181C20810")]
	public static TimeSpan GetUtcOffset(this DateTime d)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x1C20A10", Offset = "0x1C1F010", VA = "0x181C20A10")]
	public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind)
	{
		return default(XmlDateTimeSerializationMode);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x1C20390", Offset = "0x1C1E990", VA = "0x181C20390")]
	internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x1C20870", Offset = "0x1C1EE70", VA = "0x181C20870")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x1C20940", Offset = "0x1C1EF40", VA = "0x181C20940")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x1C20C30", Offset = "0x1C1F230", VA = "0x181C20C30")]
	private static long ToUniversalTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x1C20AC0", Offset = "0x1C1F0C0", VA = "0x181C20AC0")]
	private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x1C1FE80", Offset = "0x1C1E480", VA = "0x181C1FE80")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x1C1FF40", Offset = "0x1C1E540", VA = "0x181C1FF40")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x1C1FF90", Offset = "0x1C1E590", VA = "0x181C1FF90")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc)
	{
		return default(long);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x1C22910", Offset = "0x1C20F10", VA = "0x181C22910")]
	private static long UniversalTicksToJavaScriptTicks(long universalTicks)
	{
		return default(long);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x1C20180", Offset = "0x1C1E780", VA = "0x181C20180")]
	internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x1C20E20", Offset = "0x1C1F420", VA = "0x181C20E20")]
	internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x1C21520", Offset = "0x1C1FB20", VA = "0x181C21520")]
	internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x1C202A0", Offset = "0x1C1E8A0", VA = "0x181C202A0")]
	private static DateTime CreateDateTime(DateTimeParser dateTimeParser)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x1C21E40", Offset = "0x1C20440", VA = "0x181C21E40")]
	internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x1C22070", Offset = "0x1C20670", VA = "0x181C22070")]
	internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x1C21950", Offset = "0x1C1FF50", VA = "0x181C21950")]
	internal static bool TryParseDateTimeOffset(StringReference s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x1C21B60", Offset = "0x1C20160", VA = "0x181C21B60")]
	internal static bool TryParseDateTimeOffset(string s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x1C22340", Offset = "0x1C20940", VA = "0x181C22340")]
	private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x1C21320", Offset = "0x1C1F920", VA = "0x181C21320")]
	private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x1C20D40", Offset = "0x1C1F340", VA = "0x181C20D40")]
	private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x1C217D0", Offset = "0x1C1FDD0", VA = "0x181C217D0")]
	private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x1C21480", Offset = "0x1C1FA80", VA = "0x181C21480")]
	private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x1C22630", Offset = "0x1C20C30", VA = "0x181C22630")]
	private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x1C22DD0", Offset = "0x1C213D0", VA = "0x181C22DD0")]
	internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x1C22F70", Offset = "0x1C21570", VA = "0x181C22F70")]
	internal static int WriteDateTimeString(char[] chars, int start, DateTime value, TimeSpan? offset, DateTimeKind kind, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x1C233A0", Offset = "0x1C219A0", VA = "0x181C233A0")]
	internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x1C20200", Offset = "0x1C1E800", VA = "0x181C20200")]
	private static void CopyIntToCharArray(char[] chars, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x1C22B60", Offset = "0x1C21160", VA = "0x181C22B60")]
	internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x1C22980", Offset = "0x1C20F80", VA = "0x181C22980")]
	internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x1C20640", Offset = "0x1C1EC40", VA = "0x181C20640")]
	private static void GetDateValues(DateTime td, out int year, out int month, out int day)
	{
	}
}
