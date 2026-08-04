// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000252")]
internal sealed class TaskSchedulerAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_scheduler;

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x3D45880", Offset = "0x3D45880", VA = "0x3D45880")]
	internal TaskSchedulerAwaitTaskContinuation(TaskScheduler scheduler, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x3D4B950", Offset = "0x3D4B950", VA = "0x3D4B950", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}
}
