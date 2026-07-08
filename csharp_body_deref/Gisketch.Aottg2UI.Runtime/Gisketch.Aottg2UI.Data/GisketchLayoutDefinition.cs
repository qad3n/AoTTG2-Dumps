using System;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Data;

[Serializable]
[Token(Token = "0x200004E")]
public sealed class GisketchLayoutDefinition
{
	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x10")]
	public string direction;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x18")]
	public string justify;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x20")]
	public string alignItems;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x28")]
	public string alignSelf;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x30")]
	public string wrap;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x38")]
	public GisketchLength width;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x40")]
	public GisketchLength height;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x48")]
	public GisketchLength minWidth;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x50")]
	public GisketchLength minHeight;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x58")]
	public GisketchLength maxWidth;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x60")]
	public GisketchLength maxHeight;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x68")]
	public float grow;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x6C")]
	public float shrink;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x70")]
	public float gap;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x74")]
	public float gapRow;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x78")]
	public float gapColumn;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x7C")]
	public float padding;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x80")]
	public float paddingX;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x84")]
	public float paddingY;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x88")]
	public float paddingLeft;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x8C")]
	public float paddingRight;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x90")]
	public float paddingTop;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x94")]
	public float paddingBottom;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x98")]
	public float offsetX;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x9C")]
	public float offsetY;

	[Token(Token = "0x600024C")]
	[Address(RVA = "0x39E9FC0", Offset = "0x39E9FC0", VA = "0x39E9FC0")]
	public GisketchLayoutDefinition()
	{
	}
}
