using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000066")]
public class TMP_Sprite : TMP_TextElement_Legacy
{
	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x38")]
	public string name;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x40")]
	public int hashCode;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x44")]
	public int unicode;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x48")]
	public Vector2 pivot;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x50")]
	public Sprite sprite;

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4940020", Offset = "0x4940020", VA = "0x4940020")]
	public TMP_Sprite()
	{
	}
}
