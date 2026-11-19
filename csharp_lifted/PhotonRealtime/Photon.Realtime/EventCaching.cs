// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.EventCaching
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000030")]
public enum EventCaching : byte
{
	[Token(Token = "0x400018D")]
	DoNotCache = 0,
	[Token(Token = "0x400018E")]
	[Obsolete]
	MergeCache = 1,
	[Token(Token = "0x400018F")]
	[Obsolete]
	ReplaceCache = 2,
	[Token(Token = "0x4000190")]
	[Obsolete]
	RemoveCache = 3,
	[Token(Token = "0x4000191")]
	AddToRoomCache = 4,
	[Token(Token = "0x4000192")]
	AddToRoomCacheGlobal = 5,
	[Token(Token = "0x4000193")]
	RemoveFromRoomCache = 6,
	[Token(Token = "0x4000194")]
	RemoveFromRoomCacheForActorsLeft = 7,
	[Token(Token = "0x4000195")]
	SliceIncreaseIndex = 10,
	[Token(Token = "0x4000196")]
	SliceSetIndex = 11,
	[Token(Token = "0x4000197")]
	SlicePurgeIndex = 12,
	[Token(Token = "0x4000198")]
	SlicePurgeUpToIndex = 13
}
