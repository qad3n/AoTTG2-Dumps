// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CollisionPairFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000019")]
internal enum CollisionPairFlags : ushort
{
	[Token(Token = "0x4000050")]
	RemovedShape = 1,
	[Token(Token = "0x4000051")]
	RemovedOtherShape = 2,
	[Token(Token = "0x4000052")]
	ActorPairHasFirstTouch = 4,
	[Token(Token = "0x4000053")]
	ActorPairLostTouch = 8,
	[Token(Token = "0x4000054")]
	InternalHasImpulses = 0x10,
	[Token(Token = "0x4000055")]
	InternalContactsAreFlipped = 0x20
}
