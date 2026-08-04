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
[Token(Token = "0x2000081")]
public class TMP_SpriteCharacter : TMP_TextElement
{
	[Token(Token = "0x4000433")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Name;

	[Token(Token = "0x4000434")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	private int m_HashCode;

	[Token(Token = "0x170000E7")]
	public string name
	{
		[Token(Token = "0x6000432")]
		[Address(RVA = "0x4C906C0", Offset = "0x4C906C0", VA = "0x4C906C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000433")]
		[Address(RVA = "0x4C90480", Offset = "0x4C90480", VA = "0x4C90480")]
		set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public int hashCode
	{
		[Token(Token = "0x6000434")]
		[Address(RVA = "0x4C90730", Offset = "0x4C90730", VA = "0x4C90730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x4C90460", Offset = "0x4C90460", VA = "0x4C90460")]
	public TMP_SpriteCharacter()
	{
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4C90750", Offset = "0x4C90750", VA = "0x4C90750")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x4C907A0", Offset = "0x4C907A0", VA = "0x4C907A0")]
	public TMP_SpriteCharacter(uint unicode, TMP_SpriteAsset spriteAsset, TMP_SpriteGlyph glyph)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x4C90810", Offset = "0x4C90810", VA = "0x4C90810")]
	internal TMP_SpriteCharacter(uint unicode, uint glyphIndex)
	{
	}
}
