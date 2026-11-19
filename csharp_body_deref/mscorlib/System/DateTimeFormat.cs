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

[Token(Token = "0x20000B3")]
internal static class DateTimeFormat
{
	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly TimeSpan NullOffset;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x8")]
	internal static char[] allStandardFormats;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly DateTimeFormatInfo InvariantFormatInfo;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly string[] InvariantAbbreviatedMonthNames;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly string[] InvariantAbbreviatedDayNames;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x28")]
	internal static string[] fixedNumberFormats;

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x549F070", Offset = "0x549E070", VA = "0x549F070")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len)
	{
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x549F180", Offset = "0x549E180", VA = "0x549F180")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len, bool overrideLengthLimit)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x549F260", Offset = "0x549E260", VA = "0x549F260")]
	private static void HebrewFormatDigits(StringBuilder outputBuffer, int digits)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x549F2D0", Offset = "0x549E2D0", VA = "0x549F2D0")]
	internal static int ParseRepeatPattern(ReadOnlySpan<char> format, int pos, char patternChar)
	{
		return default(int);
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x549F340", Offset = "0x549E340", VA = "0x549F340")]
	private static string FormatDayOfWeek(int dayOfWeek, int repeat, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x549F380", Offset = "0x549E380", VA = "0x549F380")]
	private static string FormatMonth(int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x549F3C0", Offset = "0x549E3C0", VA = "0x549F3C0")]
	private static string FormatHebrewMonthName(DateTime time, int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x549F480", Offset = "0x549E480", VA = "0x549F480")]
	internal static int ParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result)
	{
		return default(int);
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x549F640", Offset = "0x549E640", VA = "0x549F640")]
	internal static int ParseNextChar(ReadOnlySpan<char> format, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x549F690", Offset = "0x549E690", VA = "0x549F690")]
	private static bool IsUseGenitiveForm(ReadOnlySpan<char> format, int index, int tokenLen, char patternToMatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x549F7C0", Offset = "0x549E7C0", VA = "0x549F7C0")]
	private static StringBuilder FormatCustomized(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset, StringBuilder result)
	{
		return null;
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x54A1570", Offset = "0x54A0570", VA = "0x54A1570")]
	private static void FormatCustomizedTimeZone(DateTime dateTime, TimeSpan offset, ReadOnlySpan<char> format, int tokenLen, bool timeOnly, StringBuilder result)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x54A1A10", Offset = "0x54A0A10", VA = "0x54A1A10")]
	private static void FormatCustomizedRoundripTimeZone(DateTime dateTime, TimeSpan offset, StringBuilder result)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x54A1D30", Offset = "0x54A0D30", VA = "0x54A1D30")]
	private static void Append2DigitNumber(StringBuilder result, int val)
	{
	}

	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x54A1DA0", Offset = "0x54A0DA0", VA = "0x54A1DA0")]
	internal static string GetRealFormat(ReadOnlySpan<char> format, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x54A1FC0", Offset = "0x54A0FC0", VA = "0x54A1FC0")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTime dateTime, ref DateTimeFormatInfo dtfi, ref TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x5497640", Offset = "0x5496640", VA = "0x5497640")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006D6")]
	[Address(RVA = "0x549C150", Offset = "0x549B150", VA = "0x549C150")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x5497A70", Offset = "0x5496A70", VA = "0x5497A70")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x549C6F0", Offset = "0x549B6F0", VA = "0x549C6F0")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider, TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D9")]
	[Address(RVA = "0x54A3250", Offset = "0x54A2250", VA = "0x54A3250")]
	private static StringBuilder FormatStringBuilder(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006DA")]
	[Address(RVA = "0x54A2510", Offset = "0x54A1510", VA = "0x54A2510")]
	private static bool TryFormatO(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x54A2CF0", Offset = "0x54A1CF0", VA = "0x54A2CF0")]
	private static bool TryFormatR(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x54A35F0", Offset = "0x54A25F0", VA = "0x54A35F0")]
	private static void WriteTwoDecimalDigits(uint value, Span<char> destination, int offset)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x54A3640", Offset = "0x54A2640", VA = "0x54A3640")]
	private static void WriteFourDecimalDigits(uint value, Span<char> buffer, int startingIndex = 0)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006DE")]
	[Address(RVA = "0x54A36E0", Offset = "0x54A26E0", VA = "0x54A36E0")]
	private static void WriteDigits(ulong value, Span<char> buffer)
	{
	}

	[Token(Token = "0x60006DF")]
	[Address(RVA = "0x54A2500", Offset = "0x54A1500", VA = "0x54A2500")]
	internal static void InvalidFormatForLocal(ReadOnlySpan<char> format, DateTime dateTime)
	{
	}
}
