using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x200006B")]
public class TMP_SpriteCharacter : TMP_TextElement
{
	[Token(Token = "0x400033F")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000340")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x170000C6")]
	public string name
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x4943140", Offset = "0x4943140", VA = "0x4943140")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x4942F00", Offset = "0x4942F00", VA = "0x4942F00")]
		set
		{
		}
	}

	[Token(Token = "0x170000C7")]
	public int hashCode
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x49431B0", Offset = "0x49431B0", VA = "0x49431B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4942EE0", Offset = "0x4942EE0", VA = "0x4942EE0")]
	public TMP_SpriteCharacter()
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x49431D0", Offset = "0x49431D0", VA = "0x49431D0")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4943220", Offset = "0x4943220", VA = "0x4943220")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteAsset spriteAsset, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4943290", Offset = "0x4943290", VA = "0x4943290")]
	internal TMP_SpriteCharacter(uint unicode, uint glyphIndex)
	{
	}
}
