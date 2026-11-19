// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HorseState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Horse/Horse.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x20006AF")]
internal enum HorseState
{
	[Token(Token = "0x4001E40")]
	Idle,
	[Token(Token = "0x4001E41")]
	WalkToPoint,
	[Token(Token = "0x4001E42")]
	RunToPoint,
	[Token(Token = "0x4001E43")]
	ControlledIdle,
	[Token(Token = "0x4001E44")]
	ControlledRun,
	[Token(Token = "0x4001E45")]
	ControlledWalk
}
