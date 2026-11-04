// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.ConditionalEvalState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicEvaluator.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005F3")]
internal enum ConditionalEvalState
{
	[Token(Token = "0x4001A76")]
	None,
	[Token(Token = "0x4001A77")]
	PassedIf,
	[Token(Token = "0x4001A78")]
	FailedIf,
	[Token(Token = "0x4001A79")]
	PassedElseIf,
	[Token(Token = "0x4001A7A")]
	FailedElseIf
}
