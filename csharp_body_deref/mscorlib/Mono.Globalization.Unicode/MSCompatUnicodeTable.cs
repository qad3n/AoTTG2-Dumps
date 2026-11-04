// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.MSCompatUnicodeTable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Globalization;
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x2000054")]
internal class MSCompatUnicodeTable
{
	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxExpansionLength;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x8")]
	private unsafe static readonly byte* ignorableFlags;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x10")]
	private unsafe static readonly byte* categories;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x18")]
	private unsafe static readonly byte* level1;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x20")]
	private unsafe static readonly byte* level2;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x28")]
	private unsafe static readonly byte* level3;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x30")]
	private unsafe static byte* cjkCHScategory;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x38")]
	private unsafe static byte* cjkCHTcategory;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x40")]
	private unsafe static byte* cjkJAcategory;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x48")]
	private unsafe static byte* cjkKOcategory;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x50")]
	private unsafe static byte* cjkCHSlv1;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x58")]
	private unsafe static byte* cjkCHTlv1;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x60")]
	private unsafe static byte* cjkJAlv1;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x68")]
	private unsafe static byte* cjkKOlv1;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x70")]
	private unsafe static byte* cjkKOlv2;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x78")]
	private static readonly char[] tailoringArr;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x80")]
	private static readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x88")]
	private static object forLock;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x90")]
	public static readonly bool isReady;

	[Token(Token = "0x17000016")]
	public static bool IsReady
	{
		[Token(Token = "0x60000D2")]
		[Address(RVA = "0x194B930", Offset = "0x1949F30", VA = "0x18194B930")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x194A7F0", Offset = "0x1948DF0", VA = "0x18194A7F0")]
	public static Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(int lcid)
	{
		return null;
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x19498B0", Offset = "0x1947EB0", VA = "0x1819498B0")]
	public static void BuildTailoringTables(CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x194AEA0", Offset = "0x19494A0", VA = "0x18194AEA0")]
	private unsafe static void SetCJKReferences(string name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x1949FB0", Offset = "0x19485B0", VA = "0x181949FB0")]
	public static byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x194AC90", Offset = "0x1949290", VA = "0x18194AC90")]
	public static byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x194AD40", Offset = "0x1949340", VA = "0x18194AD40")]
	public static byte Level2(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x194ADF0", Offset = "0x19493F0", VA = "0x18194ADF0")]
	public static byte Level3(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x194AA00", Offset = "0x1949000", VA = "0x18194AA00")]
	public static bool IsIgnorable(int cp, byte flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x194A9B0", Offset = "0x1948FB0", VA = "0x18194A9B0")]
	public static bool IsIgnorableNonSpacing(int cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x194B170", Offset = "0x1949770", VA = "0x18194B170")]
	public static int ToKanaTypeInsensitive(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x194B190", Offset = "0x1949790", VA = "0x18194B190")]
	public static int ToWidthCompat(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x194A900", Offset = "0x1948F00", VA = "0x18194A900")]
	public static bool HasSpecialWeight(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x194A970", Offset = "0x1948F70", VA = "0x18194A970")]
	public static bool IsHalfWidthKana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x194A990", Offset = "0x1948F90", VA = "0x18194A990")]
	public static bool IsHiragana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x194AB20", Offset = "0x1949120", VA = "0x18194AB20")]
	public static bool IsJapaneseSmallLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x194A730", Offset = "0x1948D30", VA = "0x18194A730")]
	private static IntPtr GetResource(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x194B310", Offset = "0x1949910", VA = "0x18194B310")]
	private unsafe static uint UInt32FromBytePtr(byte* raw, uint idx)
	{
		return default(uint);
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x194B350", Offset = "0x1949950", VA = "0x18194B350")]
	static MSCompatUnicodeTable()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x194A5D0", Offset = "0x1948BD0", VA = "0x18194A5D0")]
	public unsafe static void FillCJK(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x194A060", Offset = "0x1948660", VA = "0x18194A060")]
	private unsafe static void FillCJKCore(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref byte* lv2Table)
	{
	}
}
