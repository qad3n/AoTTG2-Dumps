// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ExecutionContextSwitcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001FE")]
internal struct ExecutionContextSwitcher
{
	[Token(Token = "0x400095F")]
	[FieldOffset(Offset = "0x0")]
	internal ExecutionContext.Reader outerEC;

	[Token(Token = "0x4000960")]
	[FieldOffset(Offset = "0x8")]
	internal bool outerECBelongsToScope;

	[Token(Token = "0x4000961")]
	[FieldOffset(Offset = "0x10")]
	internal object hecsw;

	[Token(Token = "0x4000962")]
	[FieldOffset(Offset = "0x18")]
	internal Thread thread;

	[Token(Token = "0x6001266")]
	[Address(RVA = "0x5534AF0", Offset = "0x5533AF0", VA = "0x5534AF0")]
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal bool UndoNoThrow()
	{
		return default(bool);
	}

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x5534C20", Offset = "0x5533C20", VA = "0x5534C20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal void Undo()
	{
	}
}
