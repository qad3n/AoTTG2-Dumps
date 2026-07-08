using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000252")]
internal sealed class TaskSchedulerAwaitTaskContinuation : System.Threading.Tasks.AwaitTaskContinuation
{
	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_scheduler;

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x505FD60", Offset = "0x505FD60", VA = "0x505FD60")]
	internal TaskSchedulerAwaitTaskContinuation(TaskScheduler scheduler, Action action, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x5065E30", Offset = "0x5065E30", VA = "0x5065E30", Slot = "4")]
	internal sealed override void Run(Task ignored, bool canInlineContinuationTask)
	{
	}
}
