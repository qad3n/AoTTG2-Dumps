// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CollisionPairEventFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200001A")]
internal enum CollisionPairEventFlags : ushort
{
	[Token(Token = "0x4000057")]
	SolveContacts = 1,
	[Token(Token = "0x4000058")]
	ModifyContacts = 2,
	[Token(Token = "0x4000059")]
	NotifyTouchFound = 4,
	[Token(Token = "0x400005A")]
	NotifyTouchPersists = 8,
	[Token(Token = "0x400005B")]
	NotifyTouchLost = 16,
	[Token(Token = "0x400005C")]
	NotifyTouchCCD = 32,
	[Token(Token = "0x400005D")]
	NotifyThresholdForceFound = 64,
	[Token(Token = "0x400005E")]
	NotifyThresholdForcePersists = 128,
	[Token(Token = "0x400005F")]
	NotifyThresholdForceLost = 256,
	[Token(Token = "0x4000060")]
	NotifyContactPoint = 512,
	[Token(Token = "0x4000061")]
	DetectDiscreteContact = 1024,
	[Token(Token = "0x4000062")]
	DetectCCDContact = 2048,
	[Token(Token = "0x4000063")]
	PreSolverVelocity = 4096,
	[Token(Token = "0x4000064")]
	PostSolverVelocity = 8192,
	[Token(Token = "0x4000065")]
	ContactEventPose = 16384,
	[Token(Token = "0x4000066")]
	NextFree = 32768,
	[Token(Token = "0x4000067")]
	ContactDefault = 1025,
	[Token(Token = "0x4000068")]
	TriggerDefault = 1044
}
