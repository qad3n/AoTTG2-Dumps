// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.CompletionActionInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000249")]
internal sealed class CompletionActionInvoker : System.Threading.IThreadPoolWorkItem
{
	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x10")]
	private readonly System.Threading.Tasks.ITaskCompletionAction m_action;

	[Token(Token = "0x4000A65")]
	[FieldOffset(Offset = "0x18")]
	private readonly Task m_completingTask;

	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x5548C60", Offset = "0x5547C60", VA = "0x5548C60")]
	internal CompletionActionInvoker(System.Threading.Tasks.ITaskCompletionAction action, Task completingTask)
	{
	}

	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x554BC00", Offset = "0x554AC00", VA = "0x554BC00", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x554BCB0", Offset = "0x554ACB0", VA = "0x554BCB0", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
