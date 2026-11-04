// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.CompletionActionInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000271")]
internal sealed class CompletionActionInvoker : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x10")]
	private readonly System.Threading.Tasks.ITaskCompletionAction m_action;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x18")]
	private readonly Task m_completingTask;

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	internal CompletionActionInvoker(System.Threading.Tasks.ITaskCompletionAction action, Task completingTask)
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x1BAD310", Offset = "0x1BAB910", VA = "0x181BAD310", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
