// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.StandardTaskContinuation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200027F")]
internal class StandardTaskContinuation : System.Threading.Tasks.TaskContinuation
{
	[Token(Token = "0x4000B30")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Task m_task;

	[Token(Token = "0x4000B31")]
	[FieldOffset(Offset = "0x18")]
	internal readonly TaskContinuationOptions m_options;

	[Token(Token = "0x4000B32")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_taskScheduler;

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x1BB3BC0", Offset = "0x1BB21C0", VA = "0x181BB3BC0")]
	internal StandardTaskContinuation(Task task, TaskContinuationOptions options, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x1BB3A90", Offset = "0x1BB2090", VA = "0x181BB3A90", Slot = "4")]
	internal override void Run(Task completedTask, bool bCanInlineContinuationTask)
	{
	}
}
