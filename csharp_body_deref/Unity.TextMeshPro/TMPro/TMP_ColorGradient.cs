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
[Token(Token = "0x2000029")]
[ExcludeFromPreset]
public class TMP_ColorGradient : ScriptableObject
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x18")]
	public ColorMode colorMode;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x1C")]
	public Color topLeft;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x2C")]
	public Color topRight;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x3C")]
	public Color bottomLeft;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x4C")]
	public Color bottomRight;

	[Token(Token = "0x4000156")]
	private const ColorMode k_DefaultColorMode = ColorMode.FourCornersGradient;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_DefaultColor;

	[Token(Token = "0x6000143")]
	[Address(RVA = "0x4C453C0", Offset = "0x4C453C0", VA = "0x4C453C0")]
	public TMP_ColorGradient()
	{
	}

	[Token(Token = "0x6000144")]
	[Address(RVA = "0x4C45460", Offset = "0x4C45460", VA = "0x4C45460")]
	public TMP_ColorGradient(Color color)
	{
	}

	[Token(Token = "0x6000145")]
	[Address(RVA = "0x4C454B0", Offset = "0x4C454B0", VA = "0x4C454B0")]
	public TMP_ColorGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
