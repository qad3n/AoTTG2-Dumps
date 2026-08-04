// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.QueueUserWorkItemCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000211")]
internal sealed class QueueUserWorkItemCallback : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x40009F4")]
	[FieldOffset(Offset = "0x10")]
	private WaitCallback callback;

	[Token(Token = "0x40009F5")]
	[FieldOffset(Offset = "0x18")]
	private ExecutionContext context;

	[Token(Token = "0x40009F6")]
	[FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x40009F7")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback ccb;

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x3D399E0", Offset = "0x3D399E0", VA = "0x3D399E0")]
	internal QueueUserWorkItemCallback(WaitCallback waitCallback, object stateObj, bool compressStack, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x3D39AC0", Offset = "0x3D39AC0", VA = "0x3D39AC0", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x3D39BA0", Offset = "0x3D39BA0", VA = "0x3D39BA0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x3D39BB0", Offset = "0x3D39BB0", VA = "0x3D39BB0")]
	private static void WaitCallback_Context(object state)
	{
	}
}
