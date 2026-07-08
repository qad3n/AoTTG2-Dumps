using System;
using Il2CppDummyDll;
using UnityEngine.TextCore;

namespace TMPro;

[Serializable]
[Token(Token = "0x200000D")]
public class TMP_Character : TMP_TextElement
{
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x48F7560", Offset = "0x48F7560", VA = "0x48F7560")]
	public TMP_Character()
	{
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x48F7580", Offset = "0x48F7580", VA = "0x48F7580")]
	public TMP_Character(uint unicode, Glyph glyph)
	{
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x48F75E0", Offset = "0x48F75E0", VA = "0x48F75E0")]
	public TMP_Character(uint unicode, TMP_FontAsset fontAsset, Glyph glyph)
	{
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x48F7650", Offset = "0x48F7650", VA = "0x48F7650")]
	internal TMP_Character(uint unicode, uint glyphIndex)
	{
	}
}
