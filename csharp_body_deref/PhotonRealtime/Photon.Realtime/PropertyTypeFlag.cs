// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.PropertyTypeFlag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000033")]
[Flags]
public enum PropertyTypeFlag : byte
{
	[Token(Token = "0x400019F")]
	None = 0,
	[Token(Token = "0x40001A0")]
	Game = 1,
	[Token(Token = "0x40001A1")]
	Actor = 2,
	[Token(Token = "0x40001A2")]
	GameAndActor = 3
}
