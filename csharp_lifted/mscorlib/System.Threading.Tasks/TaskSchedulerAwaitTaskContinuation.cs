// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025A")]
internal sealed class TaskSchedulerAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000A95")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_scheduler;

	[Token(Token = "0x60014F5")]
	[Address(RVA = "0x5547990", Offset = "0x5546990", VA = "0x5547990")]
	internal TaskSchedulerAwaitTaskContinuation(TaskScheduler scheduler, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x554C770", Offset = "0x554B770", VA = "0x554C770", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}
}
