using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x200001C")]
[ExcludeFromObjectFactory]
[ExcludeFromPreset]
public class TextColorGradient : ScriptableObject
{
	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x18")]
	public ColorGradientMode colorMode;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x1C")]
	public Color topLeft;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x2C")]
	public Color topRight;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x3C")]
	public Color bottomLeft;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x4C")]
	public Color bottomRight;

	[Token(Token = "0x40000D7")]
	private const ColorGradientMode k_DefaultColorMode = ColorGradientMode.FourCornersGradient;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color k_DefaultColor;

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x4B90A40", Offset = "0x4B90A40", VA = "0x4B90A40")]
	public TextColorGradient()
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x4B90AE0", Offset = "0x4B90AE0", VA = "0x4B90AE0")]
	public TextColorGradient(Color color)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x4B90B30", Offset = "0x4B90B30", VA = "0x4B90B30")]
	public TextColorGradient(Color color0, Color color1, Color color2, Color color3)
	{
	}
}
