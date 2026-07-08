using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000C")]
internal enum JoinType
{
	[Token(Token = "0x4000062")]
	CreateRoom,
	[Token(Token = "0x4000063")]
	JoinRoom,
	[Token(Token = "0x4000064")]
	JoinRandomRoom,
	[Token(Token = "0x4000065")]
	JoinRandomOrCreateRoom,
	[Token(Token = "0x4000066")]
	JoinOrCreateRoom
}
