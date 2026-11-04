// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CompareInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x2000569")]
public class CompareInfo : IDeserializationCallback
{
	[Token(Token = "0x40015B1")]
	private const CompareOptions ValidIndexMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x40015B2")]
	private const CompareOptions ValidCompareMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x40015B3")]
	private const CompareOptions ValidHashCodeOfStringMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x40015B4")]
	private const CompareOptions ValidSortkeyCtorMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x40015B5")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CompareInfo Invariant;

	[Token(Token = "0x40015B6")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_name;

	[NonSerialized]
	[Token(Token = "0x40015B7")]
	[FieldOffset(Offset = "0x18")]
	private string _sortName;

	[Token(Token = "0x40015B8")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 3)]
	private SortVersion m_SortVersion;

	[Token(Token = "0x40015B9")]
	[FieldOffset(Offset = "0x28")]
	private int culture;

	[NonSerialized]
	[Token(Token = "0x40015BA")]
	[FieldOffset(Offset = "0x30")]
	private System.Globalization.ISimpleCollator collator;

	[Token(Token = "0x40015BB")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, System.Globalization.ISimpleCollator> collators;

	[Token(Token = "0x40015BC")]
	[FieldOffset(Offset = "0x10")]
	private static bool managedCollation;

	[Token(Token = "0x40015BD")]
	[FieldOffset(Offset = "0x11")]
	private static bool managedCollationChecked;

	[Token(Token = "0x170005D0")]
	public virtual string Name
	{
		[Token(Token = "0x6002885")]
		[Address(RVA = "0x1A5E8D0", Offset = "0x1A5CED0", VA = "0x181A5E8D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D1")]
	private static bool UseManagedCollation
	{
		[Token(Token = "0x60028A0")]
		[Address(RVA = "0x1A5E950", Offset = "0x1A5CF50", VA = "0x181A5E950")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002878")]
	[Address(RVA = "0x1A5D680", Offset = "0x1A5BC80", VA = "0x181A5D680")]
	internal static int InvariantIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x1A5D5B0", Offset = "0x1A5BBB0", VA = "0x181A5D5B0")]
	internal static int InvariantIndexOf(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x1A5D750", Offset = "0x1A5BD50", VA = "0x181A5D750")]
	internal static int InvariantLastIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600287B")]
	[Address(RVA = "0x1A5D2A0", Offset = "0x1A5B8A0", VA = "0x181A5D2A0")]
	private unsafe static int InvariantFindString(char* source, int sourceCount, char* value, int valueCount, bool ignoreCase, bool start)
	{
		return default(int);
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x1A5D840", Offset = "0x1A5BE40", VA = "0x181A5D840")]
	private static char InvariantToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x1A5CFE0", Offset = "0x1A5B5E0", VA = "0x181A5CFE0")]
	private SortKey InvariantCreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x1A5E880", Offset = "0x1A5CE80", VA = "0x181A5E880")]
	internal CompareInfo(CultureInfo culture)
	{
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x1A5BC40", Offset = "0x1A5A240", VA = "0x181A5BC40")]
	public static CompareInfo GetCompareInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002880")]
	[Address(RVA = "0x1A5E5A0", Offset = "0x1A5CBA0", VA = "0x181A5E5A0")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002881")]
	[Address(RVA = "0x1A5E590", Offset = "0x1A5CB90", VA = "0x181A5E590", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002882")]
	[Address(RVA = "0x1A5E590", Offset = "0x1A5CB90", VA = "0x181A5E590")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x1A5E4D0", Offset = "0x1A5CAD0", VA = "0x181A5E4D0")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x1A5E5C0", Offset = "0x1A5CBC0", VA = "0x181A5E5C0")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x1A5AF00", Offset = "0x1A59500", VA = "0x181A5AF00", Slot = "6")]
	public virtual int Compare(string string1, string string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x1A5A610", Offset = "0x1A58C10", VA = "0x181A5A610", Slot = "7")]
	public virtual int Compare(string string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002888")]
	[Address(RVA = "0x1A5AF30", Offset = "0x1A59530", VA = "0x181A5AF30")]
	internal int Compare(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002889")]
	[Address(RVA = "0x1A59CB0", Offset = "0x1A582B0", VA = "0x181A59CB0")]
	internal int CompareOptionNone(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x600288A")]
	[Address(RVA = "0x1A59B50", Offset = "0x1A58150", VA = "0x181A59B50")]
	internal int CompareOptionIgnoreCase(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x600288B")]
	[Address(RVA = "0x1A5A8E0", Offset = "0x1A58EE0", VA = "0x181A5A8E0", Slot = "8")]
	public virtual int Compare(string string1, int offset1, int length1, string string2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600288C")]
	[Address(RVA = "0x1A5A180", Offset = "0x1A58780", VA = "0x181A5A180")]
	internal static int CompareOrdinalIgnoreCase(string strA, int indexA, int lengthA, string strB, int indexB, int lengthB)
	{
		return default(int);
	}

	[Token(Token = "0x600288D")]
	[Address(RVA = "0x1A59E80", Offset = "0x1A58480", VA = "0x181A59E80")]
	internal static int CompareOrdinalIgnoreCase(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x600288E")]
	[Address(RVA = "0x1A5D8D0", Offset = "0x1A5BED0", VA = "0x181A5D8D0", Slot = "9")]
	public virtual bool IsPrefix(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600288F")]
	[Address(RVA = "0x1A5D860", Offset = "0x1A5BE60", VA = "0x181A5D860")]
	internal bool IsPrefix(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002890")]
	[Address(RVA = "0x1A5DAA0", Offset = "0x1A5C0A0", VA = "0x181A5DAA0", Slot = "10")]
	public virtual bool IsSuffix(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002891")]
	[Address(RVA = "0x1A5B810", Offset = "0x1A59E10", VA = "0x181A5B810")]
	internal bool IsSuffix(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002892")]
	[Address(RVA = "0x1A5CBC0", Offset = "0x1A5B1C0", VA = "0x181A5CBC0", Slot = "11")]
	public virtual int IndexOf(string source, string value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002893")]
	[Address(RVA = "0x1A5CC50", Offset = "0x1A5B250", VA = "0x181A5CC50", Slot = "12")]
	public virtual int IndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002894")]
	[Address(RVA = "0x1A5C930", Offset = "0x1A5AF30", VA = "0x181A5C930")]
	internal int IndexOfOrdinal(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002895")]
	[Address(RVA = "0x1A5CB80", Offset = "0x1A5B180", VA = "0x181A5CB80")]
	internal int IndexOf(ReadOnlySpan<char> source, ReadOnlySpan<char> value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002896")]
	[Address(RVA = "0x1A5C9D0", Offset = "0x1A5AFD0", VA = "0x181A5C9D0")]
	internal int IndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002897")]
	[Address(RVA = "0x1A5E030", Offset = "0x1A5C630", VA = "0x181A5E030", Slot = "13")]
	public virtual int LastIndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002898")]
	[Address(RVA = "0x1A5DE60", Offset = "0x1A5C460", VA = "0x181A5DE60")]
	internal int LastIndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002899")]
	[Address(RVA = "0x1A5C450", Offset = "0x1A5AA50", VA = "0x181A5C450", Slot = "14")]
	public virtual SortKey GetSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x600289A")]
	[Address(RVA = "0x1A5B880", Offset = "0x1A59E80", VA = "0x181A5B880", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600289B")]
	[Address(RVA = "0x1A5C050", Offset = "0x1A5A650", VA = "0x181A5C050", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600289C")]
	[Address(RVA = "0x1A5C090", Offset = "0x1A5A690", VA = "0x181A5C090")]
	internal static int GetIgnoreCaseHash(string source)
	{
		return default(int);
	}

	[Token(Token = "0x600289D")]
	[Address(RVA = "0x1A5BD40", Offset = "0x1A5A340", VA = "0x181A5BD40")]
	internal int GetHashCodeOfString(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600289E")]
	[Address(RVA = "0x1A5BF40", Offset = "0x1A5A540", VA = "0x181A5BF40", Slot = "15")]
	public virtual int GetHashCode(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600289F")]
	[Address(RVA = "0x1A5E760", Offset = "0x1A5CD60", VA = "0x181A5E760", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60028A1")]
	[Address(RVA = "0x1A5B930", Offset = "0x1A59F30", VA = "0x181A5B930")]
	private System.Globalization.ISimpleCollator GetCollator()
	{
		return null;
	}

	[Token(Token = "0x60028A2")]
	[Address(RVA = "0x1A5B3B0", Offset = "0x1A599B0", VA = "0x181A5B3B0")]
	private SortKey CreateSortKeyCore(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60028A3")]
	[Address(RVA = "0x1A5EFD0", Offset = "0x1A5D5D0", VA = "0x181A5EFD0")]
	private int internal_index_switch(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x60028A4")]
	[Address(RVA = "0x1A5EC70", Offset = "0x1A5D270", VA = "0x181A5EC70")]
	private int internal_compare_switch(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028A5")]
	[Address(RVA = "0x1A5EB90", Offset = "0x1A5D190", VA = "0x181A5EB90")]
	private int internal_compare_managed(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028A6")]
	[Address(RVA = "0x1A5EF30", Offset = "0x1A5D530", VA = "0x181A5EF30")]
	private int internal_index_managed(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028A7")]
	[Address(RVA = "0x1A5EAD0", Offset = "0x1A5D0D0", VA = "0x181A5EAD0")]
	private unsafe static extern int internal_compare_icall(char* str1, int length1, char* str2, int length2, CompareOptions options);

	[Token(Token = "0x60028A8")]
	[Address(RVA = "0x1A5EAE0", Offset = "0x1A5D0E0", VA = "0x181A5EAE0")]
	private static int internal_compare(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60028A9")]
	[Address(RVA = "0x1A5EE70", Offset = "0x1A5D470", VA = "0x181A5EE70")]
	private unsafe static extern int internal_index_icall(char* source, int sindex, int count, char* value, int value_length, bool first);

	[Token(Token = "0x60028AA")]
	[Address(RVA = "0x1A5EE80", Offset = "0x1A5D480", VA = "0x181A5EE80")]
	private static int internal_index(string source, int sindex, int count, string value, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x60028AB")]
	[Address(RVA = "0x1A5CFB0", Offset = "0x1A5B5B0", VA = "0x181A5CFB0")]
	private void InitSort(CultureInfo culture)
	{
	}

	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x1A5A310", Offset = "0x1A58910", VA = "0x181A5A310")]
	private unsafe static int CompareStringOrdinalIgnoreCase(char* pString1, int length1, char* pString2, int length2)
	{
		return default(int);
	}

	[Token(Token = "0x60028AD")]
	[Address(RVA = "0x1A5C8F0", Offset = "0x1A5AEF0", VA = "0x181A5C8F0")]
	internal static int IndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x60028AE")]
	[Address(RVA = "0x1A5DE20", Offset = "0x1A5C420", VA = "0x181A5DE20")]
	internal static int LastIndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x60028AF")]
	[Address(RVA = "0x1A5DC70", Offset = "0x1A5C270", VA = "0x181A5DC70")]
	private int LastIndexOfCore(string source, string target, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028B0")]
	[Address(RVA = "0x1A5C520", Offset = "0x1A5AB20", VA = "0x181A5C520")]
	private unsafe int IndexOfCore(string source, string target, int startIndex, int count, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x60028B1")]
	[Address(RVA = "0x1A5C700", Offset = "0x1A5AD00", VA = "0x181A5C700")]
	private unsafe int IndexOfCore(ReadOnlySpan<char> source, ReadOnlySpan<char> target, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x60028B2")]
	[Address(RVA = "0x1A5C930", Offset = "0x1A5AF30", VA = "0x181A5C930")]
	private int IndexOfOrdinalCore(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x60028B3")]
	[Address(RVA = "0x1A5A590", Offset = "0x1A58B90", VA = "0x181A5A590")]
	private int CompareString(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028B4")]
	[Address(RVA = "0x1A5A470", Offset = "0x1A58A70", VA = "0x181A5A470")]
	private int CompareString(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028B5")]
	[Address(RVA = "0x1A5B500", Offset = "0x1A59B00", VA = "0x181A5B500")]
	private SortKey CreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60028B6")]
	[Address(RVA = "0x1A5E650", Offset = "0x1A5CC50", VA = "0x181A5E650")]
	private bool StartsWith(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60028B7")]
	[Address(RVA = "0x1A5D860", Offset = "0x1A5BE60", VA = "0x181A5D860")]
	private bool StartsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60028B8")]
	[Address(RVA = "0x1A5B700", Offset = "0x1A59D00", VA = "0x181A5B700")]
	private bool EndsWith(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60028B9")]
	[Address(RVA = "0x1A5B810", Offset = "0x1A59E10", VA = "0x181A5B810")]
	private bool EndsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x60028BA")]
	[Address(RVA = "0x1A5BD00", Offset = "0x1A5A300", VA = "0x181A5BD00")]
	internal int GetHashCodeOfStringCore(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60028BC")]
	[Address(RVA = "0x1A5E850", Offset = "0x1A5CE50", VA = "0x181A5E850")]
	internal CompareInfo()
	{
	}
}
