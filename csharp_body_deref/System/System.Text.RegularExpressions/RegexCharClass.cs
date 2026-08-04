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

[Token(Token = "0x20000AD")]
internal sealed class RegexCharClass
{
	[Token(Token = "0x20000AE")]
	private readonly struct LowerCaseMapping
	{
		[Token(Token = "0x40002D4")]
		[FieldOffset(Offset = "0x0")]
		public readonly char ChMin;

		[Token(Token = "0x40002D5")]
		[FieldOffset(Offset = "0x2")]
		public readonly char ChMax;

		[Token(Token = "0x40002D6")]
		[FieldOffset(Offset = "0x4")]
		public readonly int LcOp;

		[Token(Token = "0x40002D7")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Data;

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4912000", Offset = "0x4912000", VA = "0x4912000")]
		internal LowerCaseMapping(char chMin, char chMax, int lcOp, int data)
		{
		}
	}

	[Token(Token = "0x20000AF")]
	private sealed class SingleRangeComparer : IComparer<SingleRange>
	{
		[Token(Token = "0x40002D8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly SingleRangeComparer Instance;

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4912010", Offset = "0x4912010", VA = "0x4912010")]
		private SingleRangeComparer()
		{
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4912020", Offset = "0x4912020", VA = "0x4912020", Slot = "4")]
		public int Compare(SingleRange x, SingleRange y)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000B0")]
	private readonly struct SingleRange
	{
		[Token(Token = "0x40002D9")]
		[FieldOffset(Offset = "0x0")]
		public readonly char First;

		[Token(Token = "0x40002DA")]
		[FieldOffset(Offset = "0x2")]
		public readonly char Last;

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x49120D0", Offset = "0x49120D0", VA = "0x49120D0")]
		internal SingleRange(char first, char last)
		{
		}
	}

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_internalRegexIgnoreCase;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string s_space;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_notSpace;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string s_word;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string s_notWord;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string SpaceClass;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string NotSpaceClass;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string WordClass;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string NotWordClass;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string DigitClass;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string NotDigitClass;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Dictionary<string, string> s_definedCategories;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string[][] s_propTable;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x68")]
	private static readonly LowerCaseMapping[] s_lcTable;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x10")]
	private List<SingleRange> _rangelist;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _categories;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x20")]
	private bool _canonical;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x21")]
	private bool _negate;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x28")]
	private RegexCharClass _subtractor;

	[Token(Token = "0x170000AB")]
	public bool CanMerge
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x4908790", Offset = "0x4908790", VA = "0x4908790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	public bool Negate
	{
		[Token(Token = "0x600035E")]
		[Address(RVA = "0x49087B0", Offset = "0x49087B0", VA = "0x49087B0")]
		set
		{
		}
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4908660", Offset = "0x4908660", VA = "0x4908660")]
	public RegexCharClass()
	{
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4908720", Offset = "0x4908720", VA = "0x4908720")]
	private RegexCharClass(bool negate, List<SingleRange> ranges, StringBuilder categories, RegexCharClass subtraction)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x49087C0", Offset = "0x49087C0", VA = "0x49087C0")]
	public void AddChar(char c)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x49088E0", Offset = "0x49088E0", VA = "0x49088E0")]
	public void AddCharClass(RegexCharClass cc)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4908BF0", Offset = "0x4908BF0", VA = "0x4908BF0")]
	private void AddSet(string set)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x4908EB0", Offset = "0x4908EB0", VA = "0x4908EB0")]
	public void AddSubtraction(RegexCharClass sub)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x49087D0", Offset = "0x49087D0", VA = "0x49087D0")]
	public void AddRange(char first, char last)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x4908EC0", Offset = "0x4908EC0", VA = "0x4908EC0")]
	public void AddCategoryFromName(string categoryName, bool invert, bool caseInsensitive, string pattern)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x4909400", Offset = "0x4909400", VA = "0x4909400")]
	private void AddCategory(string category)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x4909420", Offset = "0x4909420", VA = "0x4909420")]
	public void AddLowercase(CultureInfo culture)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x49095C0", Offset = "0x49095C0", VA = "0x49095C0")]
	private void AddLowercaseRange(char chMin, char chMax, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x49098A0", Offset = "0x49098A0", VA = "0x49098A0")]
	public void AddWord(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x4909980", Offset = "0x4909980", VA = "0x4909980")]
	public void AddSpace(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x4909A60", Offset = "0x4909A60", VA = "0x4909A60")]
	public void AddDigit(bool ecma, bool negate, string pattern)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x4909B00", Offset = "0x4909B00", VA = "0x4909B00")]
	public static char SingletonChar(string set)
	{
		return default(char);
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x4909B20", Offset = "0x4909B20", VA = "0x4909B20")]
	public static bool IsMergeable(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x4909C60", Offset = "0x4909C60", VA = "0x4909C60")]
	public static bool IsEmpty(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x4909D30", Offset = "0x4909D30", VA = "0x4909D30")]
	public static bool IsSingleton(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x4909E50", Offset = "0x4909E50", VA = "0x4909E50")]
	public static bool IsSingletonInverse(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x4909C10", Offset = "0x4909C10", VA = "0x4909C10")]
	private static bool IsSubtraction(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x4909BF0", Offset = "0x4909BF0", VA = "0x4909BF0")]
	private static bool IsNegated(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x4909F70", Offset = "0x4909F70", VA = "0x4909F70")]
	public static bool IsECMAWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x490A090", Offset = "0x490A090", VA = "0x490A090")]
	public static bool IsWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x490A040", Offset = "0x490A040", VA = "0x490A040")]
	public static bool CharInClass(char ch, string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x490A160", Offset = "0x490A160", VA = "0x490A160")]
	private static bool CharInClassRecursive(char ch, string set, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x490A270", Offset = "0x490A270", VA = "0x490A270")]
	private static bool CharInClassInternal(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x490A380", Offset = "0x490A380", VA = "0x490A380")]
	private static bool CharInCategory(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x490A520", Offset = "0x490A520", VA = "0x490A520")]
	private static bool CharInCategoryGroup(char ch, UnicodeCategory chcategory, string category, ref int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x49090D0", Offset = "0x49090D0", VA = "0x49090D0")]
	private static string NegateCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x490A5F0", Offset = "0x490A5F0", VA = "0x490A5F0")]
	public static RegexCharClass Parse(string charClass)
	{
		return null;
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x490A650", Offset = "0x490A650", VA = "0x490A650")]
	private static RegexCharClass ParseRecursive(string charClass, int start)
	{
		return null;
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x4908B60", Offset = "0x4908B60", VA = "0x4908B60")]
	private int RangeCount()
	{
		return default(int);
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x490A910", Offset = "0x490A910", VA = "0x490A910")]
	public string ToStringClass()
	{
		return null;
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x4908BA0", Offset = "0x4908BA0", VA = "0x4908BA0")]
	private SingleRange GetRangeAt(int i)
	{
		return default(SingleRange);
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x490AAC0", Offset = "0x490AAC0", VA = "0x490AAC0")]
	private void Canonicalize()
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x4909150", Offset = "0x4909150", VA = "0x4909150")]
	private static string SetFromProperty(string capname, bool invert, string pattern)
	{
		return null;
	}
}
