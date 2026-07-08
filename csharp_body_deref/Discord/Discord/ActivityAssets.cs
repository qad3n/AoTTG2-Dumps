using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003C")]
public struct ActivityAssets
{
	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x0")]
	public string LargeImage;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x8")]
	public string LargeText;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x10")]
	public string SmallImage;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x18")]
	public string SmallText;
}
