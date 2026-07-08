using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000019")]
public class SpriteGlyph : Glyph
{
	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x48")]
	public Sprite sprite;

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4B909D0", Offset = "0x4B909D0", VA = "0x4B909D0")]
	public SpriteGlyph()
	{
	}
}
