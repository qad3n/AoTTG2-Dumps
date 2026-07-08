using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200003E")]
public struct GlyphPairKey
{
	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x0")]
	public uint firstGlyphIndex;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x4")]
	public uint secondGlyphIndex;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x8")]
	public uint key;

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x490B370", Offset = "0x490B370", VA = "0x490B370")]
	public GlyphPairKey(uint firstGlyphIndex, uint secondGlyphIndex)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x49016D0", Offset = "0x49016D0", VA = "0x49016D0")]
	internal GlyphPairKey(TMP_GlyphPairAdjustmentRecord record)
	{
	}
}
