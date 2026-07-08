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
	[Address(RVA = "0x504C280", Offset = "0x504C280", VA = "0x504C280")]
	[HandleProcessCorruptedStateExceptions]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal bool UndoNoThrow()
	{
		return default(bool);
	}

	[Token(Token = "0x600121F")]
	[Address(RVA = "0x504C300", Offset = "0x504C300", VA = "0x504C300")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	internal void Undo()
	{
	}
}
