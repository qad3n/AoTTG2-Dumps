// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.JoinType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadBalancingClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200000A")]
internal enum JoinType
{
	[Token(Token = "0x400005D")]
	CreateRoom,
	[Token(Token = "0x400005E")]
	JoinRoom,
	[Token(Token = "0x400005F")]
	JoinRandomRoom,
	[Token(Token = "0x4000060")]
	JoinRandomOrCreateRoom,
	[Token(Token = "0x4000061")]
	JoinOrCreateRoom
}
