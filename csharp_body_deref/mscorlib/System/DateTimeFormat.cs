// ==================== AoTTG2 cross-reference ====================
// Type: System.DateTimeFormat
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000DB")]
internal static class DateTimeFormat
{
	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly TimeSpan NullOffset;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x8")]
	internal static char[] allStandardFormats;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly DateTimeFormatInfo InvariantFormatInfo;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly string[] InvariantAbbreviatedMonthNames;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly string[] InvariantAbbreviatedDayNames;

	[Token(Token = "0x4000305")]
	[FieldOffset(Offset = "0x28")]
	internal static string[] fixedNumberFormats;

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x1B0A070", Offset = "0x1B08670", VA = "0x181B0A070")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x1B0A0F0", Offset = "0x1B086F0", VA = "0x181B0A0F0")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len, bool overrideLengthLimit)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x1B0AD20", Offset = "0x1B09320", VA = "0x181B0AD20")]
	private static void HebrewFormatDigits(StringBuilder outputBuffer, int digits)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x1B0B0F0", Offset = "0x1B096F0", VA = "0x181B0B0F0")]
	internal static int ParseRepeatPattern(ReadOnlySpan<char> format, int pos, char patternChar)
	{
		return default(int);
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x1B0A030", Offset = "0x1B08630", VA = "0x181B0A030")]
	private static string FormatDayOfWeek(int dayOfWeek, int repeat, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x1B0A2D0", Offset = "0x1B088D0", VA = "0x181B0A2D0")]
	private static string FormatMonth(int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x1B0A1F0", Offset = "0x1B087F0", VA = "0x181B0A1F0")]
	private static string FormatHebrewMonthName(DateTime time, int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x1B0AF00", Offset = "0x1B09500", VA = "0x181B0AF00")]
	internal static int ParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result)
	{
		return default(int);
	}

	[Token(Token = "0x60006F2")]
	[Address(RVA = "0x1B0AE90", Offset = "0x1B09490", VA = "0x181B0AE90")]
	internal static int ParseNextChar(ReadOnlySpan<char> format, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x1B0AD90", Offset = "0x1B09390", VA = "0x181B0AD90")]
	private static bool IsUseGenitiveForm(ReadOnlySpan<char> format, int index, int tokenLen, char patternToMatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x1B08AC0", Offset = "0x1B070C0", VA = "0x181B08AC0")]
	private static StringBuilder FormatCustomized(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset, StringBuilder result)
	{
		return null;
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x1B08690", Offset = "0x1B06C90", VA = "0x181B08690")]
	private static void FormatCustomizedTimeZone(DateTime dateTime, TimeSpan offset, ReadOnlySpan<char> format, int tokenLen, bool timeOnly, StringBuilder result)
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x1B08390", Offset = "0x1B06990", VA = "0x181B08390")]
	private static void FormatCustomizedRoundripTimeZone(DateTime dateTime, TimeSpan offset, StringBuilder result)
	{
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x1B07C60", Offset = "0x1B06260", VA = "0x181B07C60")]
	private static void Append2DigitNumber(StringBuilder result, int val)
	{
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x1B0A9E0", Offset = "0x1B08FE0", VA = "0x181B0A9E0")]
	internal static string GetRealFormat(ReadOnlySpan<char> format, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x1B07CE0", Offset = "0x1B062E0", VA = "0x181B07CE0")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTime dateTime, ref DateTimeFormatInfo dtfi, ref TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x1B0A690", Offset = "0x1B08C90", VA = "0x181B0A690")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x1B0A720", Offset = "0x1B08D20", VA = "0x181B0A720")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x1B0BDA0", Offset = "0x1B0A3A0", VA = "0x181B0BDA0")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x1B0BE50", Offset = "0x1B0A450", VA = "0x181B0BE50")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider, TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x1B0A310", Offset = "0x1B08910", VA = "0x181B0A310")]
	private static StringBuilder FormatStringBuilder(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x1B0B160", Offset = "0x1B09760", VA = "0x181B0B160")]
	private static bool TryFormatO(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x1B0B880", Offset = "0x1B09E80", VA = "0x181B0B880")]
	private static bool TryFormatR(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000701")]
	[Address(RVA = "0x1B0C120", Offset = "0x1B0A720", VA = "0x181B0C120")]
	private static void WriteTwoDecimalDigits(uint value, Span<char> destination, int offset)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000702")]
	[Address(RVA = "0x1B073F0", Offset = "0x1B059F0", VA = "0x181B073F0")]
	private static void WriteFourDecimalDigits(uint value, Span<char> buffer, int startingIndex = 0)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000703")]
	[Address(RVA = "0x1B0C080", Offset = "0x1B0A680", VA = "0x181B0C080")]
	private static void WriteDigits(ulong value, Span<char> buffer)
	{
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void InvalidFormatForLocal(ReadOnlySpan<char> format, DateTime dateTime)
	{
	}
}
