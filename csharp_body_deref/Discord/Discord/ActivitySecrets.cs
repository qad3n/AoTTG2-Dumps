using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003F")]
public struct ActivitySecrets
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	public string Match;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	public string Join;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x10")]
	public string Spectate;
}
