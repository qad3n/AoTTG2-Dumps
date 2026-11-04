// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000282")]
internal sealed class TaskSchedulerAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000B37")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_scheduler;

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x1BB4070", Offset = "0x1BB2670", VA = "0x181BB4070")]
	internal TaskSchedulerAwaitTaskContinuation(TaskScheduler scheduler, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x1BB62E0", Offset = "0x1BB48E0", VA = "0x181BB62E0", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}
}
