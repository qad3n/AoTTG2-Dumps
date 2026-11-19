// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteCharacter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000076")]
public class TMP_SpriteCharacter : TMP_TextElement
{
	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x170000E9")]
	public string name
	{
		[Token(Token = "0x60003D2")]
		[Address(RVA = "0x673CC90", Offset = "0x673BC90", VA = "0x673CC90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x673CCA0", Offset = "0x673BCA0", VA = "0x673CCA0")]
		set
		{
		}
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x673CAF0", Offset = "0x673BAF0", VA = "0x673CAF0")]
	public TMP_SpriteCharacter()
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x673CCC0", Offset = "0x673BCC0", VA = "0x673CCC0")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x673CD10", Offset = "0x673BD10", VA = "0x673CD10")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteAsset spriteAsset, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x673CD80", Offset = "0x673BD80", VA = "0x673CD80")]
	internal TMP_SpriteCharacter(uint unicode, uint glyphIndex)
	{
	}
}
