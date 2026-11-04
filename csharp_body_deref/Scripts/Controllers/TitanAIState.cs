// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.TitanAIState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x200061C")]
public enum TitanAIState
{
	[Token(Token = "0x4001B57")]
	Idle,
	[Token(Token = "0x4001B58")]
	Wander,
	[Token(Token = "0x4001B59")]
	SitIdle,
	[Token(Token = "0x4001B5A")]
	MoveToEnemy,
	[Token(Token = "0x4001B5B")]
	MoveToPosition,
	[Token(Token = "0x4001B5C")]
	Action,
	[Token(Token = "0x4001B5D")]
	WaitAttack,
	[Token(Token = "0x4001B5E")]
	ForcedIdle
}
