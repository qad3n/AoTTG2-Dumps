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
		[Address(RVA = "0x4DED240", Offset = "0x4DED240", VA = "0x4DED240")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x4DEBE20", Offset = "0x4DEBE20", VA = "0x4DEBE20")]
	public static Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(int lcid)
	{
		return null;
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x4DEBF20", Offset = "0x4DEBF20", VA = "0x4DEBF20")]
	public static void BuildTailoringTables(CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x4DEC820", Offset = "0x4DEC820", VA = "0x4DEC820")]
	private unsafe static void SetCJKReferences(string name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x4DECA80", Offset = "0x4DECA80", VA = "0x4DECA80")]
	public static byte Category(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x4DECB60", Offset = "0x4DECB60", VA = "0x4DECB60")]
	public static byte Level1(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x4DECC40", Offset = "0x4DECC40", VA = "0x4DECC40")]
	public static byte Level2(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x4DECD20", Offset = "0x4DECD20", VA = "0x4DECD20")]
	public static byte Level3(int cp)
	{
		return default(byte);
	}

	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x4DECE00", Offset = "0x4DECE00", VA = "0x4DECE00")]
	public static bool IsIgnorable(int cp, byte flag)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x4DECF40", Offset = "0x4DECF40", VA = "0x4DECF40")]
	public static bool IsIgnorableNonSpacing(int cp)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x4DECFB0", Offset = "0x4DECFB0", VA = "0x4DECFB0")]
	public static int ToKanaTypeInsensitive(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x4DECFD0", Offset = "0x4DECFD0", VA = "0x4DECFD0")]
	public static int ToWidthCompat(int i)
	{
		return default(int);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x4DED100", Offset = "0x4DED100", VA = "0x4DED100")]
	public static bool HasSpecialWeight(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x4DED160", Offset = "0x4DED160", VA = "0x4DED160")]
	public static bool IsHalfWidthKana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x4DED170", Offset = "0x4DED170", VA = "0x4DED170")]
	public static bool IsHiragana(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x4DED180", Offset = "0x4DED180", VA = "0x4DED180")]
	public static bool IsJapaneseSmallLetter(char c)
	{
		return default(bool);
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x4DED2B0", Offset = "0x4DED2B0", VA = "0x4DED2B0")]
	private static IntPtr GetResource(string name)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x4DED360", Offset = "0x4DED360", VA = "0x4DED360")]
	private unsafe static uint UInt32FromBytePtr(byte* raw, uint idx)
	{
		return default(uint);
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4DED3A0", Offset = "0x4DED3A0", VA = "0x4DED3A0")]
	static MSCompatUnicodeTable()
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x4DED8F0", Offset = "0x4DED8F0", VA = "0x4DED8F0")]
	public unsafe static void FillCJK(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref byte* lv2Table)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x4DEDA50", Offset = "0x4DEDA50", VA = "0x4DEDA50")]
	private unsafe static void FillCJKCore(string culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref byte* catTable, ref byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref byte* lv2Table)
	{
	}
}
