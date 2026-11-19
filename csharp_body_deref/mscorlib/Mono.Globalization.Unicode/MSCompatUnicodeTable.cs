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

[Token(Token = "0x2000036")]
internal class MSCompatUnicodeTable
{
	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x0")]
	public static int MaxExpansionLength;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x8")]
	private unsafe static readonly byte* ignorableFlags;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x10")]
	private unsafe static readonly byte* categories;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x18")]
	private unsafe static readonly byte* level1;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x20")]
	private unsafe static readonly byte* level2;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x28")]
	private unsafe static readonly byte* level3;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x30")]
	private unsafe static byte* cjkCHScategory;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x38")]
	private unsafe static byte* cjkCHTcategory;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x40")]
	private unsafe static byte* cjkJAcategory;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x48")]
	private unsafe static byte* cjkKOcategory;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x50")]
	private unsafe static byte* cjkCHSlv1;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x58")]
	private unsafe static byte* cjkCHTlv1;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x60")]
	private unsafe static byte* cjkJAlv1;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x68")]
	private unsafe static byte* cjkKOlv1;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x70")]
	private unsafe static byte* cjkKOlv2;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x78")]
	private static readonly char[] tailoringArr;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x80")]
	private static readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x88")]
	private static object forLock;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x90")]
	public static readonly bool isReady;

	[Token(Token = "0x17000016")]
	public static bool IsReady
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x52DE250", Offset = "0x52DD250", VA = "0x52DE250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x52DCE20", Offset = "0x52DBE20", VA = "0x52DCE20")]
	public static Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(int lcid)
	{
		return null;
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x52DCF20", Offset = "0x52DBF20", VA = "0x52DCF20")]
	public static void BuildTailoringTables(CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
	{
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x52DD830", Offset = "0x52DC830", VA = "0x52DD830")]
	private unsafe static void SetCJKReferences(string name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x52DDAB0", Offset = "0x52DCAB0", VA = "0x52DDAB0")]
	public static byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x52DDB90", Offset = "0x52DCB90", VA = "0x52DDB90")]
	public static byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x52DDC70", Offset = "0x52DCC70", VA = "0x52DDC70")]
	public static byte Level2(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x52DDD50", Offset = "0x52DCD50", VA = "0x52DDD50")]
	public static byte Level3(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x52DDE30", Offset = "0x52DCE30", VA = "0x52DDE30")]
	public static bool IsIgnorable(int cp, byte flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x52DDF70", Offset = "0x52DCF70", VA = "0x52DDF70")]
	public static bool IsIgnorableNonSpacing(int cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x52DDFE0", Offset = "0x52DCFE0", VA = "0x52DDFE0")]
	public static int ToKanaTypeInsensitive(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x52DDFF0", Offset = "0x52DCFF0", VA = "0x52DDFF0")]
	public static int ToWidthCompat(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x52DE120", Offset = "0x52DD120", VA = "0x52DE120")]
	public static bool HasSpecialWeight(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x52DE170", Offset = "0x52DD170", VA = "0x52DE170")]
	public static bool IsHalfWidthKana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x52DE180", Offset = "0x52DD180", VA = "0x52DE180")]
	public static bool IsHiragana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x52DE190", Offset = "0x52DD190", VA = "0x52DE190")]
	public static bool IsJapaneseSmallLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x52DE2C0", Offset = "0x52DD2C0", VA = "0x52DE2C0")]
	private static IntPtr GetResource(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x52DE370", Offset = "0x52DD370", VA = "0x52DE370")]
	private unsafe static uint UInt32FromBytePtr(byte* raw, uint idx)
	{
		return default(uint);
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x52DE3B0", Offset = "0x52DD3B0", VA = "0x52DE3B0")]
	static MSCompatUnicodeTable()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x52DE850", Offset = "0x52DD850", VA = "0x52DE850")]
	public unsafe static void FillCJK(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x52DE9A0", Offset = "0x52DD9A0", VA = "0x52DE9A0")]
	private unsafe static void FillCJKCore(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref byte* lv2Table)
	{
	}
}
