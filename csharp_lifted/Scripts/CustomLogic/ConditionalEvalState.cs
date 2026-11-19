// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.ConditionalEvalState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000652")]
internal enum ConditionalEvalState
{
	[Token(Token = "0x4001C17")]
	None,
	[Token(Token = "0x4001C18")]
	PassedIf,
	[Token(Token = "0x4001C19")]
	FailedIf,
	[Token(Token = "0x4001C1A")]
	PassedElseIf,
	[Token(Token = "0x4001C1B")]
	FailedElseIf
}
