using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000097")]
public struct VertexGradient
{
	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x0")]
	public Color topLeft;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x10")]
	public Color topRight;

	[Token(Token = "0x400053D")]
	[FieldOffset(Offset = "0x20")]
	public Color bottomLeft;

	[Token(Token = "0x400053E")]
	[FieldOffset(Offset = "0x30")]
	public Color bottomRight;

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x4967160", Offset = "0x4967160", VA = "0x4967160")]
	public VertexGradient(Color color)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x4967180", Offset = "0x4967180", VA = "0x4967180")]
	public VertexGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
