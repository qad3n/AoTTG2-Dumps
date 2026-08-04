// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteGlyph
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000082")]
public class TMP_SpriteGlyph : Glyph
{
	[Token(Token = "0x4000435")]
	[FieldOffset(Offset = "0x48")]
	public Sprite sprite;

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x4C90450", Offset = "0x4C90450", VA = "0x4C90450")]
	public TMP_SpriteGlyph()
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x4C90860", Offset = "0x4C90860", VA = "0x4C90860")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}

	[Token(Token = "0x600043B")]
	[Address(RVA = "0x4C908F0", Offset = "0x4C908F0", VA = "0x4C908F0")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex, Sprite sprite)
	{
	}
}
