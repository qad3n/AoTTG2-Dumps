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
	[Address(RVA = "0x5053EC0", Offset = "0x5053EC0", VA = "0x5053EC0")]
	internal QueueUserWorkItemCallback(WaitCallback waitCallback, object stateObj, bool compressStack, ref System.Threading.StackCrawlMark stackMark)
	{
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x5053FA0", Offset = "0x5053FA0", VA = "0x5053FA0", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x5054080", Offset = "0x5054080", VA = "0x5054080", Slot = "5")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
	{
	}

	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x5054090", Offset = "0x5054090", VA = "0x5054090")]
	private static void WaitCallback_Context(object state)
	{
	}
}
