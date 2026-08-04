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
	[Address(RVA = "0x3C9B350", Offset = "0x3C9B350", VA = "0x3C9B350")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len)
	{
	}

	[Token(Token = "0x60006BC")]
	[Address(RVA = "0x3C9B460", Offset = "0x3C9B460", VA = "0x3C9B460")]
	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len, bool overrideLengthLimit)
	{
	}

	[Token(Token = "0x60006BD")]
	[Address(RVA = "0x3C9B510", Offset = "0x3C9B510", VA = "0x3C9B510")]
	private static void HebrewFormatDigits(StringBuilder outputBuffer, int digits)
	{
	}

	[Token(Token = "0x60006BE")]
	[Address(RVA = "0x3C9B580", Offset = "0x3C9B580", VA = "0x3C9B580")]
	internal static int ParseRepeatPattern(ReadOnlySpan<char> format, int pos, char patternChar)
	{
		return default(int);
	}

	[Token(Token = "0x60006BF")]
	[Address(RVA = "0x3C9B5F0", Offset = "0x3C9B5F0", VA = "0x3C9B5F0")]
	private static string FormatDayOfWeek(int dayOfWeek, int repeat, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C0")]
	[Address(RVA = "0x3C9B620", Offset = "0x3C9B620", VA = "0x3C9B620")]
	private static string FormatMonth(int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x3C9B650", Offset = "0x3C9B650", VA = "0x3C9B650")]
	private static string FormatHebrewMonthName(DateTime time, int month, int repeatCount, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x3C9B710", Offset = "0x3C9B710", VA = "0x3C9B710")]
	internal static int ParseQuoteString(ReadOnlySpan<char> format, int pos, StringBuilder result)
	{
		return default(int);
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x3C9B8D0", Offset = "0x3C9B8D0", VA = "0x3C9B8D0")]
	internal static int ParseNextChar(ReadOnlySpan<char> format, int pos)
	{
		return default(int);
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x3C9B930", Offset = "0x3C9B930", VA = "0x3C9B930")]
	private static bool IsUseGenitiveForm(ReadOnlySpan<char> format, int index, int tokenLen, char patternToMatch)
	{
		return default(bool);
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x3C9BA60", Offset = "0x3C9BA60", VA = "0x3C9BA60")]
	private static StringBuilder FormatCustomized(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset, StringBuilder result)
	{
		return null;
	}

	[Token(Token = "0x60006C6")]
	[Address(RVA = "0x3C9D7F0", Offset = "0x3C9D7F0", VA = "0x3C9D7F0")]
	private static void FormatCustomizedTimeZone(DateTime dateTime, TimeSpan offset, ReadOnlySpan<char> format, int tokenLen, bool timeOnly, StringBuilder result)
	{
	}

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x3C9DC40", Offset = "0x3C9DC40", VA = "0x3C9DC40")]
	private static void FormatCustomizedRoundripTimeZone(DateTime dateTime, TimeSpan offset, StringBuilder result)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x3C9DF50", Offset = "0x3C9DF50", VA = "0x3C9DF50")]
	private static void Append2DigitNumber(StringBuilder result, int val)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x3C9DFC0", Offset = "0x3C9DFC0", VA = "0x3C9DFC0")]
	internal static string GetRealFormat(ReadOnlySpan<char> format, DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x3C9E1F0", Offset = "0x3C9E1F0", VA = "0x3C9E1F0")]
	private static string ExpandPredefinedFormat(ReadOnlySpan<char> format, ref DateTime dateTime, ref DateTimeFormatInfo dtfi, ref TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x3C93910", Offset = "0x3C93910", VA = "0x3C93910")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider)
	{
		return null;
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x3C98430", Offset = "0x3C98430", VA = "0x3C98430")]
	internal static string Format(DateTime dateTime, string format, IFormatProvider provider, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x3C93D40", Offset = "0x3C93D40", VA = "0x3C93D40")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x3C989C0", Offset = "0x3C989C0", VA = "0x3C989C0")]
	internal static bool TryFormat(DateTime dateTime, Span<char> destination, out int charsWritten, ReadOnlySpan<char> format, IFormatProvider provider, TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x3C9F530", Offset = "0x3C9F530", VA = "0x3C9F530")]
	private static StringBuilder FormatStringBuilder(DateTime dateTime, ReadOnlySpan<char> format, DateTimeFormatInfo dtfi, TimeSpan offset)
	{
		return null;
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x3C9E7F0", Offset = "0x3C9E7F0", VA = "0x3C9E7F0")]
	private static bool TryFormatO(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x3C9EFC0", Offset = "0x3C9EFC0", VA = "0x3C9EFC0")]
	private static bool TryFormatR(DateTime dateTime, TimeSpan offset, Span<char> destination, out int charsWritten)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x3C9F900", Offset = "0x3C9F900", VA = "0x3C9F900")]
	private static void WriteTwoDecimalDigits(uint value, Span<char> destination, int offset)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D3")]
	[Address(RVA = "0x3C9F950", Offset = "0x3C9F950", VA = "0x3C9F950")]
	private static void WriteFourDecimalDigits(uint value, Span<char> buffer, int startingIndex = 0)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x3C9F9F0", Offset = "0x3C9F9F0", VA = "0x3C9F9F0")]
	private static void WriteDigits(ulong value, Span<char> buffer)
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x3C9E7E0", Offset = "0x3C9E7E0", VA = "0x3C9E7E0")]
	internal static void InvalidFormatForLocal(ReadOnlySpan<char> format, DateTime dateTime)
	{
	}
}
