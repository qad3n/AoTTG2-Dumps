// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.BinHexDecoder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200000B")]
internal class BinHexDecoder : IncrementalReadDecoder
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x10")]
	private byte[] buffer;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x18")]
	private int curIndex;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x1C")]
	private int endIndex;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x20")]
	private bool hasHalfByteCached;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x21")]
	private byte cachedHalfByte;

	[Token(Token = "0x17000001")]
	internal override bool IsFull
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4678AC0", Offset = "0x4678AC0", VA = "0x4678AC0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4678AD0", Offset = "0x4678AD0", VA = "0x4678AD0", Slot = "5")]
	internal override int Decode(char[] chars, int startPos, int len)
	{
		return default(int);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4678E70", Offset = "0x4678E70", VA = "0x4678E70")]
	public static byte[] Decode(char[] chars, bool allowOddChars)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4678C50", Offset = "0x4678C50", VA = "0x4678C50")]
	private unsafe static void Decode(char* pChars, char* pCharsEndPos, byte* pBytes, byte* pBytesEndPos, ref bool hasHalfByteCached, ref byte cachedHalfByte, out int charsDecoded, out int bytesDecoded)
	{
	}
}
