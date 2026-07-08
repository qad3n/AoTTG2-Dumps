using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x2000595")]
public class CompareInfo : IDeserializationCallback
{
	[Token(Token = "0x4001760")]
	private const CompareOptions ValidIndexMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x4001761")]
	private const CompareOptions ValidCompareMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x4001762")]
	private const CompareOptions ValidHashCodeOfStringMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x4001763")]
	private const CompareOptions ValidSortkeyCtorMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x4001764")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CompareInfo Invariant;

	[Token(Token = "0x4001765")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_name;

	[NonSerialized]
	[Token(Token = "0x4001766")]
	[FieldOffset(Offset = "0x18")]
	private string _sortName;

	[Token(Token = "0x4001767")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 3)]
	private SortVersion m_SortVersion;

	[Token(Token = "0x4001768")]
	[FieldOffset(Offset = "0x28")]
	private int culture;

	[NonSerialized]
	[Token(Token = "0x4001769")]
	[FieldOffset(Offset = "0x30")]
	private System.Globalization.ISimpleCollator collator;

	[Token(Token = "0x400176A")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, System.Globalization.ISimpleCollator> collators;

	[Token(Token = "0x400176B")]
	[FieldOffset(Offset = "0x10")]
	private static bool managedCollation;

	[Token(Token = "0x400176C")]
	[FieldOffset(Offset = "0x11")]
	private static bool managedCollationChecked;

	[Token(Token = "0x17000641")]
	public virtual string Name
	{
		[Token(Token = "0x6002B6C")]
		[Address(RVA = "0x4F565C0", Offset = "0x4F565C0", VA = "0x4F565C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000642")]
	private static bool UseManagedCollation
	{
		[Token(Token = "0x6002B84")]
		[Address(RVA = "0x4F599C0", Offset = "0x4F599C0", VA = "0x4F599C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B60")]
	[Address(RVA = "0x4F559E0", Offset = "0x4F559E0", VA = "0x4F559E0")]
	internal static int InvariantIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B61")]
	[Address(RVA = "0x4F55F60", Offset = "0x4F55F60", VA = "0x4F55F60")]
	internal static int InvariantLastIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x4F55AA0", Offset = "0x4F55AA0", VA = "0x4F55AA0")]
	private unsafe static int InvariantFindString(char* source, int sourceCount, char* value, int valueCount, bool ignoreCase, bool start)
	{
		return default(int);
	}

	[Token(Token = "0x6002B63")]
	[Address(RVA = "0x4F56020", Offset = "0x4F56020", VA = "0x4F56020")]
	private static char InvariantToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002B64")]
	[Address(RVA = "0x4F56030", Offset = "0x4F56030", VA = "0x4F56030")]
	private SortKey InvariantCreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B65")]
	[Address(RVA = "0x4F56320", Offset = "0x4F56320", VA = "0x4F56320")]
	internal CompareInfo(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002B66")]
	[Address(RVA = "0x4F56390", Offset = "0x4F56390", VA = "0x4F56390")]
	public static CompareInfo GetCompareInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B67")]
	[Address(RVA = "0x4F56440", Offset = "0x4F56440", VA = "0x4F56440")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B68")]
	[Address(RVA = "0x4F56460", Offset = "0x4F56460", VA = "0x4F56460", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002B69")]
	[Address(RVA = "0x4F56520", Offset = "0x4F56520", VA = "0x4F56520")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x4F56470", Offset = "0x4F56470", VA = "0x4F56470")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x4F56530", Offset = "0x4F56530", VA = "0x4F56530")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B6D")]
	[Address(RVA = "0x4F56640", Offset = "0x4F56640", VA = "0x4F56640", Slot = "6")]
	public virtual int Compare(string string1, string string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B6E")]
	[Address(RVA = "0x4F56660", Offset = "0x4F56660", VA = "0x4F56660", Slot = "7")]
	public virtual int Compare(string string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B6F")]
	[Address(RVA = "0x4F56C70", Offset = "0x4F56C70", VA = "0x4F56C70")]
	internal int Compare(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B70")]
	[Address(RVA = "0x4F570D0", Offset = "0x4F570D0", VA = "0x4F570D0")]
	internal int CompareOptionIgnoreCase(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x4F572D0", Offset = "0x4F572D0", VA = "0x4F572D0", Slot = "8")]
	public virtual int Compare(string string1, int offset1, int length1, string string2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B72")]
	[Address(RVA = "0x4F57880", Offset = "0x4F57880", VA = "0x4F57880")]
	internal static int CompareOrdinalIgnoreCase(string strA, int indexA, int lengthA, string strB, int indexB, int lengthB)
	{
		return default(int);
	}

	[Token(Token = "0x6002B73")]
	[Address(RVA = "0x4F568F0", Offset = "0x4F568F0", VA = "0x4F568F0")]
	internal static int CompareOrdinalIgnoreCase(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x6002B74")]
	[Address(RVA = "0x4F57B90", Offset = "0x4F57B90", VA = "0x4F57B90", Slot = "9")]
	public virtual bool IsPrefix(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B75")]
	[Address(RVA = "0x4F57F30", Offset = "0x4F57F30", VA = "0x4F57F30")]
	internal bool IsPrefix(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x4F57FD0", Offset = "0x4F57FD0", VA = "0x4F57FD0", Slot = "10")]
	public virtual bool IsSuffix(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x4F58370", Offset = "0x4F58370", VA = "0x4F58370")]
	internal bool IsSuffix(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x4F58410", Offset = "0x4F58410", VA = "0x4F58410", Slot = "11")]
	public virtual int IndexOf(string source, string value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x4F58490", Offset = "0x4F58490", VA = "0x4F58490", Slot = "12")]
	public virtual int IndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7A")]
	[Address(RVA = "0x4F58740", Offset = "0x4F58740", VA = "0x4F58740")]
	internal int IndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7B")]
	[Address(RVA = "0x4F58950", Offset = "0x4F58950", VA = "0x4F58950", Slot = "13")]
	public virtual int LastIndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x4F58C80", Offset = "0x4F58C80", VA = "0x4F58C80")]
	internal int LastIndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x4F58E40", Offset = "0x4F58E40", VA = "0x4F58E40", Slot = "14")]
	public virtual SortKey GetSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x4F58FE0", Offset = "0x4F58FE0", VA = "0x4F58FE0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B7F")]
	[Address(RVA = "0x4F59090", Offset = "0x4F59090", VA = "0x4F59090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B80")]
	[Address(RVA = "0x4F590D0", Offset = "0x4F590D0", VA = "0x4F590D0")]
	internal static int GetIgnoreCaseHash(string source)
	{
		return default(int);
	}

	[Token(Token = "0x6002B81")]
	[Address(RVA = "0x4F59660", Offset = "0x4F59660", VA = "0x4F59660")]
	internal int GetHashCodeOfString(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B82")]
	[Address(RVA = "0x4F59890", Offset = "0x4F59890", VA = "0x4F59890", Slot = "15")]
	public virtual int GetHashCode(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B83")]
	[Address(RVA = "0x4F59970", Offset = "0x4F59970", VA = "0x4F59970", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x4F59B40", Offset = "0x4F59B40", VA = "0x4F59B40")]
	private System.Globalization.ISimpleCollator GetCollator()
	{
		return null;
	}

	[Token(Token = "0x6002B86")]
	[Address(RVA = "0x4F59F50", Offset = "0x4F59F50", VA = "0x4F59F50")]
	private SortKey CreateSortKeyCore(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B87")]
	[Address(RVA = "0x4F5A0B0", Offset = "0x4F5A0B0", VA = "0x4F5A0B0")]
	private int internal_index_switch(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002B88")]
	[Address(RVA = "0x4F56AF0", Offset = "0x4F56AF0", VA = "0x4F56AF0")]
	private int internal_compare_switch(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B89")]
	[Address(RVA = "0x4F5A500", Offset = "0x4F5A500", VA = "0x4F5A500")]
	private int internal_compare_managed(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B8A")]
	[Address(RVA = "0x4F5A320", Offset = "0x4F5A320", VA = "0x4F5A320")]
	private int internal_index_managed(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B8B")]
	[Address(RVA = "0x4F5A600", Offset = "0x4F5A600", VA = "0x4F5A600")]
	private unsafe static extern int internal_compare_icall(char* str1, int length1, char* str2, int length2, CompareOptions options);

	[Token(Token = "0x6002B8C")]
	[Address(RVA = "0x4F5A450", Offset = "0x4F5A450", VA = "0x4F5A450")]
	private static int internal_compare(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B8D")]
	[Address(RVA = "0x4F5A610", Offset = "0x4F5A610", VA = "0x4F5A610")]
	private unsafe static extern int internal_index_icall(char* source, int sindex, int count, char* value, int value_length, bool first);

	[Token(Token = "0x6002B8E")]
	[Address(RVA = "0x4F5A260", Offset = "0x4F5A260", VA = "0x4F5A260")]
	private static int internal_index(string source, int sindex, int count, string value, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002B8F")]
	[Address(RVA = "0x4F56370", Offset = "0x4F56370", VA = "0x4F56370")]
	private void InitSort(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002B90")]
	[Address(RVA = "0x4F57A10", Offset = "0x4F57A10", VA = "0x4F57A10")]
	private unsafe static int CompareStringOrdinalIgnoreCase(char* pString1, int length1, char* pString2, int length2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B91")]
	[Address(RVA = "0x4F58920", Offset = "0x4F58920", VA = "0x4F58920")]
	internal static int IndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B92")]
	[Address(RVA = "0x4F58E10", Offset = "0x4F58E10", VA = "0x4F58E10")]
	internal static int LastIndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B93")]
	[Address(RVA = "0x4F58DF0", Offset = "0x4F58DF0", VA = "0x4F58DF0")]
	private int LastIndexOfCore(string source, string target, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B94")]
	[Address(RVA = "0x4F588B0", Offset = "0x4F588B0", VA = "0x4F588B0")]
	private unsafe int IndexOfCore(string source, string target, int startIndex, int count, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x6002B95")]
	[Address(RVA = "0x4F57070", Offset = "0x4F57070", VA = "0x4F57070")]
	private int CompareString(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B96")]
	[Address(RVA = "0x4F57210", Offset = "0x4F57210", VA = "0x4F57210")]
	private int CompareString(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B97")]
	[Address(RVA = "0x4F58F30", Offset = "0x4F58F30", VA = "0x4F58F30")]
	private SortKey CreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B98")]
	[Address(RVA = "0x4F57DA0", Offset = "0x4F57DA0", VA = "0x4F57DA0")]
	private bool StartsWith(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B99")]
	[Address(RVA = "0x4F57F80", Offset = "0x4F57F80", VA = "0x4F57F80")]
	private bool StartsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9A")]
	[Address(RVA = "0x4F581E0", Offset = "0x4F581E0", VA = "0x4F581E0")]
	private bool EndsWith(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x4F583C0", Offset = "0x4F583C0", VA = "0x4F583C0")]
	private bool EndsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x4F59850", Offset = "0x4F59850", VA = "0x4F59850")]
	internal int GetHashCodeOfStringCore(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B9E")]
	[Address(RVA = "0x4F5A6D0", Offset = "0x4F5A6D0", VA = "0x4F5A6D0")]
	internal CompareInfo()
	{
	}
}
