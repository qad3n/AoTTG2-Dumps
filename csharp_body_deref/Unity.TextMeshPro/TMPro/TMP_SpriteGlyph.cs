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
[Token(Token = "0x2000077")]
public class TMP_SpriteGlyph : Glyph
{
	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x48")]
	public Sprite sprite;

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x673CAE0", Offset = "0x673BAE0", VA = "0x673CAE0")]
	public TMP_SpriteGlyph()
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x673CDD0", Offset = "0x673BDD0", VA = "0x673CDD0")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x673CE60", Offset = "0x673BE60", VA = "0x673CE60")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex, Sprite sprite)
	{
	}
}
