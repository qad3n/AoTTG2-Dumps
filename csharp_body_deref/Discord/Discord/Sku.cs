using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000049")]
public struct Sku
{
	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x0")]
	public long Id;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x8")]
	public SkuType Type;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x18")]
	public SkuPrice Price;
}
