using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200024F")]
internal class StandardTaskContinuation : System.Threading.Tasks.TaskContinuation
{
	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Task m_task;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x18")]
	internal readonly TaskContinuationOptions m_options;

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskScheduler m_taskScheduler;

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x5061A40", Offset = "0x5061A40", VA = "0x5061A40")]
	internal StandardTaskContinuation(Task task, TaskContinuationOptions options, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x50655E0", Offset = "0x50655E0", VA = "0x50655E0", Slot = "4")]
	internal override void Run(Task completedTask, bool bCanInlineContinuationTask)
	{
	}
}
