// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000233")]
internal class ThreadHelper
{
	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _start;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x18")]
	private object _startArg;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x20")]
	private ExecutionContext _executionContext;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback _ccb;

	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	internal ThreadHelper(Delegate start)
	{
	}

	[Token(Token = "0x60012F7")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	internal void SetExecutionContextHelper(ExecutionContext ec)
	{
	}

	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x1BBFDC0", Offset = "0x1BBE3C0", VA = "0x181BBFDC0")]
	private static void ThreadStart_Context(object state)
	{
	}

	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x1BBFED0", Offset = "0x1BBE4D0", VA = "0x181BBFED0")]
	internal void ThreadStart(object obj)
	{
	}

	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x1BBFFF0", Offset = "0x1BBE5F0", VA = "0x181BBFFF0")]
	internal void ThreadStart()
	{
	}
}
