// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020B")]
internal class ThreadHelper
{
	[Token(Token = "0x4000983")]
	[FieldOffset(Offset = "0x10")]
	private Delegate _start;

	[Token(Token = "0x4000984")]
	[FieldOffset(Offset = "0x18")]
	private object _startArg;

	[Token(Token = "0x4000985")]
	[FieldOffset(Offset = "0x20")]
	private ExecutionContext _executionContext;

	[Token(Token = "0x4000986")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback _ccb;

	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x55384F0", Offset = "0x55374F0", VA = "0x55384F0")]
	internal ThreadHelper(Delegate start)
	{
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x5538520", Offset = "0x5537520", VA = "0x5538520")]
	internal void SetExecutionContextHelper(ExecutionContext ec)
	{
	}

	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x5538530", Offset = "0x5537530", VA = "0x5538530")]
	private static void ThreadStart_Context(object state)
	{
	}

	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x5538600", Offset = "0x5537600", VA = "0x5538600")]
	internal void ThreadStart(object obj)
	{
	}

	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x55386F0", Offset = "0x55376F0", VA = "0x55386F0")]
	internal void ThreadStart()
	{
	}
}
