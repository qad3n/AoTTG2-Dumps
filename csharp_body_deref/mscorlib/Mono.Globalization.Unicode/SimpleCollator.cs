// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.SimpleCollator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3AD6220", Offset = "0x3AD6220", VA = "0x3AD6220")]
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
		[Address(RVA = "0x3AD8C00", Offset = "0x3AD8C00", VA = "0x3AD8C00")]
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
	[Address(RVA = "0x3AD4520", Offset = "0x3AD4520", VA = "0x3AD4520")]
	public SimpleCollator(CultureInfo culture)
	{
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x3AD48A0", Offset = "0x3AD48A0", VA = "0x3AD48A0")]
	private unsafe void SetCJKTable(CultureInfo culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x3AD49F0", Offset = "0x3AD49F0", VA = "0x3AD49F0")]
	private static CultureInfo GetNeutralCulture(CultureInfo info)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x3AD4A70", Offset = "0x3AD4A70", VA = "0x3AD4A70")]
	private byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x3AD4B40", Offset = "0x3AD4B40", VA = "0x3AD4B40")]
	private byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x3AD4C10", Offset = "0x3AD4C10", VA = "0x3AD4C10")]
	private byte Level2(int cp, ExtenderType ext)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x3AD4D60", Offset = "0x3AD4D60", VA = "0x3AD4D60")]
	private static bool IsHalfKana(int cp, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3AD4DD0", Offset = "0x3AD4DD0", VA = "0x3AD4DD0")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3AD4E80", Offset = "0x3AD4E80", VA = "0x3AD4E80")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3AD4FF0", Offset = "0x3AD4FF0", VA = "0x3AD4FF0")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3AD50A0", Offset = "0x3AD50A0", VA = "0x3AD50A0")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x3AD52C0", Offset = "0x3AD52C0", VA = "0x3AD52C0")]
	private int FilterOptions(int i, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x3AD53F0", Offset = "0x3AD53F0", VA = "0x3AD53F0")]
	private ExtenderType GetExtenderType(int i)
	{
		return default(ExtenderType);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3AD54C0", Offset = "0x3AD54C0", VA = "0x3AD54C0")]
	private static byte ToDashTypeValue(ExtenderType ext, CompareOptions opt)
	{
		return default(byte);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3AD54E0", Offset = "0x3AD54E0", VA = "0x3AD54E0")]
	private int FilterExtender(int i, ExtenderType ext, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3AD5740", Offset = "0x3AD5740", VA = "0x3AD5740")]
	private static bool IsIgnorable(int i, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3AD57D0", Offset = "0x3AD57D0", VA = "0x3AD57D0")]
	private bool IsSafe(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x3AD5820", Offset = "0x3AD5820", VA = "0x3AD5820", Slot = "4")]
	public SortKey GetSortKey(string s, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3AD5840", Offset = "0x3AD5840", VA = "0x3AD5840")]
	public SortKey GetSortKey(string s, int start, int length, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3AD5B90", Offset = "0x3AD5B90", VA = "0x3AD5B90")]
	private void GetSortKey(string s, int start, int end, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3AD6250", Offset = "0x3AD6250", VA = "0x3AD6250")]
	private void FillSortKeyRaw(int i, ExtenderType ext, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3AD6960", Offset = "0x3AD6960", VA = "0x3AD6960")]
	private void FillSurrogateSortKeyRaw(int i, Mono.Globalization.Unicode.SortKeyBuffer buf)
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x3AD6AD0", Offset = "0x3AD6AD0", VA = "0x3AD6AD0", Slot = "5")]
	private int System_002EGlobalization_002EISimpleCollator_002ECompare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3AD6B90", Offset = "0x3AD6B90", VA = "0x3AD6B90")]
	internal int Compare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x3AD61C0", Offset = "0x3AD61C0", VA = "0x3AD61C0")]
	private unsafe void ClearBuffer(byte* buffer, int size)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x3AD6C50", Offset = "0x3AD6C50", VA = "0x3AD6C50")]
	private int CompareInternal(string s1, int idx1, int len1, string s2, int idx2, int len2, out bool targetConsumed, out bool sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3AD8C10", Offset = "0x3AD8C10", VA = "0x3AD8C10")]
	private int CompareFlagPair(bool b1, bool b2)
	{
		return default(int);
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3AD8C30", Offset = "0x3AD8C30", VA = "0x3AD8C30", Slot = "6")]
	public bool IsPrefix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x3AD8C50", Offset = "0x3AD8C50", VA = "0x3AD8C50")]
	public bool IsPrefix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x3AD8D70", Offset = "0x3AD8D70", VA = "0x3AD8D70")]
	private bool IsPrefix(string s, string target, int start, int length, bool skipHeadingExtenders, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x3AD8DE0", Offset = "0x3AD8DE0", VA = "0x3AD8DE0", Slot = "7")]
	public bool IsSuffix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x3AD8E00", Offset = "0x3AD8E00", VA = "0x3AD8E00")]
	public bool IsSuffix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3AD9200", Offset = "0x3AD9200", VA = "0x3AD9200")]
	private int QuickIndexOf(string s, string target, int start, int length, out bool testWasUnable)
	{
		return default(int);
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3AD9370", Offset = "0x3AD9370", VA = "0x3AD9370", Slot = "8")]
	public int IndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x3AD9E30", Offset = "0x3AD9E30", VA = "0x3AD9E30")]
	private int IndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3AD9EF0", Offset = "0x3AD9EF0", VA = "0x3AD9EF0")]
	private int IndexOfOrdinal(string s, char target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3AD9F50", Offset = "0x3AD9F50", VA = "0x3AD9F50")]
	private unsafe int IndexOfSortKey(string s, int start, int length, byte* sortkey, char target, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x3AD9680", Offset = "0x3AD9680", VA = "0x3AD9680")]
	private unsafe int IndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3AD8F20", Offset = "0x3AD8F20", VA = "0x3AD8F20", Slot = "9")]
	public int LastIndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3ADAA50", Offset = "0x3ADAA50", VA = "0x3ADAA50")]
	private int LastIndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x3ADAB70", Offset = "0x3ADAB70", VA = "0x3ADAB70")]
	private unsafe int LastIndexOfSortKey(string s, int start, int orgStart, int length, byte* sortkey, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x3ADA250", Offset = "0x3ADA250", VA = "0x3ADA250")]
	private unsafe int LastIndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x3AD9FD0", Offset = "0x3AD9FD0", VA = "0x3AD9FD0")]
	private unsafe bool MatchesForward(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3ADAE90", Offset = "0x3ADAE90", VA = "0x3ADAE90")]
	private unsafe bool MatchesForwardCore(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3ADB260", Offset = "0x3ADB260", VA = "0x3ADB260")]
	private unsafe bool MatchesPrimitive(CompareOptions opt, byte* source, int si, ExtenderType ext, byte* target, int ti, bool noLv4)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3ADAC00", Offset = "0x3ADAC00", VA = "0x3ADAC00")]
	private unsafe bool MatchesBackward(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3ADB690", Offset = "0x3ADB690", VA = "0x3ADB690")]
	private unsafe bool MatchesBackwardCore(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}
}
