using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000048")]
public struct SkuPrice
{
	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x0")]
	public uint Amount;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x8")]
	public string Currency;
}
