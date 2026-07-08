using System;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Serializable]
[Token(Token = "0x2000013")]
[ExcludeFromPreset]
public class TMP_ColorGradient : ScriptableObject
{
	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x18")]
	public ColorMode colorMode;

	[Token(Token = "0x400005E")]
	[FieldOffset(Offset = "0x1C")]
	public Color topLeft;

	[Token(Token = "0x400005F")]
	[FieldOffset(Offset = "0x2C")]
	public Color topRight;

	[Token(Token = "0x4000060")]
	[FieldOffset(Offset = "0x3C")]
	public Color bottomLeft;

	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x4C")]
	public Color bottomRight;

	[Token(Token = "0x4000062")]
	private const ColorMode k_DefaultColorMode = ColorMode.FourCornersGradient;

	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_DefaultColor;

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x48F7E40", Offset = "0x48F7E40", VA = "0x48F7E40")]
	public TMP_ColorGradient()
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x48F7EE0", Offset = "0x48F7EE0", VA = "0x48F7EE0")]
	public TMP_ColorGradient(Color color)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x48F7F30", Offset = "0x48F7F30", VA = "0x48F7F30")]
	public TMP_ColorGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
