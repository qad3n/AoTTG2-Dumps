using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000010")]
public enum PhotonSocketState
{
	[Token(Token = "0x4000063")]
	Disconnected,
	[Token(Token = "0x4000064")]
	Connecting,
	[Token(Token = "0x4000065")]
	Connected,
	[Token(Token = "0x4000066")]
	Disconnecting
}
