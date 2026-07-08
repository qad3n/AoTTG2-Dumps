using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000028")]
public enum PeerStateValue : byte
{
	[Token(Token = "0x4000122")]
	Disconnected = 0,
	[Token(Token = "0x4000123")]
	Connecting = 1,
	[Token(Token = "0x4000124")]
	InitializingApplication = 10,
	[Token(Token = "0x4000125")]
	Connected = 3,
	[Token(Token = "0x4000126")]
	Disconnecting = 4
}
