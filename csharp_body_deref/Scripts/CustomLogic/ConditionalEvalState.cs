// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.ConditionalEvalState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200049A")]
internal enum ConditionalEvalState
{
	[Token(Token = "0x400142B")]
	None,
	[Token(Token = "0x400142C")]
	PassedIf,
	[Token(Token = "0x400142D")]
	FailedIf,
	[Token(Token = "0x400142E")]
	PassedElseIf,
	[Token(Token = "0x400142F")]
	FailedElseIf
}
