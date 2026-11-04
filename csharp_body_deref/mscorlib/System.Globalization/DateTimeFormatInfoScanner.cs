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

[Token(Token = "0x2000573")]
internal class DateTimeFormatInfoScanner
{
	[Token(Token = "0x2000574")]
	private enum FoundDatePattern
	{
		[Token(Token = "0x400165B")]
		None = 0,
		[Token(Token = "0x400165C")]
		FoundYearPatternFlag = 1,
		[Token(Token = "0x400165D")]
		FoundMonthPatternFlag = 2,
		[Token(Token = "0x400165E")]
		FoundDayPatternFlag = 4,
		[Token(Token = "0x400165F")]
		FoundYMDPatternFlag = 7
	}

	[Token(Token = "0x4001657")]
	[FieldOffset(Offset = "0x10")]
	internal List<string> m_dateWords;

	[Token(Token = "0x4001658")]
	[FieldOffset(Offset = "0x0")]
	private static Dictionary<string, string> s_knownWords;

	[Token(Token = "0x4001659")]
	[FieldOffset(Offset = "0x18")]
	private FoundDatePattern _ymdFlags;

	[Token(Token = "0x1700060A")]
	private static Dictionary<string, string> KnownWords
	{
		[Token(Token = "0x6002928")]
		[Address(RVA = "0x1A60C50", Offset = "0x1A5F250", VA = "0x181A60C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002929")]
	[Address(RVA = "0x1A60B20", Offset = "0x1A5F120", VA = "0x181A60B20")]
	internal static int SkipWhiteSpacesAndNonLetter(string pattern, int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600292A")]
	[Address(RVA = "0x1A5FB10", Offset = "0x1A5E110", VA = "0x181A5FB10")]
	internal void AddDateWordOrPostfix(string formatPostfix, string str)
	{
	}

	[Token(Token = "0x600292B")]
	[Address(RVA = "0x1A5FD40", Offset = "0x1A5E340", VA = "0x181A5FD40")]
	internal int AddDateWords(string pattern, int index, string formatPostfix)
	{
		return default(int);
	}

	[Token(Token = "0x600292C")]
	[Address(RVA = "0x1A60AD0", Offset = "0x1A5F0D0", VA = "0x181A60AD0")]
	internal static int ScanRepeatChar(string pattern, char ch, int index, out int count)
	{
		return default(int);
	}

	[Token(Token = "0x600292D")]
	[Address(RVA = "0x1A5FF50", Offset = "0x1A5E550", VA = "0x181A5FF50")]
	internal void AddIgnorableSymbols(string text)
	{
	}

	[Token(Token = "0x600292E")]
	[Address(RVA = "0x1A608A0", Offset = "0x1A5EEA0", VA = "0x181A608A0")]
	internal void ScanDateWord(string pattern)
	{
	}

	[Token(Token = "0x600292F")]
	[Address(RVA = "0x1A603D0", Offset = "0x1A5E9D0", VA = "0x181A603D0")]
	internal string[] GetDateWordsOfDTFI(DateTimeFormatInfo dtfi)
	{
		return null;
	}

	[Token(Token = "0x6002930")]
	[Address(RVA = "0x1A606A0", Offset = "0x1A5ECA0", VA = "0x181A606A0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagGenitiveMonth(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002931")]
	[Address(RVA = "0x1A607F0", Offset = "0x1A5EDF0", VA = "0x181A607F0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(string[] monthNames, string[] genitveMonthNames, string[] abbrevMonthNames, string[] genetiveAbbrevMonthNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002932")]
	[Address(RVA = "0x1A607B0", Offset = "0x1A5EDB0", VA = "0x181A607B0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseSpaceInDayNames(string[] dayNames, string[] abbrevDayNames)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002933")]
	[Address(RVA = "0x1A607A0", Offset = "0x1A5EDA0", VA = "0x181A607A0")]
	internal static System.Globalization.FORMATFLAGS GetFormatFlagUseHebrewCalendar(int calID)
	{
		return default(System.Globalization.FORMATFLAGS);
	}

	[Token(Token = "0x6002934")]
	[Address(RVA = "0x1A60330", Offset = "0x1A5E930", VA = "0x181A60330")]
	private static bool EqualStringArrays(string[] array1, string[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6002935")]
	[Address(RVA = "0x1A60290", Offset = "0x1A5E890", VA = "0x181A60290")]
	private static bool ArrayElementsHaveSpace(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002936")]
	[Address(RVA = "0x1A60050", Offset = "0x1A5E650", VA = "0x181A60050")]
	private static bool ArrayElementsBeginWithDigit(string[] array)
	{
		return default(bool);
	}

	[Token(Token = "0x6002937")]
	[Address(RVA = "0x1A60BD0", Offset = "0x1A5F1D0", VA = "0x181A60BD0")]
	public DateTimeFormatInfoScanner()
	{
	}
}
