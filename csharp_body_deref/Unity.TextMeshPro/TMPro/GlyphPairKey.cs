// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.GlyphPairKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000048")]
public struct GlyphPairKey
{
	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x0")]
	public uint firstGlyphIndex;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x4")]
	public uint secondGlyphIndex;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x8")]
	public uint key;

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x2CF4510", Offset = "0x2CF2B10", VA = "0x182CF4510")]
	public GlyphPairKey(uint firstGlyphIndex, uint secondGlyphIndex)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x2CF4530", Offset = "0x2CF2B30", VA = "0x182CF4530")]
	internal GlyphPairKey(TMP_GlyphPairAdjustmentRecord record)
	{
	}
}
