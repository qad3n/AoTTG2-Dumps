using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000025")]
internal enum RoomOptionBit
{
	[Token(Token = "0x40000D4")]
	CheckUserOnJoin = 1,
	[Token(Token = "0x40000D5")]
	DeleteCacheOnLeave = 2,
	[Token(Token = "0x40000D6")]
	SuppressRoomEvents = 4,
	[Token(Token = "0x40000D7")]
	PublishUserId = 8,
	[Token(Token = "0x40000D8")]
	DeleteNullProps = 0x10,
	[Token(Token = "0x40000D9")]
	BroadcastPropsChangeToAll = 0x20,
	[Token(Token = "0x40000DA")]
	SuppressPlayerInfo = 0x40
}
