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

[Token(Token = "0x200054C")]
internal class DateTimeFormatInfoScanner
{
	[Token(Token = "0x200054D")]
	private enum FoundDatePattern
	{
		[Token(Token = "0x40015BB")]
		None = 0,
		[Token(Token = "0x40015BC")]
		FoundYearPatternFlag = 1,
		[Token(Token = "0x40015BD")]
		FoundMonthPatternFlag = 2,
		[Token(Token = "0x40015BE")]
		FoundDayPatternFlag = 4,
		[Token(Token = "0x40015BF")]
		FoundYMDPatternFlag = 7
	}

	[Token(Token = "0x40015B7")]
	[FieldOffset(Offset = "0x10")]
	internal List<string> m_dateWords;

	[Token(Token = "0x40015B8")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, string> s_knownWords;

	[Token(Token = "0x40015B9")]
	[FieldOffset(Offset = "0x18")]
	private FoundDatePattern _ymdFlags;

	[Token(Token = "0x17000609")]
	private static Dictionary<string, string> KnownWords
	{
		[Token(Token = "0x60028F6")]
		[Address(RVA = "0x53FE530", Offset = "0x53FD530", VA = "0x53FE530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60028F7")]
	[Address(RVA = "0x53FE960", Offset = "0x53FD960", VA = "0x53FE960")]
	internal static int SkipWhiteSpacesAndNonLetter(string pattern, int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60028F8")]
	[Address(RVA = "0x53FEA30", Offset = "0x53FDA30", VA = "0x53FEA30")]
	internal void AddDateWordOrPostfix(string formatPostfix, string str)
	{
	}

	[Token(Token = "0x60028F9")]
	[Address(RVA = "0x53FEDB0", Offset = "0x53FDDB0", VA = "0x53FEDB0")]
	internal int AddDateWords(string pattern, int index, string formatPostfix)
	{
		return default(int);
	}

	[Token(Token = "0x60028FA")]
	[Address(RVA = "0x53FEFD0", Offset = "0x53FDFD0", VA = "0x53FEFD0")]
	internal static int ScanRepeatChar(string pattern, char ch, int index, out int count)
	{
		return default(int);
	}

	[Token(Token = "0x60028FB")]
	[Address(RVA = "0x53FEC70", Offset = "0x53FDC70", VA = "0x53FEC70")]
	internal void AddIgnorableSymbols(string text)
	{
	}

	[Token(Token = "0x60028FC")]
	[Address(RVA = "0x53FF030", Offset = "0x53FE030", VA = "0x53FF030")]
	internal void ScanDateWord(string pattern)
	{
	}

	[Token(Token = "0x60028FD")]
	[Address(RVA = "0x53FD030", Offset = "0x53FC030", VA = "0x53FD030")]
	internal string[] GetDateWordsOfDTFI(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x60028FE")]
	[Address(RVA = "0x53FA380", Offset = "0x53F9380", VA = "0x53FA380")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x60028FF")]
	[Address(RVA = "0x53FA3C0", Offset = "0x53F93C0", VA = "0x53FA3C0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002900")]
	[Address(RVA = "0x53FA450", Offset = "0x53F9450", VA = "0x53FA450")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(string[] dayNames, string[] abbrevDayNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002901")]
	[Address(RVA = "0x53FA480", Offset = "0x53F9480", VA = "0x53FA480")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002902")]
	[Address(RVA = "0x53FF2B0", Offset = "0x53FE2B0", VA = "0x53FF2B0")]
	private static bool EqualStringArrays(string[] array1, string[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002903")]
	[Address(RVA = "0x53FF560", Offset = "0x53FE560", VA = "0x53FF560")]
	private static bool ArrayElementsHaveSpace(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002904")]
	[Address(RVA = "0x53FF330", Offset = "0x53FE330", VA = "0x53FF330")]
	private static bool ArrayElementsBeginWithDigit(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002905")]
	[Address(RVA = "0x53FCFB0", Offset = "0x53FBFB0", VA = "0x53FCFB0")]
	public DateTimeFormatInfoScanner()
	{
	}
}
