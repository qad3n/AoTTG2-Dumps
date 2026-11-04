// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.QueueUserWorkItemCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000242")]
internal sealed class QueueUserWorkItemCallback : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x10")]
	private WaitCallback callback;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x18")]
	private ExecutionContext context;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback ccb;

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x1BB1960", Offset = "0x1BAFF60", VA = "0x181BB1960")]
	internal QueueUserWorkItemCallback(WaitCallback waitCallback, object stateObj, bool compressStack, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x1BB1770", Offset = "0x1BAFD70", VA = "0x181BB1770", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x1BB1860", Offset = "0x1BAFE60", VA = "0x181BB1860")]
	private static void WaitCallback_Context(object state)
	{
	}
}
