// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.GlyphPairKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000052")]
public struct GlyphPairKey
{
	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x0")]
	public uint firstGlyphIndex;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x4")]
	public uint secondGlyphIndex;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x8")]
	public uint key;

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x4C58830", Offset = "0x4C58830", VA = "0x4C58830")]
	public GlyphPairKey(uint firstGlyphIndex, uint secondGlyphIndex)
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x4C4EC50", Offset = "0x4C4EC50", VA = "0x4C4EC50")]
	internal GlyphPairKey(TMP_GlyphPairAdjustmentRecord record)
	{
	}
}
