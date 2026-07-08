using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000037")]
public struct User
{
	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x0")]
	public long Id;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x8")]
	public string Username;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x10")]
	public string Discriminator;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x18")]
	public string Avatar;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x20")]
	public bool Bot;
}
