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
	[Address(RVA = "0x3ABCB30", Offset = "0x3ABCB30", VA = "0x3ABCB30")]
	static DateTimeUtils()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x3ABCC20", Offset = "0x3ABCC20", VA = "0x3ABCC20")]
	public static TimeSpan GetUtcOffset(this DateTime d)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x3ABCCA0", Offset = "0x3ABCCA0", VA = "0x3ABCCA0")]
	public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind)
	{
		return default(XmlDateTimeSerializationMode);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x3ABCDF0", Offset = "0x3ABCDF0", VA = "0x3ABCDF0")]
	internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x3ABCF20", Offset = "0x3ABCF20", VA = "0x3ABCF20")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x3ABCFF0", Offset = "0x3ABCFF0", VA = "0x3ABCFF0")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x3ABD0C0", Offset = "0x3ABD0C0", VA = "0x3ABD0C0")]
	private static long ToUniversalTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x3ABD1F0", Offset = "0x3ABD1F0", VA = "0x3ABD1F0")]
	private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x3ABD340", Offset = "0x3ABD340", VA = "0x3ABD340")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x3ABD460", Offset = "0x3ABD460", VA = "0x3ABD460")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x3ABD4D0", Offset = "0x3ABD4D0", VA = "0x3ABD4D0")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc)
	{
		return default(long);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x3ABD3F0", Offset = "0x3ABD3F0", VA = "0x3ABD3F0")]
	private static long UniversalTicksToJavaScriptTicks(long universalTicks)
	{
		return default(long);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x3AB2BA0", Offset = "0x3AB2BA0", VA = "0x3AB2BA0")]
	internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x3ABD5F0", Offset = "0x3ABD5F0", VA = "0x3ABD5F0")]
	internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x3ABDD10", Offset = "0x3ABDD10", VA = "0x3ABDD10")]
	internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x3ABDC10", Offset = "0x3ABDC10", VA = "0x3ABDC10")]
	private static DateTime CreateDateTime(DateTimeParser dateTimeParser)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x3ABE010", Offset = "0x3ABE010", VA = "0x3ABE010")]
	internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x3ABE500", Offset = "0x3ABE500", VA = "0x3ABE500")]
	internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x3ABE7A0", Offset = "0x3ABE7A0", VA = "0x3ABE7A0")]
	internal static bool TryParseDateTimeOffset(StringReference s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x3ABECB0", Offset = "0x3ABECB0", VA = "0x3ABECB0")]
	internal static bool TryParseDateTimeOffset(string s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x3ABEFD0", Offset = "0x3ABEFD0", VA = "0x3ABEFD0")]
	private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x3ABE230", Offset = "0x3ABE230", VA = "0x3ABE230")]
	private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x3ABE430", Offset = "0x3ABE430", VA = "0x3ABE430")]
	private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x3ABEA10", Offset = "0x3ABEA10", VA = "0x3ABEA10")]
	private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x3ABEC20", Offset = "0x3ABEC20", VA = "0x3ABEC20")]
	private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x3ABF140", Offset = "0x3ABF140", VA = "0x3ABF140")]
	private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x3ABF2C0", Offset = "0x3ABF2C0", VA = "0x3ABF2C0")]
	internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x3ABF410", Offset = "0x3ABF410", VA = "0x3ABF410")]
	internal static int WriteDateTimeString(char[] chars, int start, DateTime value, TimeSpan? offset, DateTimeKind kind, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x3ABFB80", Offset = "0x3ABFB80", VA = "0x3ABFB80")]
	internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x3AC03B0", Offset = "0x3AC03B0", VA = "0x3AC03B0")]
	private static void CopyIntToCharArray(char[] chars, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x3ABF900", Offset = "0x3ABF900", VA = "0x3ABF900")]
	internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x3AC0420", Offset = "0x3AC0420", VA = "0x3AC0420")]
	internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x3AC0180", Offset = "0x3AC0180", VA = "0x3AC0180")]
	private static void GetDateValues(DateTime td, out int year, out int month, out int day)
	{
	}
}
