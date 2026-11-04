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

[Token(Token = "0x2000226")]
internal struct ExecutionContextSwitcher
{
	[Token(Token = "0x4000A01")]
	[FieldOffset(Offset = "0x0")]
	internal ExecutionContext.Reader outerEC;

	[Token(Token = "0x4000A02")]
	[FieldOffset(Offset = "0x8")]
	internal bool outerECBelongsToScope;

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x10")]
	internal object hecsw;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x18")]
	internal Thread thread;

	[Token(Token = "0x600128F")]
	[Address(RVA = "0x1B9F0D0", Offset = "0x1B9D6D0", VA = "0x181B9F0D0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[HandleProcessCorruptedStateExceptions]
	internal bool UndoNoThrow()
	{
		return default(bool);
	}

	[Token(Token = "0x6001290")]
	[Address(RVA = "0x1B9F0F0", Offset = "0x1B9D6F0", VA = "0x181B9F0F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal void Undo()
	{
	}
}
