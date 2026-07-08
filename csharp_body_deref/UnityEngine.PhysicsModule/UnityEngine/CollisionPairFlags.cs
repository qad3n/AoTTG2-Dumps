using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000020")]
internal enum CollisionPairFlags : ushort
{
	[Token(Token = "0x4000060")]
	RemovedShape = 1,
	[Token(Token = "0x4000061")]
	RemovedOtherShape = 2,
	[Token(Token = "0x4000062")]
	ActorPairHasFirstTouch = 4,
	[Token(Token = "0x4000063")]
	ActorPairLostTouch = 8,
	[Token(Token = "0x4000064")]
	InternalHasImpulses = 0x10,
	[Token(Token = "0x4000065")]
	InternalContactsAreFlipped = 0x20
}
