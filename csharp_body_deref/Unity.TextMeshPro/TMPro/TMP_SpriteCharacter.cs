// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteCharacter
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003D3")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x2D42860", Offset = "0x2D40E60", VA = "0x182D42860")]
	public TMP_SpriteCharacter()
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x2D427F0", Offset = "0x2D40DF0", VA = "0x182D427F0")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x2D42880", Offset = "0x2D40E80", VA = "0x182D42880")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteAsset spriteAsset, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x2D42790", Offset = "0x2D40D90", VA = "0x182D42790")]
	internal TMP_SpriteCharacter(uint unicode, uint glyphIndex)
	{
	}
}
