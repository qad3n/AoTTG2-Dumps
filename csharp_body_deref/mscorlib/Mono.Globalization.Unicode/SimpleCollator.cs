using System.Globalization;
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x200003A")]
internal class SimpleCollator : System.Globalization.ISimpleCollator
{
	[Token(Token = "0x200003B")]
	internal struct Context
	{
		[Token(Token = "0x4000111")]
		[FieldOffset(Offset = "0x0")]
		public readonly CompareOptions Option;

		[Token(Token = "0x4000112")]
		[FieldOffset(Offset = "0x8")]
		public unsafe readonly byte* NeverMatchFlags;

		[Token(Token = "0x4000113")]
		[FieldOffset(Offset = "0x10")]
		public unsafe readonly byte* AlwaysMatchFlags;

		[Token(Token = "0x4000114")]
		[FieldOffset(Offset = "0x18")]
		public unsafe byte* Buffer1;

		[Token(Token = "0x4000115")]
		[FieldOffset(Offset = "0x20")]
		public unsafe byte* Buffer2;

		[Token(Token = "0x4000116")]
		[FieldOffset(Offset = "0x28")]
		public int PrevCode;

		[Token(Token = "0x4000117")]
		[FieldOffset(Offset = "0x30")]
		public unsafe byte* PrevSortKey;

		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x4DF0700", Offset = "0x4DF0700", VA = "0x4DF0700")]
		public unsafe Context(CompareOptions opt, byte* alwaysMatchFlags, byte* neverMatchFlags, byte* buffer1, byte* buffer2, byte* prev1)
		{
		}
	}

	[Token(Token = "0x200003C")]
	private struct PreviousInfo
	{
		[Token(Token = "0x4000118")]
		[FieldOffset(Offset = "0x0")]
		public int Code;

		[Token(Token = "0x4000119")]
		[FieldOffset(Offset = "0x8")]
		public unsafe byte* SortKey;

		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x4DF30E0", Offset = "0x4DF30E0", VA = "0x4DF30E0")]
		public PreviousInfo(bool dummy)
		{
		}
	}

	[Token(Token = "0x200003D")]
	private struct Escape
	{
		[Token(Token = "0x400011A")]
		[FieldOffset(Offset = "0x0")]
		public string Source;

		[Token(Token = "0x400011B")]
		[FieldOffset(Offset = "0x8")]
		public int Index;

		[Token(Token = "0x400011C")]
		[FieldOffset(Offset = "0xC")]
		public int Start;

		[Token(Token = "0x400011D")]
		[FieldOffset(Offset = "0x10")]
		public int End;

		[Token(Token = "0x400011E")]
		[FieldOffset(Offset = "0x14")]
		public int Optional;
	}

	[Token(Token = "0x200003E")]
	private enum ExtenderType
	{
		[Token(Token = "0x4000120")]
		None,
		[Token(Token = "0x4000121")]
		Simple,
		[Token(Token = "0x4000122")]
		Voiced,
		[Token(Token = "0x4000123")]
		Conditional,
		[Token(Token = "0x4000124")]
		Buggy
	}

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x0")]
	private static Mono.Globalization.Unicode.SimpleCollator invariant;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x10")]
	private readonly TextInfo textInfo;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x18")]
	private readonly Mono.Globalization.Unicode.CodePointIndexer cjkIndexer;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x20")]
	private readonly Mono.Globalization.Unicode.Contraction[] contractions;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x28")]
	private readonly Mono.Globalization.Unicode.Level2Map[] level2Maps;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x30")]
	private readonly byte[] unsafeFlags;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x38")]
	private unsafe readonly byte* cjkCatTable;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x40")]
	private unsafe readonly byte* cjkLv1Table;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x48")]
	private unsafe readonly byte* cjkLv2Table;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x50")]
	private readonly Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x58")]
	private readonly int lcid;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x5C")]
	private readonly bool frenchSort;

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4DEEA00", Offset = "0x4DEEA00", VA = "0x4DEEA00")]
	public SimpleCollator(CultureInfo culture)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4DEED80", Offset = "0x4DEED80", VA = "0x4DEED80")]
	private unsafe void SetCJKTable(CultureInfo culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4DEEED0", Offset = "0x4DEEED0", VA = "0x4DEEED0")]
	private static CultureInfo GetNeutralCulture(CultureInfo info)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4DEEF50", Offset = "0x4DEEF50", VA = "0x4DEEF50")]
	private byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4DEF020", Offset = "0x4DEF020", VA = "0x4DEF020")]
	private byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4DEF0F0", Offset = "0x4DEF0F0", VA = "0x4DEF0F0")]
	private byte Level2(int cp, ExtenderType ext)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4DEF240", Offset = "0x4DEF240", VA = "0x4DEF240")]
	private static bool IsHalfKana(int cp, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4DEF2B0", Offset = "0x4DEF2B0", VA = "0x4DEF2B0")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4DEF360", Offset = "0x4DEF360", VA = "0x4DEF360")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4DEF4D0", Offset = "0x4DEF4D0", VA = "0x4DEF4D0")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4DEF580", Offset = "0x4DEF580", VA = "0x4DEF580")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4DEF7A0", Offset = "0x4DEF7A0", VA = "0x4DEF7A0")]
	private int FilterOptions(int i, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4DEF8D0", Offset = "0x4DEF8D0", VA = "0x4DEF8D0")]
	private ExtenderType GetExtenderType(int i)
	{
		return default(ExtenderType);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4DEF9A0", Offset = "0x4DEF9A0", VA = "0x4DEF9A0")]
	private static byte ToDashTypeValue(ExtenderType ext, CompareOptions opt)
	{
		return default(byte);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4DEF9C0", Offset = "0x4DEF9C0", VA = "0x4DEF9C0")]
	private int FilterExtender(int i, ExtenderType ext, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4DEFC20", Offset = "0x4DEFC20", VA = "0x4DEFC20")]
	private static bool IsIgnorable(int i, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4DEFCB0", Offset = "0x4DEFCB0", VA = "0x4DEFCB0")]
	private bool IsSafe(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4DEFD00", Offset = "0x4DEFD00", VA = "0x4DEFD00", Slot = "4")]
	public SortKey GetSortKey(string s, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4DEFD20", Offset = "0x4DEFD20", VA = "0x4DEFD20")]
	public SortKey GetSortKey(string s, int start, int length, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4DF0070", Offset = "0x4DF0070", VA = "0x4DF0070")]
	private void GetSortKey(string s, int start, int end, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4DF0730", Offset = "0x4DF0730", VA = "0x4DF0730")]
	private void FillSortKeyRaw(int i, ExtenderType ext, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4DF0E40", Offset = "0x4DF0E40", VA = "0x4DF0E40")]
	private void FillSurrogateSortKeyRaw(int i, Mono.Globalization.Unicode.SortKeyBuffer buf)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x4DF0FB0", Offset = "0x4DF0FB0", VA = "0x4DF0FB0", Slot = "5")]
	private int System_002EGlobalization_002EISimpleCollator_002ECompare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x4DF1070", Offset = "0x4DF1070", VA = "0x4DF1070")]
	internal int Compare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x4DF06A0", Offset = "0x4DF06A0", VA = "0x4DF06A0")]
	private unsafe void ClearBuffer(byte* buffer, int size)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x4DF1130", Offset = "0x4DF1130", VA = "0x4DF1130")]
	private int CompareInternal(string s1, int idx1, int len1, string s2, int idx2, int len2, out bool targetConsumed, out bool sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4DF30F0", Offset = "0x4DF30F0", VA = "0x4DF30F0")]
	private int CompareFlagPair(bool b1, bool b2)
	{
		return default(int);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4DF3110", Offset = "0x4DF3110", VA = "0x4DF3110", Slot = "6")]
	public bool IsPrefix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4DF3130", Offset = "0x4DF3130", VA = "0x4DF3130")]
	public bool IsPrefix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x4DF3250", Offset = "0x4DF3250", VA = "0x4DF3250")]
	private bool IsPrefix(string s, string target, int start, int length, bool skipHeadingExtenders, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x4DF32C0", Offset = "0x4DF32C0", VA = "0x4DF32C0", Slot = "7")]
	public bool IsSuffix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x4DF32E0", Offset = "0x4DF32E0", VA = "0x4DF32E0")]
	public bool IsSuffix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x4DF36E0", Offset = "0x4DF36E0", VA = "0x4DF36E0")]
	private int QuickIndexOf(string s, string target, int start, int length, out bool testWasUnable)
	{
		return default(int);
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x4DF3850", Offset = "0x4DF3850", VA = "0x4DF3850", Slot = "8")]
	public int IndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4DF4310", Offset = "0x4DF4310", VA = "0x4DF4310")]
	private int IndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4DF43D0", Offset = "0x4DF43D0", VA = "0x4DF43D0")]
	private int IndexOfOrdinal(string s, char target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4DF4430", Offset = "0x4DF4430", VA = "0x4DF4430")]
	private unsafe int IndexOfSortKey(string s, int start, int length, byte* sortkey, char target, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x4DF3B60", Offset = "0x4DF3B60", VA = "0x4DF3B60")]
	private unsafe int IndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x4DF3400", Offset = "0x4DF3400", VA = "0x4DF3400", Slot = "9")]
	public int LastIndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x4DF4F30", Offset = "0x4DF4F30", VA = "0x4DF4F30")]
	private int LastIndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x4DF5050", Offset = "0x4DF5050", VA = "0x4DF5050")]
	private unsafe int LastIndexOfSortKey(string s, int start, int orgStart, int length, byte* sortkey, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x4DF4730", Offset = "0x4DF4730", VA = "0x4DF4730")]
	private unsafe int LastIndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4DF44B0", Offset = "0x4DF44B0", VA = "0x4DF44B0")]
	private unsafe bool MatchesForward(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4DF5370", Offset = "0x4DF5370", VA = "0x4DF5370")]
	private unsafe bool MatchesForwardCore(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4DF5740", Offset = "0x4DF5740", VA = "0x4DF5740")]
	private unsafe bool MatchesPrimitive(CompareOptions opt, byte* source, int si, ExtenderType ext, byte* target, int ti, bool noLv4)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4DF50E0", Offset = "0x4DF50E0", VA = "0x4DF50E0")]
	private unsafe bool MatchesBackward(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4DF5B70", Offset = "0x4DF5B70", VA = "0x4DF5B70")]
	private unsafe bool MatchesBackwardCore(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}
}
