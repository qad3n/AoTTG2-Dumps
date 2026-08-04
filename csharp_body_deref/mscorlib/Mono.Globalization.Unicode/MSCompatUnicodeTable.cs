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
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x3AD2D60", Offset = "0x3AD2D60", VA = "0x3AD2D60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x3AD1940", Offset = "0x3AD1940", VA = "0x3AD1940")]
	public static Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(int lcid)
	{
		return null;
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x3AD1A40", Offset = "0x3AD1A40", VA = "0x3AD1A40")]
	public static void BuildTailoringTables(CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x3AD2340", Offset = "0x3AD2340", VA = "0x3AD2340")]
	private unsafe static void SetCJKReferences(string name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x3AD25A0", Offset = "0x3AD25A0", VA = "0x3AD25A0")]
	public static byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x3AD2680", Offset = "0x3AD2680", VA = "0x3AD2680")]
	public static byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x3AD2760", Offset = "0x3AD2760", VA = "0x3AD2760")]
	public static byte Level2(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x3AD2840", Offset = "0x3AD2840", VA = "0x3AD2840")]
	public static byte Level3(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x3AD2920", Offset = "0x3AD2920", VA = "0x3AD2920")]
	public static bool IsIgnorable(int cp, byte flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x3AD2A60", Offset = "0x3AD2A60", VA = "0x3AD2A60")]
	public static bool IsIgnorableNonSpacing(int cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x3AD2AD0", Offset = "0x3AD2AD0", VA = "0x3AD2AD0")]
	public static int ToKanaTypeInsensitive(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x3AD2AF0", Offset = "0x3AD2AF0", VA = "0x3AD2AF0")]
	public static int ToWidthCompat(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3AD2C20", Offset = "0x3AD2C20", VA = "0x3AD2C20")]
	public static bool HasSpecialWeight(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3AD2C80", Offset = "0x3AD2C80", VA = "0x3AD2C80")]
	public static bool IsHalfWidthKana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3AD2C90", Offset = "0x3AD2C90", VA = "0x3AD2C90")]
	public static bool IsHiragana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3AD2CA0", Offset = "0x3AD2CA0", VA = "0x3AD2CA0")]
	public static bool IsJapaneseSmallLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3AD2DD0", Offset = "0x3AD2DD0", VA = "0x3AD2DD0")]
	private static IntPtr GetResource(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3AD2E80", Offset = "0x3AD2E80", VA = "0x3AD2E80")]
	private unsafe static uint UInt32FromBytePtr(byte* raw, uint idx)
	{
		return default(uint);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3AD2EC0", Offset = "0x3AD2EC0", VA = "0x3AD2EC0")]
	static MSCompatUnicodeTable()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3AD3410", Offset = "0x3AD3410", VA = "0x3AD3410")]
	public unsafe static void FillCJK(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3AD3570", Offset = "0x3AD3570", VA = "0x3AD3570")]
	private unsafe static void FillCJKCore(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref byte* lv2Table)
	{
	}
}
