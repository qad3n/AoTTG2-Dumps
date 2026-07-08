using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025D")]
internal sealed class ThreadPoolTaskScheduler : TaskScheduler
{
	[Token(Token = "0x4000B08")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ParameterizedThreadStart s_longRunningThreadWork;

	[Token(Token = "0x1700020D")]
	internal override bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x60014FD")]
		[Address(RVA = "0x50688C0", Offset = "0x50688C0", VA = "0x50688C0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x50681B0", Offset = "0x50681B0", VA = "0x50681B0")]
	internal ThreadPoolTaskScheduler()
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x5068490", Offset = "0x5068490", VA = "0x5068490", Slot = "4")]
	protected internal override void QueueTask(Task task)
	{
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x50687C0", Offset = "0x50687C0", VA = "0x50687C0", Slot = "5")]
	protected override bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x50688A0", Offset = "0x50688A0", VA = "0x50688A0", Slot = "6")]
	protected internal override bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x50688B0", Offset = "0x50688B0", VA = "0x50688B0", Slot = "7")]
	internal override void NotifyWorkItemProgress()
	{
	}
}
