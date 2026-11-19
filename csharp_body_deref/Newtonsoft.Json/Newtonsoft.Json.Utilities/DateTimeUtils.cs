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
	[Address(RVA = "0x55ABD10", Offset = "0x55AAD10", VA = "0x55ABD10")]
	static DateTimeUtils()
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x55ABE00", Offset = "0x55AAE00", VA = "0x55ABE00")]
	public static TimeSpan GetUtcOffset(this DateTime d)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x55ABE80", Offset = "0x55AAE80", VA = "0x55ABE80")]
	public static XmlDateTimeSerializationMode ToSerializationMode(DateTimeKind kind)
	{
		return default(XmlDateTimeSerializationMode);
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x55ABFD0", Offset = "0x55AAFD0", VA = "0x55ABFD0")]
	internal static DateTime EnsureDateTime(DateTime value, DateTimeZoneHandling timeZone)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x55AC100", Offset = "0x55AB100", VA = "0x55AC100")]
	private static DateTime SwitchToLocalTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x55AC1D0", Offset = "0x55AB1D0", VA = "0x55AC1D0")]
	private static DateTime SwitchToUtcTime(DateTime value)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x55AC2A0", Offset = "0x55AB2A0", VA = "0x55AC2A0")]
	private static long ToUniversalTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x55AC3D0", Offset = "0x55AB3D0", VA = "0x55AC3D0")]
	private static long ToUniversalTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x55AC520", Offset = "0x55AB520", VA = "0x55AC520")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, TimeSpan offset)
	{
		return default(long);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x55AC640", Offset = "0x55AB640", VA = "0x55AC640")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime)
	{
		return default(long);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x55AC6B0", Offset = "0x55AB6B0", VA = "0x55AC6B0")]
	internal static long ConvertDateTimeToJavaScriptTicks(DateTime dateTime, bool convertToUtc)
	{
		return default(long);
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x55AC5D0", Offset = "0x55AB5D0", VA = "0x55AC5D0")]
	private static long UniversalTicksToJavaScriptTicks(long universalTicks)
	{
		return default(long);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x55A2010", Offset = "0x55A1010", VA = "0x55A2010")]
	internal static DateTime ConvertJavaScriptTicksToDateTime(long javaScriptTicks)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000563")]
	[Address(RVA = "0x55AC7D0", Offset = "0x55AB7D0", VA = "0x55AC7D0")]
	internal static bool TryParseDateTimeIso(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x55ACF60", Offset = "0x55ABF60", VA = "0x55ACF60")]
	internal static bool TryParseDateTimeOffsetIso(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x55ACE60", Offset = "0x55ABE60", VA = "0x55ACE60")]
	private static DateTime CreateDateTime(DateTimeParser dateTimeParser)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x55AD2F0", Offset = "0x55AC2F0", VA = "0x55AD2F0")]
	internal static bool TryParseDateTime(StringReference s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x55AD7D0", Offset = "0x55AC7D0", VA = "0x55AD7D0")]
	internal static bool TryParseDateTime(string s, DateTimeZoneHandling dateTimeZoneHandling, string? dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x55ADA70", Offset = "0x55ACA70", VA = "0x55ADA70")]
	internal static bool TryParseDateTimeOffset(StringReference s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x55ADF60", Offset = "0x55ACF60", VA = "0x55ADF60")]
	internal static bool TryParseDateTimeOffset(string s, string? dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x55AE270", Offset = "0x55AD270", VA = "0x55AE270")]
	private static bool TryParseMicrosoftDate(StringReference text, out long ticks, out TimeSpan offset, out DateTimeKind kind)
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x55AD510", Offset = "0x55AC510", VA = "0x55AD510")]
	private static bool TryParseDateTimeMicrosoft(StringReference text, DateTimeZoneHandling dateTimeZoneHandling, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x55AD700", Offset = "0x55AC700", VA = "0x55AD700")]
	private static bool TryParseDateTimeExact(string text, DateTimeZoneHandling dateTimeZoneHandling, string dateFormatString, CultureInfo culture, out DateTime dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x55ADCD0", Offset = "0x55ACCD0", VA = "0x55ADCD0")]
	private static bool TryParseDateTimeOffsetMicrosoft(StringReference text, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x55ADED0", Offset = "0x55ACED0", VA = "0x55ADED0")]
	private static bool TryParseDateTimeOffsetExact(string text, string dateFormatString, CultureInfo culture, out DateTimeOffset dt)
	{
		return default(bool);
	}

	[Token(Token = "0x600056F")]
	[Address(RVA = "0x55AE3E0", Offset = "0x55AD3E0", VA = "0x55AE3E0")]
	private static bool TryReadOffset(StringReference offsetText, int startIndex, out TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x55AE550", Offset = "0x55AD550", VA = "0x55AE550")]
	internal static void WriteDateTimeString(TextWriter writer, DateTime value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x55AE6A0", Offset = "0x55AD6A0", VA = "0x55AE6A0")]
	internal static int WriteDateTimeString(char[] chars, int start, DateTime value, TimeSpan? offset, DateTimeKind kind, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x55AEE10", Offset = "0x55ADE10", VA = "0x55AEE10")]
	internal static int WriteDefaultIsoDate(char[] chars, int start, DateTime dt)
	{
		return default(int);
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x55AF610", Offset = "0x55AE610", VA = "0x55AF610")]
	private static void CopyIntToCharArray(char[] chars, int start, int value, int digits)
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x55AEB90", Offset = "0x55ADB90", VA = "0x55AEB90")]
	internal static int WriteDateTimeOffset(char[] chars, int start, TimeSpan offset, DateFormatHandling format)
	{
		return default(int);
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x55AF670", Offset = "0x55AE670", VA = "0x55AF670")]
	internal static void WriteDateTimeOffsetString(TextWriter writer, DateTimeOffset value, DateFormatHandling format, string? formatString, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x55AF3E0", Offset = "0x55AE3E0", VA = "0x55AF3E0")]
	private static void GetDateValues(DateTime td, out int year, out int month, out int day)
	{
	}
}
