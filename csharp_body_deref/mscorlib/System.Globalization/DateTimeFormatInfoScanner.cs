// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.DateTimeFormatInfoScanner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200059F")]
internal class DateTimeFormatInfoScanner
{
	[Token(Token = "0x20005A0")]
	private enum FoundDatePattern
	{
		[Token(Token = "0x400180A")]
		None = 0,
		[Token(Token = "0x400180B")]
		FoundYearPatternFlag = 1,
		[Token(Token = "0x400180C")]
		FoundMonthPatternFlag = 2,
		[Token(Token = "0x400180D")]
		FoundDayPatternFlag = 4,
		[Token(Token = "0x400180E")]
		FoundYMDPatternFlag = 7
	}

	[Token(Token = "0x4001806")]
	[FieldOffset(Offset = "0x10")]
	internal List<string> m_dateWords;

	[Token(Token = "0x4001807")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, string> s_knownWords;

	[Token(Token = "0x4001808")]
	[FieldOffset(Offset = "0x18")]
	private FoundDatePattern _ymdFlags;

	[Token(Token = "0x1700067B")]
	private static Dictionary<string, string> KnownWords
	{
		[Token(Token = "0x6002C0A")]
		[Address(RVA = "0x3C48E30", Offset = "0x3C48E30", VA = "0x3C48E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C0B")]
	[Address(RVA = "0x3C49260", Offset = "0x3C49260", VA = "0x3C49260")]
	internal static int SkipWhiteSpacesAndNonLetter(string pattern, int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0C")]
	[Address(RVA = "0x3C49330", Offset = "0x3C49330", VA = "0x3C49330")]
	internal void AddDateWordOrPostfix(string formatPostfix, string str)
	{
	}

	[Token(Token = "0x6002C0D")]
	[Address(RVA = "0x3C49740", Offset = "0x3C49740", VA = "0x3C49740")]
	internal int AddDateWords(string pattern, int index, string formatPostfix)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0E")]
	[Address(RVA = "0x3C49970", Offset = "0x3C49970", VA = "0x3C49970")]
	internal static int ScanRepeatChar(string pattern, char ch, int index, out int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0F")]
	[Address(RVA = "0x3C49600", Offset = "0x3C49600", VA = "0x3C49600")]
	internal void AddIgnorableSymbols(string text)
	{
	}

	[Token(Token = "0x6002C10")]
	[Address(RVA = "0x3C499D0", Offset = "0x3C499D0", VA = "0x3C499D0")]
	internal void ScanDateWord(string pattern)
	{
	}

	[Token(Token = "0x6002C11")]
	[Address(RVA = "0x3C478A0", Offset = "0x3C478A0", VA = "0x3C478A0")]
	internal string[] GetDateWordsOfDTFI(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x6002C12")]
	[Address(RVA = "0x3C446F0", Offset = "0x3C446F0", VA = "0x3C446F0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C13")]
	[Address(RVA = "0x3C44730", Offset = "0x3C44730", VA = "0x3C44730")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C14")]
	[Address(RVA = "0x3C447E0", Offset = "0x3C447E0", VA = "0x3C447E0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(string[] dayNames, string[] abbrevDayNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C15")]
	[Address(RVA = "0x3C44810", Offset = "0x3C44810", VA = "0x3C44810")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C16")]
	[Address(RVA = "0x3C49C90", Offset = "0x3C49C90", VA = "0x3C49C90")]
	private static bool EqualStringArrays(string[] array1, string[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C17")]
	[Address(RVA = "0x3C49F40", Offset = "0x3C49F40", VA = "0x3C49F40")]
	private static bool ArrayElementsHaveSpace(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C18")]
	[Address(RVA = "0x3C49D10", Offset = "0x3C49D10", VA = "0x3C49D10")]
	private static bool ArrayElementsBeginWithDigit(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C19")]
	[Address(RVA = "0x3C47820", Offset = "0x3C47820", VA = "0x3C47820")]
	public DateTimeFormatInfoScanner()
	{
	}
}
