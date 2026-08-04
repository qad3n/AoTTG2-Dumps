// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D356F0", Offset = "0x3D356F0", VA = "0x3D356F0")]
	internal ThreadHelper(Delegate start)
	{
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x3D35720", Offset = "0x3D35720", VA = "0x3D35720")]
	internal void SetExecutionContextHelper(ExecutionContext ec)
	{
	}

	[Token(Token = "0x6001287")]
	[Address(RVA = "0x3D35730", Offset = "0x3D35730", VA = "0x3D35730")]
	private static void ThreadStart_Context(object state)
	{
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x3D35810", Offset = "0x3D35810", VA = "0x3D35810")]
	internal void ThreadStart(object obj)
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x3D35900", Offset = "0x3D35900", VA = "0x3D35900")]
	internal void ThreadStart()
	{
	}
}
