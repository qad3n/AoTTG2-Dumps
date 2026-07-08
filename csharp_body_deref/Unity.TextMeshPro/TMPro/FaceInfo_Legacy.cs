using System;
using Il2CppDummyDll;

namespace TMPro;

[Serializable]
[Token(Token = "0x200002A")]
public class FaceInfo_Legacy
{
	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x18")]
	public float PointSize;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x1C")]
	public float Scale;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x20")]
	public int CharacterCount;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x24")]
	public float LineHeight;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x28")]
	public float Baseline;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x2C")]
	public float Ascender;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x30")]
	public float CapHeight;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x34")]
	public float Descender;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x38")]
	public float CenterLine;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x3C")]
	public float SuperscriptOffset;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x40")]
	public float SubscriptOffset;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x44")]
	public float SubSize;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x48")]
	public float Underline;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x4C")]
	public float UnderlineThickness;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x50")]
	public float strikethrough;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x54")]
	public float strikethroughThickness;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x58")]
	public float TabWidth;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x5C")]
	public float Padding;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x60")]
	public float AtlasWidth;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x64")]
	public float AtlasHeight;

	[Token(Token = "0x6000147")]
	[Address(RVA = "0x4908D90", Offset = "0x4908D90", VA = "0x4908D90")]
	public FaceInfo_Legacy()
	{
	}
}
