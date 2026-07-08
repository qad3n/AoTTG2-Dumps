using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200003C")]
public enum DeliveryMode
{
	[Token(Token = "0x40001E9")]
	Unreliable,
	[Token(Token = "0x40001EA")]
	Reliable,
	[Token(Token = "0x40001EB")]
	UnreliableUnsequenced,
	[Token(Token = "0x40001EC")]
	ReliableUnsequenced
}
