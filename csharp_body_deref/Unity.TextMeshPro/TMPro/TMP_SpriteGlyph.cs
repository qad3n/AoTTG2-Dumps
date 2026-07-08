using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x200006C")]
public class TMP_SpriteGlyph : Glyph
{
	[Token(Token = "0x4000341")]
	[FieldOffset(Offset = "0x48")]
	public Sprite sprite;

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4942ED0", Offset = "0x4942ED0", VA = "0x4942ED0")]
	public TMP_SpriteGlyph()
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x49432E0", Offset = "0x49432E0", VA = "0x49432E0")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex)
	{
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4943370", Offset = "0x4943370", VA = "0x4943370")]
	public TMP_SpriteGlyph(uint index, GlyphMetrics metrics, GlyphRect glyphRect, float scale, int atlasIndex, Sprite sprite)
	{
	}
}
