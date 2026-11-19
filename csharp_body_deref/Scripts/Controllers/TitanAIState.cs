// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.TitanAIState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Controllers;

[Token(Token = "0x200067B")]
public enum TitanAIState
{
	[Token(Token = "0x4001CFA")]
	Idle,
	[Token(Token = "0x4001CFB")]
	Wander,
	[Token(Token = "0x4001CFC")]
	SitIdle,
	[Token(Token = "0x4001CFD")]
	MoveToEnemy,
	[Token(Token = "0x4001CFE")]
	MoveToPosition,
	[Token(Token = "0x4001CFF")]
	Action,
	[Token(Token = "0x4001D00")]
	WaitAttack,
	[Token(Token = "0x4001D01")]
	ForcedIdle
}
