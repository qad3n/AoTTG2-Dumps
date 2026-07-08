using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000036")]
public enum LobbyType : byte
{
	[Token(Token = "0x40001B9")]
	Default = 0,
	[Token(Token = "0x40001BA")]
	SqlLobby = 2,
	[Token(Token = "0x40001BB")]
	AsyncRandomLobby = 3
}
