// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CompareInfo
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x3C3C0E0", Offset = "0x3C3C0E0", VA = "0x3C3C0E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000642")]
	private static bool UseManagedCollation
	{
		[Token(Token = "0x6002B84")]
		[Address(RVA = "0x3C3F4E0", Offset = "0x3C3F4E0", VA = "0x3C3F4E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B60")]
	[Address(RVA = "0x3C3B500", Offset = "0x3C3B500", VA = "0x3C3B500")]
	internal static int InvariantIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B61")]
	[Address(RVA = "0x3C3BA80", Offset = "0x3C3BA80", VA = "0x3C3BA80")]
	internal static int InvariantLastIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B62")]
	[Address(RVA = "0x3C3B5C0", Offset = "0x3C3B5C0", VA = "0x3C3B5C0")]
	private unsafe static int InvariantFindString(char* source, int sourceCount, char* value, int valueCount, bool ignoreCase, bool start)
	{
		return default(int);
	}

	[Token(Token = "0x6002B63")]
	[Address(RVA = "0x3C3BB40", Offset = "0x3C3BB40", VA = "0x3C3BB40")]
	private static char InvariantToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x6002B64")]
	[Address(RVA = "0x3C3BB50", Offset = "0x3C3BB50", VA = "0x3C3BB50")]
	private SortKey InvariantCreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B65")]
	[Address(RVA = "0x3C3BE40", Offset = "0x3C3BE40", VA = "0x3C3BE40")]
	internal CompareInfo(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002B66")]
	[Address(RVA = "0x3C3BEB0", Offset = "0x3C3BEB0", VA = "0x3C3BEB0")]
	public static CompareInfo GetCompareInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x6002B67")]
	[Address(RVA = "0x3C3BF60", Offset = "0x3C3BF60", VA = "0x3C3BF60")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B68")]
	[Address(RVA = "0x3C3BF80", Offset = "0x3C3BF80", VA = "0x3C3BF80", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002B69")]
	[Address(RVA = "0x3C3C040", Offset = "0x3C3C040", VA = "0x3C3C040")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B6A")]
	[Address(RVA = "0x3C3BF90", Offset = "0x3C3BF90", VA = "0x3C3BF90")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002B6B")]
	[Address(RVA = "0x3C3C050", Offset = "0x3C3C050", VA = "0x3C3C050")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002B6D")]
	[Address(RVA = "0x3C3C160", Offset = "0x3C3C160", VA = "0x3C3C160", Slot = "6")]
	public virtual int Compare(string string1, string string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B6E")]
	[Address(RVA = "0x3C3C180", Offset = "0x3C3C180", VA = "0x3C3C180", Slot = "7")]
	public virtual int Compare(string string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B6F")]
	[Address(RVA = "0x3C3C790", Offset = "0x3C3C790", VA = "0x3C3C790")]
	internal int Compare(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B70")]
	[Address(RVA = "0x3C3CBF0", Offset = "0x3C3CBF0", VA = "0x3C3CBF0")]
	internal int CompareOptionIgnoreCase(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B71")]
	[Address(RVA = "0x3C3CDF0", Offset = "0x3C3CDF0", VA = "0x3C3CDF0", Slot = "8")]
	public virtual int Compare(string string1, int offset1, int length1, string string2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B72")]
	[Address(RVA = "0x3C3D3A0", Offset = "0x3C3D3A0", VA = "0x3C3D3A0")]
	internal static int CompareOrdinalIgnoreCase(string strA, int indexA, int lengthA, string strB, int indexB, int lengthB)
	{
		return default(int);
	}

	[Token(Token = "0x6002B73")]
	[Address(RVA = "0x3C3C410", Offset = "0x3C3C410", VA = "0x3C3C410")]
	internal static int CompareOrdinalIgnoreCase(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x6002B74")]
	[Address(RVA = "0x3C3D6B0", Offset = "0x3C3D6B0", VA = "0x3C3D6B0", Slot = "9")]
	public virtual bool IsPrefix(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B75")]
	[Address(RVA = "0x3C3DA50", Offset = "0x3C3DA50", VA = "0x3C3DA50")]
	internal bool IsPrefix(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B76")]
	[Address(RVA = "0x3C3DAF0", Offset = "0x3C3DAF0", VA = "0x3C3DAF0", Slot = "10")]
	public virtual bool IsSuffix(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B77")]
	[Address(RVA = "0x3C3DE90", Offset = "0x3C3DE90", VA = "0x3C3DE90")]
	internal bool IsSuffix(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B78")]
	[Address(RVA = "0x3C3DF30", Offset = "0x3C3DF30", VA = "0x3C3DF30", Slot = "11")]
	public virtual int IndexOf(string source, string value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B79")]
	[Address(RVA = "0x3C3DFB0", Offset = "0x3C3DFB0", VA = "0x3C3DFB0", Slot = "12")]
	public virtual int IndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7A")]
	[Address(RVA = "0x3C3E260", Offset = "0x3C3E260", VA = "0x3C3E260")]
	internal int IndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7B")]
	[Address(RVA = "0x3C3E470", Offset = "0x3C3E470", VA = "0x3C3E470", Slot = "13")]
	public virtual int LastIndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7C")]
	[Address(RVA = "0x3C3E7A0", Offset = "0x3C3E7A0", VA = "0x3C3E7A0")]
	internal int LastIndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B7D")]
	[Address(RVA = "0x3C3E960", Offset = "0x3C3E960", VA = "0x3C3E960", Slot = "14")]
	public virtual SortKey GetSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B7E")]
	[Address(RVA = "0x3C3EB00", Offset = "0x3C3EB00", VA = "0x3C3EB00", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B7F")]
	[Address(RVA = "0x3C3EBB0", Offset = "0x3C3EBB0", VA = "0x3C3EBB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002B80")]
	[Address(RVA = "0x3C3EBF0", Offset = "0x3C3EBF0", VA = "0x3C3EBF0")]
	internal static int GetIgnoreCaseHash(string source)
	{
		return default(int);
	}

	[Token(Token = "0x6002B81")]
	[Address(RVA = "0x3C3F180", Offset = "0x3C3F180", VA = "0x3C3F180")]
	internal int GetHashCodeOfString(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B82")]
	[Address(RVA = "0x3C3F3B0", Offset = "0x3C3F3B0", VA = "0x3C3F3B0", Slot = "15")]
	public virtual int GetHashCode(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B83")]
	[Address(RVA = "0x3C3F490", Offset = "0x3C3F490", VA = "0x3C3F490", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6002B85")]
	[Address(RVA = "0x3C3F660", Offset = "0x3C3F660", VA = "0x3C3F660")]
	private System.Globalization.ISimpleCollator GetCollator()
	{
		return null;
	}

	[Token(Token = "0x6002B86")]
	[Address(RVA = "0x3C3FA70", Offset = "0x3C3FA70", VA = "0x3C3FA70")]
	private SortKey CreateSortKeyCore(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B87")]
	[Address(RVA = "0x3C3FBD0", Offset = "0x3C3FBD0", VA = "0x3C3FBD0")]
	private int internal_index_switch(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002B88")]
	[Address(RVA = "0x3C3C610", Offset = "0x3C3C610", VA = "0x3C3C610")]
	private int internal_compare_switch(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B89")]
	[Address(RVA = "0x3C40020", Offset = "0x3C40020", VA = "0x3C40020")]
	private int internal_compare_managed(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B8A")]
	[Address(RVA = "0x3C3FE40", Offset = "0x3C3FE40", VA = "0x3C3FE40")]
	private int internal_index_managed(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B8B")]
	[Address(RVA = "0x3C40120", Offset = "0x3C40120", VA = "0x3C40120")]
	private unsafe static extern int internal_compare_icall(char* str1, int length1, char* str2, int length2, CompareOptions options);

	[Token(Token = "0x6002B8C")]
	[Address(RVA = "0x3C3FF70", Offset = "0x3C3FF70", VA = "0x3C3FF70")]
	private static int internal_compare(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002B8D")]
	[Address(RVA = "0x3C40130", Offset = "0x3C40130", VA = "0x3C40130")]
	private unsafe static extern int internal_index_icall(char* source, int sindex, int count, char* value, int value_length, bool first);

	[Token(Token = "0x6002B8E")]
	[Address(RVA = "0x3C3FD80", Offset = "0x3C3FD80", VA = "0x3C3FD80")]
	private static int internal_index(string source, int sindex, int count, string value, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002B8F")]
	[Address(RVA = "0x3C3BE90", Offset = "0x3C3BE90", VA = "0x3C3BE90")]
	private void InitSort(CultureInfo culture)
	{
	}

	[Token(Token = "0x6002B90")]
	[Address(RVA = "0x3C3D530", Offset = "0x3C3D530", VA = "0x3C3D530")]
	private unsafe static int CompareStringOrdinalIgnoreCase(char* pString1, int length1, char* pString2, int length2)
	{
		return default(int);
	}

	[Token(Token = "0x6002B91")]
	[Address(RVA = "0x3C3E440", Offset = "0x3C3E440", VA = "0x3C3E440")]
	internal static int IndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B92")]
	[Address(RVA = "0x3C3E930", Offset = "0x3C3E930", VA = "0x3C3E930")]
	internal static int LastIndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002B93")]
	[Address(RVA = "0x3C3E910", Offset = "0x3C3E910", VA = "0x3C3E910")]
	private int LastIndexOfCore(string source, string target, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B94")]
	[Address(RVA = "0x3C3E3D0", Offset = "0x3C3E3D0", VA = "0x3C3E3D0")]
	private unsafe int IndexOfCore(string source, string target, int startIndex, int count, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x6002B95")]
	[Address(RVA = "0x3C3CB90", Offset = "0x3C3CB90", VA = "0x3C3CB90")]
	private int CompareString(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B96")]
	[Address(RVA = "0x3C3CD30", Offset = "0x3C3CD30", VA = "0x3C3CD30")]
	private int CompareString(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B97")]
	[Address(RVA = "0x3C3EA50", Offset = "0x3C3EA50", VA = "0x3C3EA50")]
	private SortKey CreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002B98")]
	[Address(RVA = "0x3C3D8C0", Offset = "0x3C3D8C0", VA = "0x3C3D8C0")]
	private bool StartsWith(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B99")]
	[Address(RVA = "0x3C3DAA0", Offset = "0x3C3DAA0", VA = "0x3C3DAA0")]
	private bool StartsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9A")]
	[Address(RVA = "0x3C3DD00", Offset = "0x3C3DD00", VA = "0x3C3DD00")]
	private bool EndsWith(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x3C3DEE0", Offset = "0x3C3DEE0", VA = "0x3C3DEE0")]
	private bool EndsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x3C3F370", Offset = "0x3C3F370", VA = "0x3C3F370")]
	internal int GetHashCodeOfStringCore(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002B9E")]
	[Address(RVA = "0x3C401F0", Offset = "0x3C401F0", VA = "0x3C401F0")]
	internal CompareInfo()
	{
	}
}
