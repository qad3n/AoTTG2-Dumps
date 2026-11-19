// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.JoinMode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200002D")]
public enum JoinMode : byte
{
	[Token(Token = "0x4000180")]
	Default,
	[Token(Token = "0x4000181")]
	CreateIfNotExists,
	[Token(Token = "0x4000182")]
	JoinOrRejoin,
	[Token(Token = "0x4000183")]
	RejoinOnly
}
