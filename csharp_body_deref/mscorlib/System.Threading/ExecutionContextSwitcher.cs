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

[Token(Token = "0x20001F5")]
internal struct ExecutionContextSwitcher
{
	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x0")]
	internal ExecutionContext.Reader outerEC;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x8")]
	internal bool outerECBelongsToScope;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x10")]
	internal object hecsw;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x18")]
	internal Thread thread;

	[Token(Token = "0x600121E")]
	[Address(RVA = "0x3D31DA0", Offset = "0x3D31DA0", VA = "0x3D31DA0")]
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal bool UndoNoThrow()
	{
		return default(bool);
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x3D31E20", Offset = "0x3D31E20", VA = "0x3D31E20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal void Undo()
	{
	}
}
