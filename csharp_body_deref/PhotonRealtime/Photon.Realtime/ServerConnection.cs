using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000E")]
public enum ServerConnection
{
	[Token(Token = "0x400007E")]
	MasterServer,
	[Token(Token = "0x400007F")]
	GameServer,
	[Token(Token = "0x4000080")]
	NameServer
}
