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
		[Address(RVA = "0x4F63310", Offset = "0x4F63310", VA = "0x4F63310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002C0B")]
	[Address(RVA = "0x4F63740", Offset = "0x4F63740", VA = "0x4F63740")]
	internal static int SkipWhiteSpacesAndNonLetter(string pattern, int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0C")]
	[Address(RVA = "0x4F63810", Offset = "0x4F63810", VA = "0x4F63810")]
	internal void AddDateWordOrPostfix(string formatPostfix, string str)
	{
	}

	[Token(Token = "0x6002C0D")]
	[Address(RVA = "0x4F63C20", Offset = "0x4F63C20", VA = "0x4F63C20")]
	internal int AddDateWords(string pattern, int index, string formatPostfix)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0E")]
	[Address(RVA = "0x4F63E50", Offset = "0x4F63E50", VA = "0x4F63E50")]
	internal static int ScanRepeatChar(string pattern, char ch, int index, out int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002C0F")]
	[Address(RVA = "0x4F63AE0", Offset = "0x4F63AE0", VA = "0x4F63AE0")]
	internal void AddIgnorableSymbols(string text)
	{
	}

	[Token(Token = "0x6002C10")]
	[Address(RVA = "0x4F63EB0", Offset = "0x4F63EB0", VA = "0x4F63EB0")]
	internal void ScanDateWord(string pattern)
	{
	}

	[Token(Token = "0x6002C11")]
	[Address(RVA = "0x4F61D80", Offset = "0x4F61D80", VA = "0x4F61D80")]
	internal string[] GetDateWordsOfDTFI(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x6002C12")]
	[Address(RVA = "0x4F5EBD0", Offset = "0x4F5EBD0", VA = "0x4F5EBD0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C13")]
	[Address(RVA = "0x4F5EC10", Offset = "0x4F5EC10", VA = "0x4F5EC10")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C14")]
	[Address(RVA = "0x4F5ECC0", Offset = "0x4F5ECC0", VA = "0x4F5ECC0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(string[] dayNames, string[] abbrevDayNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C15")]
	[Address(RVA = "0x4F5ECF0", Offset = "0x4F5ECF0", VA = "0x4F5ECF0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002C16")]
	[Address(RVA = "0x4F64170", Offset = "0x4F64170", VA = "0x4F64170")]
	private static bool EqualStringArrays(string[] array1, string[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C17")]
	[Address(RVA = "0x4F64420", Offset = "0x4F64420", VA = "0x4F64420")]
	private static bool ArrayElementsHaveSpace(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C18")]
	[Address(RVA = "0x4F641F0", Offset = "0x4F641F0", VA = "0x4F641F0")]
	private static bool ArrayElementsBeginWithDigit(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C19")]
	[Address(RVA = "0x4F61D00", Offset = "0x4F61D00", VA = "0x4F61D00")]
	public DateTimeFormatInfoScanner()
	{
	}
}
