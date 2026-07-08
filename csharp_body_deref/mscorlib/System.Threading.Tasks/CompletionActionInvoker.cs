using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000241")]
internal sealed class CompletionActionInvoker : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000ABB")]
	[FieldOffset(Offset = "0x10")]
	private readonly System.Threading.Tasks.ITaskCompletionAction m_action;

	[Token(Token = "0x4000ABC")]
	[FieldOffset(Offset = "0x18")]
	private readonly Task m_completingTask;

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x5061110", Offset = "0x5061110", VA = "0x5061110")]
	internal CompletionActionInvoker(System.Threading.Tasks.ITaskCompletionAction action, Task completingTask)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x5065200", Offset = "0x5065200", VA = "0x5065200", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x50652B0", Offset = "0x50652B0", VA = "0x50652B0", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
