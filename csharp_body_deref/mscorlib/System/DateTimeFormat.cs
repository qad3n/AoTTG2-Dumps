using System.Globalization;
using System.Runtime.CompilerServices;
using System.Text;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B3")]
internal static class DateTimeFormat
{
	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly TimeSpan NullOffset;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x8")]
	internal static char[] allStandardFormats;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly DateTimeFormatInfo InvariantFormatInfo;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly string[] InvariantAbbreviatedMonthNames;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly string[] InvariantAbbreviatedDayNames;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x28")]
	internal static string[] fixedNumberFormats;

	[Token(Token = "0x60006BB")]
	[Address(RVA = "0x4FB5830", Offset = "0x4FB5830", VA = "0x4FB5830")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x4FB5940", Offset = "0x4FB5940", VA = "0x4FB5940")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len, bool overrideLengthLimit)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x4FB59F0", Offset = "0x4FB59F0", VA = "0x4FB59F0")]
	private static void HebrewFormatDigits(StringBuilder outputBuffer, int digits)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x4FB5A60", Offset = "0x4FB5A60", VA = "0x4FB5A60")]
	internal static int ParseRepeatPattern(ReadOnlySpan<char> format, int pos, char patternChar)
	{
		return default(int);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x4FB5AD0", Offset = "0x4FB5AD0", VA = "0x4FB5AD0")]
	private static string FormatDayOfWeek(int dayOfWeek, int repeat, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x4FB5B00", Offset = "0x4FB5B00", VA = "0x4FB5B00")]
	private static string FormatMonth(int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x4FB5B30", Offset = "0x4FB5B30", VA = "0x4FB5B30")]
	private static string FormatHebrewMonthName(DateTime time, int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x4FB5BF0", Offset = "0x4FB5BF0", VA = "0x4FB5BF0")]
	internal static int ParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result)
	{
		return default(int);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x4FB5DB0", Offset = "0x4FB5DB0", VA = "0x4FB5DB0")]
	internal static int ParseNextChar(ReadOnlySpan<char> format, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x4FB5E10", Offset = "0x4FB5E10", VA = "0x4FB5E10")]
	private static bool IsUseGenitiveForm(ReadOnlySpan<char> format, int index, int tokenLen, char patternToMatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x4FB5F40", Offset = "0x4FB5F40", VA = "0x4FB5F40")]
	private static StringBuilder FormatCustomized(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset, StringBuilder result)
	{
		return null;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x4FB7CD0", Offset = "0x4FB7CD0", VA = "0x4FB7CD0")]
	private static void FormatCustomizedTimeZone(DateTime dateTime, TimeSpan offset, ReadOnlySpan<char> format, int tokenLen, bool timeOnly, StringBuilder result)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x4FB8120", Offset = "0x4FB8120", VA = "0x4FB8120")]
	private static void FormatCustomizedRoundripTimeZone(DateTime dateTime, TimeSpan offset, StringBuilder result)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x4FB8430", Offset = "0x4FB8430", VA = "0x4FB8430")]
	private static void Append2DigitNumber(StringBuilder result, int val)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x4FB84A0", Offset = "0x4FB84A0", VA = "0x4FB84A0")]
	internal static string GetRealFormat(ReadOnlySpan<char> format, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x4FB86D0", Offset = "0x4FB86D0", VA = "0x4FB86D0")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTime dateTime, ref DateTimeFormatInfo dtfi, ref TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x4FADDF0", Offset = "0x4FADDF0", VA = "0x4FADDF0")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x4FB2910", Offset = "0x4FB2910", VA = "0x4FB2910")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x4FAE220", Offset = "0x4FAE220", VA = "0x4FAE220")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x4FB2EA0", Offset = "0x4FB2EA0", VA = "0x4FB2EA0")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider, TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x4FB9A10", Offset = "0x4FB9A10", VA = "0x4FB9A10")]
	private static StringBuilder FormatStringBuilder(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x4FB8CD0", Offset = "0x4FB8CD0", VA = "0x4FB8CD0")]
	private static bool TryFormatO(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x4FB94A0", Offset = "0x4FB94A0", VA = "0x4FB94A0")]
	private static bool TryFormatR(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x4FB9DE0", Offset = "0x4FB9DE0", VA = "0x4FB9DE0")]
	private static void WriteTwoDecimalDigits(uint value, Span<char> destination, int offset)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x4FB9E30", Offset = "0x4FB9E30", VA = "0x4FB9E30")]
	private static void WriteFourDecimalDigits(uint value, Span<char> buffer, int startingIndex = 0)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x4FB9ED0", Offset = "0x4FB9ED0", VA = "0x4FB9ED0")]
	private static void WriteDigits(ulong value, Span<char> buffer)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x4FB8CC0", Offset = "0x4FB8CC0", VA = "0x4FB8CC0")]
	internal static void InvalidFormatForLocal(ReadOnlySpan<char> format, DateTime dateTime)
	{
	}
}
