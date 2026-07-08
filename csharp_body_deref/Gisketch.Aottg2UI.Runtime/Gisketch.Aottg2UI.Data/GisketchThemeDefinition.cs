using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000052")]
public sealed class GisketchThemeDefinition
{
	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x18")]
	public string mode;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	public GisketchColorToken[] colors;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x28")]
	public GisketchThemePalette[] palettes;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x30")]
	public GisketchStyleDefinition[] styles;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x38")]
	public GisketchMotionToken[] motions;

	[Token(Token = "0x6000250")]
	[Address(RVA = "0x39F0580", Offset = "0x39F0580", VA = "0x39F0580")]
	public static GisketchThemeDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x6000251")]
	[Address(RVA = "0x39F0630", Offset = "0x39F0630", VA = "0x39F0630")]
	public GisketchThemeDefinition()
	{
	}
}
