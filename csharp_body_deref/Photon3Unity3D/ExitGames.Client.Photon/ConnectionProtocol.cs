using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x2000029")]
public enum ConnectionProtocol : byte
{
	[Token(Token = "0x4000128")]
	Udp = 0,
	[Token(Token = "0x4000129")]
	Tcp = 1,
	[Token(Token = "0x400012A")]
	WebSocket = 4,
	[Token(Token = "0x400012B")]
	WebSocketSecure = 5
}
