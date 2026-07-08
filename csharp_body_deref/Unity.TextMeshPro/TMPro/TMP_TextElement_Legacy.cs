using System;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000086")]
public class TMP_TextElement_Legacy
{
	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x10")]
	public int id;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x14")]
	public float x;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x18")]
	public float y;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x1C")]
	public float width;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x20")]
	public float height;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x24")]
	public float xOffset;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x28")]
	public float yOffset;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x2C")]
	public float xAdvance;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x30")]
	public float scale;

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x4940030", Offset = "0x4940030", VA = "0x4940030")]
	public TMP_TextElement_Legacy()
	{
	}
}
