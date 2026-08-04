// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.TitanAIState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x20004C7")]
public enum TitanAIState
{
	[Token(Token = "0x4001505")]
	Idle,
	[Token(Token = "0x4001506")]
	Wander,
	[Token(Token = "0x4001507")]
	SitIdle,
	[Token(Token = "0x4001508")]
	MoveToEnemy,
	[Token(Token = "0x4001509")]
	MoveToPosition,
	[Token(Token = "0x400150A")]
	Action,
	[Token(Token = "0x400150B")]
	WaitAttack,
	[Token(Token = "0x400150C")]
	ForcedIdle
}
