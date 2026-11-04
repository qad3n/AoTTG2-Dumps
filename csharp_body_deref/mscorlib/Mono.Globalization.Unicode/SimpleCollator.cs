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

[Token(Token = "0x2000058")]
internal class SimpleCollator : System.Globalization.ISimpleCollator
{
	[Token(Token = "0x2000059")]
	internal struct Context
	{
		[Token(Token = "0x4000193")]
		[FieldOffset(Offset = "0x0")]
		public readonly CompareOptions Option;

		[Token(Token = "0x4000194")]
		[FieldOffset(Offset = "0x8")]
		public unsafe readonly byte* NeverMatchFlags;

		[Token(Token = "0x4000195")]
		[FieldOffset(Offset = "0x10")]
		public unsafe readonly byte* AlwaysMatchFlags;

		[Token(Token = "0x4000196")]
		[FieldOffset(Offset = "0x18")]
		public unsafe byte* Buffer1;

		[Token(Token = "0x4000197")]
		[FieldOffset(Offset = "0x20")]
		public unsafe byte* Buffer2;

		[Token(Token = "0x4000198")]
		[FieldOffset(Offset = "0x28")]
		public int PrevCode;

		[Token(Token = "0x4000199")]
		[FieldOffset(Offset = "0x30")]
		public unsafe byte* PrevSortKey;

		[Token(Token = "0x600010F")]
		[Address(RVA = "0x19419A0", Offset = "0x193FFA0", VA = "0x1819419A0")]
		public unsafe Context(CompareOptions opt, byte* alwaysMatchFlags, byte* neverMatchFlags, byte* buffer1, byte* buffer2, byte* prev1)
		{
		}
	}

	[Token(Token = "0x200005A")]
	private struct PreviousInfo
	{
		[Token(Token = "0x400019A")]
		[FieldOffset(Offset = "0x0")]
		public int Code;

		[Token(Token = "0x400019B")]
		[FieldOffset(Offset = "0x8")]
		public unsafe byte* SortKey;

		[Token(Token = "0x6000110")]
		[Address(RVA = "0x194C380", Offset = "0x194A980", VA = "0x18194C380")]
		public PreviousInfo(bool dummy)
		{
		}
	}

	[Token(Token = "0x200005B")]
	private struct Escape
	{
		[Token(Token = "0x400019C")]
		[FieldOffset(Offset = "0x0")]
		public string Source;

		[Token(Token = "0x400019D")]
		[FieldOffset(Offset = "0x8")]
		public int Index;

		[Token(Token = "0x400019E")]
		[FieldOffset(Offset = "0xC")]
		public int Start;

		[Token(Token = "0x400019F")]
		[FieldOffset(Offset = "0x10")]
		public int End;

		[Token(Token = "0x40001A0")]
		[FieldOffset(Offset = "0x14")]
		public int Optional;
	}

	[Token(Token = "0x200005C")]
	private enum ExtenderType
	{
		[Token(Token = "0x40001A2")]
		None,
		[Token(Token = "0x40001A3")]
		Simple,
		[Token(Token = "0x40001A4")]
		Voiced,
		[Token(Token = "0x40001A5")]
		Conditional,
		[Token(Token = "0x40001A6")]
		Buggy
	}

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x0")]
	private static Mono.Globalization.Unicode.SimpleCollator invariant;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x10")]
	private readonly TextInfo textInfo;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x18")]
	private readonly Mono.Globalization.Unicode.CodePointIndexer cjkIndexer;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x20")]
	private readonly Mono.Globalization.Unicode.Contraction[] contractions;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x28")]
	private readonly Mono.Globalization.Unicode.Level2Map[] level2Maps;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x30")]
	private readonly byte[] unsafeFlags;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x38")]
	private unsafe readonly byte* cjkCatTable;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x40")]
	private unsafe readonly byte* cjkLv1Table;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x48")]
	private unsafe readonly byte* cjkLv2Table;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x50")]
	private readonly Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x58")]
	private readonly int lcid;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x5C")]
	private readonly bool frenchSort;

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x1953010", Offset = "0x1951610", VA = "0x181953010")]
	public SimpleCollator(CultureInfo culture)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x1952DE0", Offset = "0x19513E0", VA = "0x181952DE0")]
	private unsafe void SetCJKTable(CultureInfo culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x194F950", Offset = "0x194DF50", VA = "0x18194F950")]
	private static CultureInfo GetNeutralCulture(CultureInfo info)
	{
		return null;
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x194D7D0", Offset = "0x194BDD0", VA = "0x18194D7D0")]
	private byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x1951B30", Offset = "0x1950130", VA = "0x181951B30")]
	private byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x1951BD0", Offset = "0x19501D0", VA = "0x181951BD0")]
	private byte Level2(int cp, ExtenderType ext)
	{
		return default(byte);
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x1950C20", Offset = "0x194F220", VA = "0x181950C20")]
	private static bool IsHalfKana(int cp, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x194F6E0", Offset = "0x194DCE0", VA = "0x18194F6E0")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x194F5D0", Offset = "0x194DBD0", VA = "0x18194F5D0")]
	private Mono.Globalization.Unicode.Contraction GetContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x1950140", Offset = "0x194E740", VA = "0x181950140")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end)
	{
		return null;
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x194FF50", Offset = "0x194E550", VA = "0x18194FF50")]
	private Mono.Globalization.Unicode.Contraction GetTailContraction(string s, int start, int end, Mono.Globalization.Unicode.Contraction[] clist)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x194F320", Offset = "0x194D920", VA = "0x18194F320")]
	private int FilterOptions(int i, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x194F890", Offset = "0x194DE90", VA = "0x18194F890")]
	private ExtenderType GetExtenderType(int i)
	{
		return default(ExtenderType);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x1952F50", Offset = "0x1951550", VA = "0x181952F50")]
	private static byte ToDashTypeValue(ExtenderType ext, CompareOptions opt)
	{
		return default(byte);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x194F140", Offset = "0x194D740", VA = "0x18194F140")]
	private int FilterExtender(int i, ExtenderType ext, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x1950CA0", Offset = "0x194F2A0", VA = "0x181950CA0")]
	private static bool IsIgnorable(int i, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x1950F00", Offset = "0x194F500", VA = "0x181950F00")]
	private bool IsSafe(int i)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x194FE60", Offset = "0x194E460", VA = "0x18194FE60", Slot = "4")]
	public SortKey GetSortKey(string s, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x194F9E0", Offset = "0x194DFE0", VA = "0x18194F9E0")]
	public SortKey GetSortKey(string s, int start, int length, CompareOptions options)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x194FAE0", Offset = "0x194E0E0", VA = "0x18194FAE0")]
	private void GetSortKey(string s, int start, int end, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x194EB30", Offset = "0x194D130", VA = "0x18194EB30")]
	private void FillSortKeyRaw(int i, ExtenderType ext, Mono.Globalization.Unicode.SortKeyBuffer buf, CompareOptions opt)
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x194F080", Offset = "0x194D680", VA = "0x18194F080")]
	private void FillSurrogateSortKeyRaw(int i, Mono.Globalization.Unicode.SortKeyBuffer buf)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x1952F40", Offset = "0x1951540", VA = "0x181952F40", Slot = "5")]
	private int System_002EGlobalization_002EISimpleCollator_002ECompare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x194EA20", Offset = "0x194D020", VA = "0x18194EA20")]
	internal int Compare(string s1, int idx1, int len1, string s2, int idx2, int len2, CompareOptions options)
	{
		return default(int);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x194D870", Offset = "0x194BE70", VA = "0x18194D870")]
	private unsafe void ClearBuffer(byte* buffer, int size)
	{
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x194D8C0", Offset = "0x194BEC0", VA = "0x18194D8C0")]
	private int CompareInternal(string s1, int idx1, int len1, string s2, int idx2, int len2, out bool targetConsumed, out bool sourceConsumed, bool skipHeadingExtenders, bool immediateBreakup, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x194D8A0", Offset = "0x194BEA0", VA = "0x18194D8A0")]
	private int CompareFlagPair(bool b1, bool b2)
	{
		return default(int);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x1950DB0", Offset = "0x194F3B0", VA = "0x181950DB0", Slot = "6")]
	public bool IsPrefix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x1950DF0", Offset = "0x194F3F0", VA = "0x181950DF0")]
	public bool IsPrefix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x1950D30", Offset = "0x194F330", VA = "0x181950D30")]
	private bool IsPrefix(string s, string target, int start, int length, bool skipHeadingExtenders, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x1951030", Offset = "0x194F630", VA = "0x181951030", Slot = "7")]
	public bool IsSuffix(string src, string target, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x1950F80", Offset = "0x194F580", VA = "0x181950F80")]
	public bool IsSuffix(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1952CB0", Offset = "0x19512B0", VA = "0x181952CB0")]
	private int QuickIndexOf(string s, string target, int start, int length, out bool testWasUnable)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1950930", Offset = "0x194EF30", VA = "0x181950930", Slot = "8")]
	public int IndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x1950200", Offset = "0x194E800", VA = "0x181950200")]
	private int IndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x19502C0", Offset = "0x194E8C0", VA = "0x1819502C0")]
	private int IndexOfOrdinal(string s, char target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1950330", Offset = "0x194E930", VA = "0x181950330")]
	private unsafe int IndexOfSortKey(string s, int start, int length, byte* sortkey, char target, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x19503E0", Offset = "0x194E9E0", VA = "0x1819503E0")]
	private unsafe int IndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x1951970", Offset = "0x194FF70", VA = "0x181951970", Slot = "9")]
	public int LastIndexOf(string s, string target, int start, int length, CompareOptions opt)
	{
		return default(int);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x19510F0", Offset = "0x194F6F0", VA = "0x1819510F0")]
	private int LastIndexOfOrdinal(string s, string target, int start, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x1951230", Offset = "0x194F830", VA = "0x181951230")]
	private unsafe int LastIndexOfSortKey(string s, int start, int orgStart, int length, byte* sortkey, int ti, bool noLv4, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x19512F0", Offset = "0x194F8F0", VA = "0x1819512F0")]
	private unsafe int LastIndexOf(string s, string target, int start, int length, byte* targetSortKey, ref Context ctx)
	{
		return default(int);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x1952910", Offset = "0x1950F10", VA = "0x181952910")]
	private unsafe bool MatchesForward(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x1952540", Offset = "0x1950B40", VA = "0x181952540")]
	private unsafe bool MatchesForwardCore(string s, ref int idx, int end, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x1952AF0", Offset = "0x19510F0", VA = "0x181952AF0")]
	private unsafe bool MatchesPrimitive(CompareOptions opt, byte* source, int si, ExtenderType ext, byte* target, int ti, bool noLv4)
	{
		return default(bool);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x1952350", Offset = "0x1950950", VA = "0x181952350")]
	private unsafe bool MatchesBackward(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ref Context ctx)
	{
		return default(bool);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x1951D60", Offset = "0x1950360", VA = "0x181951D60")]
	private unsafe bool MatchesBackwardCore(string s, ref int idx, int end, int orgStart, int ti, byte* sortkey, bool noLv4, ExtenderType ext, ref Mono.Globalization.Unicode.Contraction ct, ref Context ctx)
	{
		return default(bool);
	}
}
