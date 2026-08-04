// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.CompletionActionInvoker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D46C30", Offset = "0x3D46C30", VA = "0x3D46C30")]
	internal CompletionActionInvoker(System.Threading.Tasks.ITaskCompletionAction action, Task completingTask)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x3D4AD20", Offset = "0x3D4AD20", VA = "0x3D4AD20", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x3D4ADD0", Offset = "0x3D4ADD0", VA = "0x3D4ADD0", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}
}
