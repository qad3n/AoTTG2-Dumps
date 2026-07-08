using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000002")]
public class Character : TextElement
{
	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4B7EFF0", Offset = "0x4B7EFF0", VA = "0x4B7EFF0")]
	public Character()
	{
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4B7F030", Offset = "0x4B7F030", VA = "0x4B7F030")]
	public Character(uint unicode, FontAsset fontAsset, Glyph glyph)
	{
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B7F0E0", Offset = "0x4B7F0E0", VA = "0x4B7F0E0")]
	internal Character(uint unicode, uint glyphIndex)
	{
	}
}
