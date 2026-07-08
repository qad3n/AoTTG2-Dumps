using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001F")]
public enum ConnectionStateValue : byte
{
	[Token(Token = "0x40000D4")]
	Disconnected = 0,
	[Token(Token = "0x40000D5")]
	Connecting = 1,
	[Token(Token = "0x40000D6")]
	Connected = 3,
	[Token(Token = "0x40000D7")]
	Disconnecting = 4,
	[Token(Token = "0x40000D8")]
	AcknowledgingDisconnect = 5,
	[Token(Token = "0x40000D9")]
	Zombie = 6
}
