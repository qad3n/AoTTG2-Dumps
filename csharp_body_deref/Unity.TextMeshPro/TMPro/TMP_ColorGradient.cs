// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_ColorGradient
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
[Token(Token = "0x200001A")]
[TMPro.TMPHelpURL("ColorGradients")]
[ExcludeFromPreset]
public class TMP_ColorGradient : ScriptableObject
{
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x18")]
	public ColorMode colorMode;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x1C")]
	public Color topLeft;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x2C")]
	public Color topRight;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x3C")]
	public Color bottomLeft;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x4C")]
	public Color bottomRight;

	[Token(Token = "0x4000073")]
	private const ColorMode k_DefaultColorMode = ColorMode.FourCornersGradient;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_DefaultColor;

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2CDFDC0", Offset = "0x2CDE3C0", VA = "0x182CDFDC0")]
	public TMP_ColorGradient()
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2CDFE70", Offset = "0x2CDE470", VA = "0x182CDFE70")]
	public TMP_ColorGradient(Color color)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2CDFEC0", Offset = "0x2CDE4C0", VA = "0x182CDFEC0")]
	public TMP_ColorGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
