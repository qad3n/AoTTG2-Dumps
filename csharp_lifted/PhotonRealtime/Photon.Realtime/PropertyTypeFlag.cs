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

[Token(Token = "0x2000031")]
[Flags]
public enum PropertyTypeFlag : byte
{
	[Token(Token = "0x400019A")]
	None = 0,
	[Token(Token = "0x400019B")]
	Game = 1,
	[Token(Token = "0x400019C")]
	Actor = 2,
	[Token(Token = "0x400019D")]
	GameAndActor = Game | Actor
}
