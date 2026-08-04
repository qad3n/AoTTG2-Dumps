// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RoomOptionBit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
