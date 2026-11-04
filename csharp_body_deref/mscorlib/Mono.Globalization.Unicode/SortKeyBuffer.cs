// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Globalization.Unicode.SortKeyBuffer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using Il2CppDummyDll;

namespace Mono.Globalization.Unicode;

[Token(Token = "0x200005D")]
internal class SortKeyBuffer
{
	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x10")]
	private byte[] l1b;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x18")]
	private byte[] l2b;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x20")]
	private byte[] l3b;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x28")]
	private byte[] l4sb;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x30")]
	private byte[] l4tb;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x38")]
	private byte[] l4kb;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x40")]
	private byte[] l4wb;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x48")]
	private byte[] l5b;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x50")]
	private string source;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x58")]
	private int l1;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x5C")]
	private int l2;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x60")]
	private int l3;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x64")]
	private int l4s;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x68")]
	private int l4t;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x6C")]
	private int l4k;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x70")]
	private int l4w;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x74")]
	private int l5;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x78")]
	private int lcid;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x7C")]
	private CompareOptions options;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x80")]
	private bool processLevel2;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x81")]
	private bool frenchSort;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x82")]
	private bool frenchSorted;

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SortKeyBuffer(int lcid)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x1956A50", Offset = "0x1955050", VA = "0x181956A50")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x1956870", Offset = "0x1954E70", VA = "0x181956870")]
	internal void Initialize(CompareOptions options, int lcid, string s, bool frenchSort)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x1955D40", Offset = "0x1954340", VA = "0x181955D40")]
	internal void AppendCJKExtension(byte lv1msb, byte lv1lsb)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1955E00", Offset = "0x1954400", VA = "0x181955E00")]
	internal void AppendKana(byte category, byte lv1, byte lv2, byte lv3, bool isSmallKana, byte markType, bool isKatakana, bool isHalfWidth)
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1955F90", Offset = "0x1954590", VA = "0x181955F90")]
	internal void AppendNormal(byte category, byte lv1, byte lv2, byte lv3)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x1955ED0", Offset = "0x19544D0", VA = "0x181955ED0")]
	private void AppendLevel5(byte category, byte lv1)
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x1955C80", Offset = "0x1954280", VA = "0x181955C80")]
	private void AppendBufferPrimitive(byte value, ref byte[] buf, ref int bidx)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x19561C0", Offset = "0x19547C0", VA = "0x1819561C0")]
	public SortKey GetResultAndReset()
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x1956160", Offset = "0x1954760", VA = "0x181956160")]
	private int GetOptimizedLength(byte[] data, int len, byte defaultValue)
	{
		return default(int);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x19561F0", Offset = "0x19547F0", VA = "0x1819561F0")]
	public SortKey GetResult()
	{
		return null;
	}
}
