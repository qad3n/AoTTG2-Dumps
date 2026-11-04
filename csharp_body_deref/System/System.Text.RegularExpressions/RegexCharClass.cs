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

[Token(Token = "0x20000ED")]
internal sealed class RegexCharClass
{
	[Token(Token = "0x20000EE")]
	private readonly struct LowerCaseMapping
	{
		[Token(Token = "0x40003A6")]
		[FieldOffset(Offset = "0x0")]
		public readonly char ChMin;

		[Token(Token = "0x40003A7")]
		[FieldOffset(Offset = "0x2")]
		public readonly char ChMax;

		[Token(Token = "0x40003A8")]
		[FieldOffset(Offset = "0x4")]
		public readonly int LcOp;

		[Token(Token = "0x40003A9")]
		[FieldOffset(Offset = "0x8")]
		public readonly int Data;

		[Token(Token = "0x600055F")]
		[Address(RVA = "0x284C5F0", Offset = "0x284ABF0", VA = "0x18284C5F0")]
		internal LowerCaseMapping(char chMin, char chMax, int lcOp, int data)
		{
		}
	}

	[Token(Token = "0x20000EF")]
	private sealed class SingleRangeComparer : IComparer<SingleRange>
	{
		[Token(Token = "0x40003AA")]
		[FieldOffset(Offset = "0x0")]
		public static readonly SingleRangeComparer Instance;

		[Token(Token = "0x6000560")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private SingleRangeComparer()
		{
		}

		[Token(Token = "0x6000561")]
		[Address(RVA = "0x285F8A0", Offset = "0x285DEA0", VA = "0x18285F8A0", Slot = "4")]
		public int Compare(SingleRange x, SingleRange y)
		{
			return default(int);
		}
	}

	[Token(Token = "0x20000F0")]
	private readonly struct SingleRange
	{
		[Token(Token = "0x40003AB")]
		[FieldOffset(Offset = "0x0")]
		public readonly char First;

		[Token(Token = "0x40003AC")]
		[FieldOffset(Offset = "0x2")]
		public readonly char Last;

		[Token(Token = "0x6000563")]
		[Address(RVA = "0x1A6A860", Offset = "0x1A68E60", VA = "0x181A6A860")]
		internal SingleRange(char first, char last)
		{
		}
	}

	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string s_internalRegexIgnoreCase;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string s_space;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_notSpace;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x18")]
	private static readonly string s_word;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	private static readonly string s_notWord;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	public static readonly string SpaceClass;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	public static readonly string NotSpaceClass;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	public static readonly string WordClass;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	public static readonly string NotWordClass;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	public static readonly string DigitClass;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x50")]
	public static readonly string NotDigitClass;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x58")]
	private static readonly Dictionary<string, string> s_definedCategories;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x60")]
	private static readonly string[][] s_propTable;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x68")]
	private static readonly LowerCaseMapping[] s_lcTable;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x10")]
	private List<SingleRange> _rangelist;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x18")]
	private StringBuilder _categories;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0x20")]
	private bool _canonical;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0x21")]
	private bool _negate;

	[Token(Token = "0x40003A5")]
	[FieldOffset(Offset = "0x28")]
	private RegexCharClass _subtractor;

	[Token(Token = "0x170000E4")]
	public bool CanMerge
	{
		[Token(Token = "0x600053A")]
		[Address(RVA = "0x2856910", Offset = "0x2854F10", VA = "0x182856910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E5")]
	public bool Negate
	{
		[Token(Token = "0x600053B")]
		[Address(RVA = "0x1991EB0", Offset = "0x19904B0", VA = "0x181991EB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000538")]
	[Address(RVA = "0x28567F0", Offset = "0x2854DF0", VA = "0x1828567F0")]
	public RegexCharClass()
	{
	}

	[Token(Token = "0x6000539")]
	[Address(RVA = "0x28568B0", Offset = "0x2854EB0", VA = "0x1828568B0")]
	private RegexCharClass(bool negate, List<SingleRange> ranges, StringBuilder categories, RegexCharClass subtraction)
	{
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x284F080", Offset = "0x284D680", VA = "0x18284F080")]
	public void AddChar(char c)
	{
	}

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x284EE60", Offset = "0x284D460", VA = "0x18284EE60")]
	public void AddCharClass(RegexCharClass cc)
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x284F5C0", Offset = "0x284DBC0", VA = "0x18284F5C0")]
	private void AddSet(string set)
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
	public void AddSubtraction(RegexCharClass sub)
	{
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x284F4B0", Offset = "0x284DAB0", VA = "0x18284F4B0")]
	public void AddRange(char first, char last)
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x284EBC0", Offset = "0x284D1C0", VA = "0x18284EBC0")]
	public void AddCategoryFromName(string categoryName, bool invert, bool caseInsensitive, string pattern)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x284EE40", Offset = "0x284D440", VA = "0x18284EE40")]
	private void AddCategory(string category)
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x284F360", Offset = "0x284D960", VA = "0x18284F360")]
	public void AddLowercase(CultureInfo culture)
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x284F130", Offset = "0x284D730", VA = "0x18284F130")]
	private void AddLowercaseRange(char chMin, char chMax, CultureInfo culture)
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x284F920", Offset = "0x284DF20", VA = "0x18284F920")]
	public void AddWord(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x284F7F0", Offset = "0x284DDF0", VA = "0x18284F7F0")]
	public void AddSpace(bool ecma, bool negate)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x284F090", Offset = "0x284D690", VA = "0x18284F090")]
	public void AddDigit(bool ecma, bool negate, string pattern)
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x2850EA0", Offset = "0x284F4A0", VA = "0x182850EA0")]
	public static char SingletonChar(string set)
	{
		return default(char);
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x2850440", Offset = "0x284EA40", VA = "0x182850440")]
	public static bool IsMergeable(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x2850360", Offset = "0x284E960", VA = "0x182850360")]
	public static bool IsEmpty(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x2850680", Offset = "0x284EC80", VA = "0x182850680")]
	public static bool IsSingleton(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x2850540", Offset = "0x284EB40", VA = "0x182850540")]
	public static bool IsSingletonInverse(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x28507C0", Offset = "0x284EDC0", VA = "0x1828507C0")]
	private static bool IsSubtraction(string charClass)
	{
		return default(bool);
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x2850510", Offset = "0x284EB10", VA = "0x182850510")]
	private static bool IsNegated(string set)
	{
		return default(bool);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x28502C0", Offset = "0x284E8C0", VA = "0x1828502C0")]
	public static bool IsECMAWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x2850820", Offset = "0x284EE20", VA = "0x182850820")]
	public static bool IsWordChar(char ch)
	{
		return default(bool);
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x2850200", Offset = "0x284E800", VA = "0x182850200")]
	public static bool CharInClass(char ch, string set)
	{
		return default(bool);
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x28500C0", Offset = "0x284E6C0", VA = "0x1828500C0")]
	private static bool CharInClassRecursive(char ch, string set, int start)
	{
		return default(bool);
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x284FEB0", Offset = "0x284E4B0", VA = "0x18284FEB0")]
	private static bool CharInClassInternal(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x284FD50", Offset = "0x284E350", VA = "0x18284FD50")]
	private static bool CharInCategory(char ch, string set, int start, int mySetLength, int myCategoryLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x284FC90", Offset = "0x284E290", VA = "0x18284FC90")]
	private static bool CharInCategoryGroup(char ch, UnicodeCategory chcategory, string category, ref int i)
	{
		return default(bool);
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x28508F0", Offset = "0x284EEF0", VA = "0x1828508F0")]
	private static string NegateCategory(string category)
	{
		return null;
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x2850BC0", Offset = "0x284F1C0", VA = "0x182850BC0")]
	public static RegexCharClass Parse(string charClass)
	{
		return null;
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x2850980", Offset = "0x284EF80", VA = "0x182850980")]
	private static RegexCharClass ParseRecursive(string charClass, int start)
	{
		return null;
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x2850C10", Offset = "0x284F210", VA = "0x182850C10")]
	private int RangeCount()
	{
		return default(int);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x2850EC0", Offset = "0x284F4C0", VA = "0x182850EC0")]
	public string ToStringClass()
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x2850260", Offset = "0x284E860", VA = "0x182850260")]
	private SingleRange GetRangeAt(int i)
	{
		return default(SingleRange);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x284FA50", Offset = "0x284E050", VA = "0x18284FA50")]
	private void Canonicalize()
	{
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x2850C50", Offset = "0x284F250", VA = "0x182850C50")]
	private static string SetFromProperty(string capname, bool invert, string pattern)
	{
		return null;
	}
}
