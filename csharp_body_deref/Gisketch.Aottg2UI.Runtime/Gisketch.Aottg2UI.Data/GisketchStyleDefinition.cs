using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x2000055")]
public sealed class GisketchStyleDefinition
{
	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x10")]
	public string name;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x18")]
	public string background;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x20")]
	public string textColor;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x28")]
	public string fontFamily;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x30")]
	public int? fontWeight;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x38")]
	public float? fontSize;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x40")]
	public string fontStyle;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x48")]
	public string textAlignment;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x50")]
	public float? iconSize;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x58")]
	public float? padding;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x60")]
	public float? paddingX;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x68")]
	public float? paddingY;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x70")]
	public float? gap;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x78")]
	public GisketchLength width;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x80")]
	public GisketchLength height;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x88")]
	public float? aspectRatio;

	[Token(Token = "0x40001EA")]
	[FieldOffset(Offset = "0x90")]
	public string motion;

	[Token(Token = "0x40001EB")]
	[FieldOffset(Offset = "0x98")]
	public bool? textured;

	[Token(Token = "0x40001EC")]
	[FieldOffset(Offset = "0x9A")]
	public bool? worn;

	[Token(Token = "0x40001ED")]
	[FieldOffset(Offset = "0x9C")]
	public float? wornStainScale;

	[Token(Token = "0x40001EE")]
	[FieldOffset(Offset = "0xA4")]
	public float? relief;

	[Token(Token = "0x40001EF")]
	[FieldOffset(Offset = "0xAC")]
	public bool? reliefGradient;

	[Token(Token = "0x40001F0")]
	[FieldOffset(Offset = "0xB0")]
	public float? pressDepth;

	[Token(Token = "0x40001F1")]
	[FieldOffset(Offset = "0xB8")]
	public bool? shadow;

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x39F0660", Offset = "0x39F0660", VA = "0x39F0660")]
	public GisketchStyleDefinition()
	{
	}
}
