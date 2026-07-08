using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000202")]
internal class ThreadHelper
{
	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _start;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x18")]
	private object _startArg;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x20")]
	private ExecutionContext _executionContext;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback _ccb;

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x504FBD0", Offset = "0x504FBD0", VA = "0x504FBD0")]
	internal ThreadHelper(Delegate start)
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x504FC00", Offset = "0x504FC00", VA = "0x504FC00")]
	internal void SetExecutionContextHelper(ExecutionContext ec)
	{
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x504FC10", Offset = "0x504FC10", VA = "0x504FC10")]
	private static void ThreadStart_Context(object state)
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x504FCF0", Offset = "0x504FCF0", VA = "0x504FCF0")]
	internal void ThreadStart(object obj)
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x504FDE0", Offset = "0x504FDE0", VA = "0x504FDE0")]
	internal void ThreadStart()
	{
	}
}
