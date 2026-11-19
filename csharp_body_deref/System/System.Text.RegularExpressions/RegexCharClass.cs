// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexCharClass
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000AE")]
internal sealed class RegexCharClass
{
	[Token(Token = "0x20000AF")]
	private readonly struct LowerCaseMapping
	{
		[Token(Token = "0x40002D7")]
		[FieldOffset(Offset = "0x0")]
		public readonly char ChMin;

		[Token(Token = "0x40002D8")]
		[FieldOffset(Offset = "0x2")]
		public readonly char ChMax;

		[Token(Token = "0x40002D9")]
		[FieldOffset(Offset = "0x4")]
		public readonly int LcOp;

		[Token(Token = "0x40002DA")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Data;

		[Token(Token = "0x60003A9")]
		[Address(RVA = "0x61EF620", Offset = "0x61EE620", VA = "0x61EF620")]
		internal LowerCaseMapping(char chMin, char chMax, int lcOp, int data)
		{
		}
	}

	[Token(Token = "0x20000B0")]
	private sealed class SingleRangeComparer : IComparer<SingleRange>
	{
		[Token(Token = "0x40002DB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly SingleRangeComparer Instance;

		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x61EF630", Offset = "0x61EE630", VA = "0x61EF630")]
		private SingleRangeComparer()
		{
		}

		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x61EF640", Offset = "0x61EE640", VA = "0x61EF640", Slot = "4")]
		public int Compare(SingleRange x, SingleRange y)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000B1")]
	private readonly struct SingleRange
	{
		[Token(Token = "0x40002DC")]
		[FieldOffset(Offset = "0x0")]
		public readonly char First;

		[Token(Token = "0x40002DD")]
		[FieldOffset(Offset = "0x2")]
		public readonly char Last;

		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x61EF6F0", Offset = "0x61EE6F0", VA = "0x61EF6F0")]
		internal SingleRange(char first, char last)
		{
		}
	}

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_internalRegexIgnoreCase;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string s_space;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_notSpace;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string s_word;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string s_notWord;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string SpaceClass;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string NotSpaceClass;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string WordClass;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string NotWordClass;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string DigitClass;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string NotDigitClass;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Dictionary<string, string> s_definedCategories;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string[][] s_propTable;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x68")]
	private static readonly LowerCaseMapping[] s_lcTable;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x10")]
	private List<SingleRange> _rangelist;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _categories;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x20")]
	private bool _canonical;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0x21")]
	private bool _negate;

	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x28")]
	private RegexCharClass _subtractor;

	[Token(Token = "0x170000B5")]
	public bool CanMerge
	{
		[Token(Token = "0x6000384")]
		[Address(RVA = "0x61E5CE0", Offset = "0x61E4CE0", VA = "0x61E5CE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B6")]
	public bool Negate
	{
		[Token(Token = "0x6000385")]
		[Address(RVA = "0x61E5D00", Offset = "0x61E4D00", VA = "0x61E5D00")]
		set
		{
		}
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x61E5BB0", Offset = "0x61E4BB0", VA = "0x61E5BB0")]
	public RegexCharClass()
	{
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x61E5C70", Offset = "0x61E4C70", VA = "0x61E5C70")]
	private RegexCharClass(bool negate, List<SingleRange> ranges, StringBuilder categories, RegexCharClass subtraction)
	{
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x61E5D10", Offset = "0x61E4D10", VA = "0x61E5D10")]
	public void AddChar(char c)
	{
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x61E5E30", Offset = "0x61E4E30", VA = "0x61E5E30")]
	public void AddCharClass(RegexCharClass cc)
	{
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x61E6110", Offset = "0x61E5110", VA = "0x61E6110")]
	private void AddSet(string set)
	{
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x61E63B0", Offset = "0x61E53B0", VA = "0x61E63B0")]
	public void AddSubtraction(RegexCharClass sub)
	{
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x61E5D20", Offset = "0x61E4D20", VA = "0x61E5D20")]
	public void AddRange(char first, char last)
	{
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x61E63C0", Offset = "0x61E53C0", VA = "0x61E63C0")]
	public void AddCategoryFromName(string categoryName, bool invert, bool caseInsensitive, string pattern)
	{
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x61E68E0", Offset = "0x61E58E0", VA = "0x61E68E0")]
	private void AddCategory(string category)
	{
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x61E6900", Offset = "0x61E5900", VA = "0x61E6900")]
	public void AddLowercase(CultureInfo culture)
	{
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x61E6A90", Offset = "0x61E5A90", VA = "0x61E6A90")]
	private void AddLowercaseRange(char chMin, char chMax, CultureInfo culture)
	{
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x61E6D90", Offset = "0x61E5D90", VA = "0x61E6D90")]
	public void AddWord(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x61E6E70", Offset = "0x61E5E70", VA = "0x61E6E70")]
	public void AddSpace(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x61E6F50", Offset = "0x61E5F50", VA = "0x61E6F50")]
	public void AddDigit(bool ecma, bool negate, string pattern)
	{
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x61E6FF0", Offset = "0x61E5FF0", VA = "0x61E6FF0")]
	public static char SingletonChar(string set)
	{
		return default(char);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x61E7010", Offset = "0x61E6010", VA = "0x61E7010")]
	public static bool IsMergeable(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x61E7150", Offset = "0x61E6150", VA = "0x61E7150")]
	public static bool IsEmpty(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x61E7220", Offset = "0x61E6220", VA = "0x61E7220")]
	public static bool IsSingleton(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x61E7340", Offset = "0x61E6340", VA = "0x61E7340")]
	public static bool IsSingletonInverse(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x61E7100", Offset = "0x61E6100", VA = "0x61E7100")]
	private static bool IsSubtraction(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x61E70E0", Offset = "0x61E60E0", VA = "0x61E70E0")]
	private static bool IsNegated(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x61E7460", Offset = "0x61E6460", VA = "0x61E7460")]
	public static bool IsECMAWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x61E7580", Offset = "0x61E6580", VA = "0x61E7580")]
	public static bool IsWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x61E7530", Offset = "0x61E6530", VA = "0x61E7530")]
	public static bool CharInClass(char ch, string set)
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x61E7660", Offset = "0x61E6660", VA = "0x61E7660")]
	private static bool CharInClassRecursive(char ch, string set, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x61E7770", Offset = "0x61E6770", VA = "0x61E7770")]
	private static bool CharInClassInternal(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x61E7880", Offset = "0x61E6880", VA = "0x61E7880")]
	private static bool CharInCategory(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x61E7A20", Offset = "0x61E6A20", VA = "0x61E7A20")]
	private static bool CharInCategoryGroup(char ch, UnicodeCategory chcategory, string category, ref int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x61E65D0", Offset = "0x61E55D0", VA = "0x61E65D0")]
	private static string NegateCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x61E7AF0", Offset = "0x61E6AF0", VA = "0x61E7AF0")]
	public static RegexCharClass Parse(string charClass)
	{
		return null;
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x61E7B60", Offset = "0x61E6B60", VA = "0x61E7B60")]
	private static RegexCharClass ParseRecursive(string charClass, int start)
	{
		return null;
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x61E6080", Offset = "0x61E5080", VA = "0x61E6080")]
	private int RangeCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x61E7E20", Offset = "0x61E6E20", VA = "0x61E7E20")]
	public string ToStringClass()
	{
		return null;
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x61E60C0", Offset = "0x61E50C0", VA = "0x61E60C0")]
	private SingleRange GetRangeAt(int i)
	{
		return default(SingleRange);
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x61E7FC0", Offset = "0x61E6FC0", VA = "0x61E7FC0")]
	private void Canonicalize()
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x61E6650", Offset = "0x61E5650", VA = "0x61E6650")]
	private static string SetFromProperty(string capname, bool invert, string pattern)
	{
		return null;
	}
}
