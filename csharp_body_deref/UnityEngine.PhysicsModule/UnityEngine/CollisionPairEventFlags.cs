// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.CollisionPairEventFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000021")]
internal enum CollisionPairEventFlags : ushort
{
	[Token(Token = "0x4000067")]
	SolveContacts = 1,
	[Token(Token = "0x4000068")]
	ModifyContacts = 2,
	[Token(Token = "0x4000069")]
	NotifyTouchFound = 4,
	[Token(Token = "0x400006A")]
	NotifyTouchPersists = 8,
	[Token(Token = "0x400006B")]
	NotifyTouchLost = 16,
	[Token(Token = "0x400006C")]
	NotifyTouchCCD = 32,
	[Token(Token = "0x400006D")]
	NotifyThresholdForceFound = 64,
	[Token(Token = "0x400006E")]
	NotifyThresholdForcePersists = 128,
	[Token(Token = "0x400006F")]
	NotifyThresholdForceLost = 256,
	[Token(Token = "0x4000070")]
	NotifyContactPoint = 512,
	[Token(Token = "0x4000071")]
	DetectDiscreteContact = 1024,
	[Token(Token = "0x4000072")]
	DetectCCDContact = 2048,
	[Token(Token = "0x4000073")]
	PreSolverVelocity = 4096,
	[Token(Token = "0x4000074")]
	PostSolverVelocity = 8192,
	[Token(Token = "0x4000075")]
	ContactEventPose = 16384,
	[Token(Token = "0x4000076")]
	NextFree = 32768,
	[Token(Token = "0x4000077")]
	ContactDefault = 1025,
	[Token(Token = "0x4000078")]
	TriggerDefault = 1044
}
