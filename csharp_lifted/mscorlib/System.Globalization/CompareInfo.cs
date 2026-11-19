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
[Token(Token = "0x2000542")]
public class CompareInfo : IDeserializationCallback
{
	[Token(Token = "0x4001511")]
	private const CompareOptions ValidIndexMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x4001512")]
	private const CompareOptions ValidCompareMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x4001513")]
	private const CompareOptions ValidHashCodeOfStringMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth);

	[Token(Token = "0x4001514")]
	private const CompareOptions ValidSortkeyCtorMaskOffFlags = ~(CompareOptions.IgnoreCase | CompareOptions.IgnoreNonSpace | CompareOptions.IgnoreSymbols | CompareOptions.IgnoreKanaType | CompareOptions.IgnoreWidth | CompareOptions.StringSort);

	[Token(Token = "0x4001515")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly CompareInfo Invariant;

	[Token(Token = "0x4001516")]
	[FieldOffset(Offset = "0x10")]
	[OptionalField(VersionAdded = 2)]
	private string m_name;

	[NonSerialized]
	[Token(Token = "0x4001517")]
	[FieldOffset(Offset = "0x18")]
	private string _sortName;

	[Token(Token = "0x4001518")]
	[FieldOffset(Offset = "0x20")]
	[OptionalField(VersionAdded = 3)]
	private SortVersion m_SortVersion;

	[Token(Token = "0x4001519")]
	[FieldOffset(Offset = "0x28")]
	private int culture;

	[NonSerialized]
	[Token(Token = "0x400151A")]
	[FieldOffset(Offset = "0x30")]
	private System.Globalization.ISimpleCollator collator;

	[Token(Token = "0x400151B")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<string, System.Globalization.ISimpleCollator> collators;

	[Token(Token = "0x400151C")]
	[FieldOffset(Offset = "0x10")]
	private static bool managedCollation;

	[Token(Token = "0x400151D")]
	[FieldOffset(Offset = "0x11")]
	private static bool managedCollationChecked;

	[Token(Token = "0x170005CF")]
	public virtual string Name
	{
		[Token(Token = "0x6002853")]
		[Address(RVA = "0x53F1CC0", Offset = "0x53F0CC0", VA = "0x53F1CC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D0")]
	private static bool UseManagedCollation
	{
		[Token(Token = "0x600286E")]
		[Address(RVA = "0x53F5470", Offset = "0x53F4470", VA = "0x53F5470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002846")]
	[Address(RVA = "0x53F0FD0", Offset = "0x53EFFD0", VA = "0x53F0FD0")]
	internal static int InvariantIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002847")]
	[Address(RVA = "0x53F1590", Offset = "0x53F0590", VA = "0x53F1590")]
	internal static int InvariantIndexOf(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002848")]
	[Address(RVA = "0x53F1650", Offset = "0x53F0650", VA = "0x53F1650")]
	internal static int InvariantLastIndexOf(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002849")]
	[Address(RVA = "0x53F10A0", Offset = "0x53F00A0", VA = "0x53F10A0")]
	private unsafe static int InvariantFindString(char* source, int sourceCount, char* value, int valueCount, bool ignoreCase, bool start)
	{
		return default(int);
	}

	[Token(Token = "0x600284A")]
	[Address(RVA = "0x53F1720", Offset = "0x53F0720", VA = "0x53F1720")]
	private static char InvariantToUpper(char c)
	{
		return default(char);
	}

	[Token(Token = "0x600284B")]
	[Address(RVA = "0x53F1730", Offset = "0x53F0730", VA = "0x53F1730")]
	private SortKey InvariantCreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x600284C")]
	[Address(RVA = "0x53F1A20", Offset = "0x53F0A20", VA = "0x53F1A20")]
	internal CompareInfo(CultureInfo culture)
	{
	}

	[Token(Token = "0x600284D")]
	[Address(RVA = "0x53F1A90", Offset = "0x53F0A90", VA = "0x53F1A90")]
	public static CompareInfo GetCompareInfo(string name)
	{
		return null;
	}

	[Token(Token = "0x600284E")]
	[Address(RVA = "0x53F1B40", Offset = "0x53F0B40", VA = "0x53F1B40")]
	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x600284F")]
	[Address(RVA = "0x53F1B60", Offset = "0x53F0B60", VA = "0x53F1B60", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6002850")]
	[Address(RVA = "0x53F1C20", Offset = "0x53F0C20", VA = "0x53F1C20")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002851")]
	[Address(RVA = "0x53F1B70", Offset = "0x53F0B70", VA = "0x53F1B70")]
	private void OnDeserialized()
	{
	}

	[Token(Token = "0x6002852")]
	[Address(RVA = "0x53F1C30", Offset = "0x53F0C30", VA = "0x53F1C30")]
	[OnSerializing]
	private void OnSerializing(StreamingContext ctx)
	{
	}

	[Token(Token = "0x6002854")]
	[Address(RVA = "0x53F1D40", Offset = "0x53F0D40", VA = "0x53F1D40", Slot = "6")]
	public virtual int Compare(string string1, string string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002855")]
	[Address(RVA = "0x53F1D60", Offset = "0x53F0D60", VA = "0x53F1D60", Slot = "7")]
	public virtual int Compare(string string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002856")]
	[Address(RVA = "0x53F2390", Offset = "0x53F1390", VA = "0x53F2390")]
	internal int Compare(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002857")]
	[Address(RVA = "0x53F27F0", Offset = "0x53F17F0", VA = "0x53F27F0")]
	internal int CompareOptionNone(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002858")]
	[Address(RVA = "0x53F2A30", Offset = "0x53F1A30", VA = "0x53F2A30")]
	internal int CompareOptionIgnoreCase(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2)
	{
		return default(int);
	}

	[Token(Token = "0x6002859")]
	[Address(RVA = "0x53F2B70", Offset = "0x53F1B70", VA = "0x53F2B70", Slot = "8")]
	public virtual int Compare(string string1, int offset1, int length1, string string2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600285A")]
	[Address(RVA = "0x53F30E0", Offset = "0x53F20E0", VA = "0x53F30E0")]
	internal static int CompareOrdinalIgnoreCase(string strA, int indexA, int lengthA, string strB, int indexB, int lengthB)
	{
		return default(int);
	}

	[Token(Token = "0x600285B")]
	[Address(RVA = "0x53F1FF0", Offset = "0x53F0FF0", VA = "0x53F1FF0")]
	internal static int CompareOrdinalIgnoreCase(ReadOnlySpan<char> strA, ReadOnlySpan<char> strB)
	{
		return default(int);
	}

	[Token(Token = "0x600285C")]
	[Address(RVA = "0x53F3470", Offset = "0x53F2470", VA = "0x53F3470", Slot = "9")]
	public virtual bool IsPrefix(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600285D")]
	[Address(RVA = "0x53F3800", Offset = "0x53F2800", VA = "0x53F3800")]
	internal bool IsPrefix(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600285E")]
	[Address(RVA = "0x53F38A0", Offset = "0x53F28A0", VA = "0x53F38A0", Slot = "10")]
	public virtual bool IsSuffix(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x600285F")]
	[Address(RVA = "0x53F3C30", Offset = "0x53F2C30", VA = "0x53F3C30")]
	internal bool IsSuffix(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002860")]
	[Address(RVA = "0x53F3CD0", Offset = "0x53F2CD0", VA = "0x53F3CD0", Slot = "11")]
	public virtual int IndexOf(string source, string value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002861")]
	[Address(RVA = "0x53F3D50", Offset = "0x53F2D50", VA = "0x53F3D50", Slot = "12")]
	public virtual int IndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002862")]
	[Address(RVA = "0x53F41D0", Offset = "0x53F31D0", VA = "0x53F41D0")]
	internal int IndexOfOrdinal(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002863")]
	[Address(RVA = "0x53F42D0", Offset = "0x53F32D0", VA = "0x53F42D0")]
	internal int IndexOf(ReadOnlySpan<char> source, ReadOnlySpan<char> value, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002864")]
	[Address(RVA = "0x53F4000", Offset = "0x53F3000", VA = "0x53F4000")]
	internal int IndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002865")]
	[Address(RVA = "0x53F43F0", Offset = "0x53F33F0", VA = "0x53F43F0", Slot = "13")]
	public virtual int LastIndexOf(string source, string value, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002866")]
	[Address(RVA = "0x53F4720", Offset = "0x53F3720", VA = "0x53F4720")]
	internal int LastIndexOfOrdinal(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002867")]
	[Address(RVA = "0x53F4900", Offset = "0x53F3900", VA = "0x53F4900", Slot = "14")]
	public virtual SortKey GetSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002868")]
	[Address(RVA = "0x53F4AA0", Offset = "0x53F3AA0", VA = "0x53F4AA0", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002869")]
	[Address(RVA = "0x53F4B40", Offset = "0x53F3B40", VA = "0x53F4B40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600286A")]
	[Address(RVA = "0x53F4B80", Offset = "0x53F3B80", VA = "0x53F4B80")]
	internal static int GetIgnoreCaseHash(string source)
	{
		return default(int);
	}

	[Token(Token = "0x600286B")]
	[Address(RVA = "0x53F5110", Offset = "0x53F4110", VA = "0x53F5110")]
	internal int GetHashCodeOfString(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600286C")]
	[Address(RVA = "0x53F5340", Offset = "0x53F4340", VA = "0x53F5340", Slot = "15")]
	public virtual int GetHashCode(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600286D")]
	[Address(RVA = "0x53F5420", Offset = "0x53F4420", VA = "0x53F5420", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600286F")]
	[Address(RVA = "0x53F5600", Offset = "0x53F4600", VA = "0x53F5600")]
	private System.Globalization.ISimpleCollator GetCollator()
	{
		return null;
	}

	[Token(Token = "0x6002870")]
	[Address(RVA = "0x53F59B0", Offset = "0x53F49B0", VA = "0x53F59B0")]
	private SortKey CreateSortKeyCore(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002871")]
	[Address(RVA = "0x53F5B10", Offset = "0x53F4B10", VA = "0x53F5B10")]
	private int internal_index_switch(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002872")]
	[Address(RVA = "0x53F21E0", Offset = "0x53F11E0", VA = "0x53F21E0")]
	private int internal_compare_switch(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002873")]
	[Address(RVA = "0x53F5FF0", Offset = "0x53F4FF0", VA = "0x53F5FF0")]
	private int internal_compare_managed(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002874")]
	[Address(RVA = "0x53F5DB0", Offset = "0x53F4DB0", VA = "0x53F5DB0")]
	private int internal_index_managed(string s1, int sindex, int count, string s2, CompareOptions opt, bool first)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002875")]
	[Address(RVA = "0x53F60F0", Offset = "0x53F50F0", VA = "0x53F60F0")]
	private unsafe static extern int internal_compare_icall(char* str1, int length1, char* str2, int length2, CompareOptions options);

	[Token(Token = "0x6002876")]
	[Address(RVA = "0x53F5F10", Offset = "0x53F4F10", VA = "0x53F5F10")]
	private static int internal_compare(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002877")]
	[Address(RVA = "0x53F6100", Offset = "0x53F5100", VA = "0x53F6100")]
	private unsafe static extern int internal_index_icall(char* source, int sindex, int count, char* value, int value_length, bool first);

	[Token(Token = "0x6002878")]
	[Address(RVA = "0x53F5CE0", Offset = "0x53F4CE0", VA = "0x53F5CE0")]
	private static int internal_index(string source, int sindex, int count, string value, bool first)
	{
		return default(int);
	}

	[Token(Token = "0x6002879")]
	[Address(RVA = "0x53F1A70", Offset = "0x53F0A70", VA = "0x53F1A70")]
	private void InitSort(CultureInfo culture)
	{
	}

	[Token(Token = "0x600287A")]
	[Address(RVA = "0x53F3280", Offset = "0x53F2280", VA = "0x53F3280")]
	private unsafe static int CompareStringOrdinalIgnoreCase(char* pString1, int length1, char* pString2, int length2)
	{
		return default(int);
	}

	[Token(Token = "0x600287B")]
	[Address(RVA = "0x53F43C0", Offset = "0x53F33C0", VA = "0x53F43C0")]
	internal static int IndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600287C")]
	[Address(RVA = "0x53F48D0", Offset = "0x53F38D0", VA = "0x53F48D0")]
	internal static int LastIndexOfOrdinalCore(string source, string value, int startIndex, int count, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x600287D")]
	[Address(RVA = "0x53F48B0", Offset = "0x53F38B0", VA = "0x53F48B0")]
	private int LastIndexOfCore(string source, string target, int startIndex, int count, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600287E")]
	[Address(RVA = "0x53F4190", Offset = "0x53F3190", VA = "0x53F4190")]
	private unsafe int IndexOfCore(string source, string target, int startIndex, int count, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x600287F")]
	[Address(RVA = "0x53F4340", Offset = "0x53F3340", VA = "0x53F4340")]
	private unsafe int IndexOfCore(ReadOnlySpan<char> source, ReadOnlySpan<char> target, CompareOptions options, int* matchLengthPtr)
	{
		return default(int);
	}

	[Token(Token = "0x6002880")]
	[Address(RVA = "0x53F4250", Offset = "0x53F3250", VA = "0x53F4250")]
	private int IndexOfOrdinalCore(ReadOnlySpan<char> source, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6002881")]
	[Address(RVA = "0x53F2790", Offset = "0x53F1790", VA = "0x53F2790")]
	private int CompareString(ReadOnlySpan<char> string1, string string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002882")]
	[Address(RVA = "0x53F2970", Offset = "0x53F1970", VA = "0x53F2970")]
	private int CompareString(ReadOnlySpan<char> string1, ReadOnlySpan<char> string2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x6002883")]
	[Address(RVA = "0x53F49F0", Offset = "0x53F39F0", VA = "0x53F49F0")]
	private SortKey CreateSortKey(string source, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x6002884")]
	[Address(RVA = "0x53F3670", Offset = "0x53F2670", VA = "0x53F3670")]
	private bool StartsWith(string source, string prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002885")]
	[Address(RVA = "0x53F3850", Offset = "0x53F2850", VA = "0x53F3850")]
	private bool StartsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> prefix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002886")]
	[Address(RVA = "0x53F3AA0", Offset = "0x53F2AA0", VA = "0x53F3AA0")]
	private bool EndsWith(string source, string suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002887")]
	[Address(RVA = "0x53F3C80", Offset = "0x53F2C80", VA = "0x53F3C80")]
	private bool EndsWith(ReadOnlySpan<char> source, ReadOnlySpan<char> suffix, CompareOptions options)
	{
		return default(bool);
	}

	[Token(Token = "0x6002888")]
	[Address(RVA = "0x53F5300", Offset = "0x53F4300", VA = "0x53F5300")]
	internal int GetHashCodeOfStringCore(string source, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x600288A")]
	[Address(RVA = "0x53F61C0", Offset = "0x53F51C0", VA = "0x53F61C0")]
	internal CompareInfo()
	{
	}
}
