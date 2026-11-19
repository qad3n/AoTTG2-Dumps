// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.QueueUserWorkItemCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021A")]
internal sealed class QueueUserWorkItemCallback : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x10")]
	private WaitCallback callback;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x18")]
	private ExecutionContext context;

	[Token(Token = "0x40009B2")]
	[FieldOffset(Offset = "0x20")]
	private object state;

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x0")]
	internal static ContextCallback ccb;

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x553C400", Offset = "0x553B400", VA = "0x553C400")]
	internal QueueUserWorkItemCallback(WaitCallback waitCallback, object stateObj, bool compressStack, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x6001339")]
	[Address(RVA = "0x553C4E0", Offset = "0x553B4E0", VA = "0x553C4E0", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x553C5C0", Offset = "0x553B5C0", VA = "0x553C5C0", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x553C5D0", Offset = "0x553B5D0", VA = "0x553C5D0")]
	private static void WaitCallback_Context(object state)
	{
	}
}
