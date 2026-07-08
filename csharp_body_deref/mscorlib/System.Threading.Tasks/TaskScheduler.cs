using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000258")]
[DebuggerTypeProxy(typeof(SystemThreadingTasks_TaskSchedulerDebugView))]
[DebuggerDisplay("Id={Id}")]
public abstract class TaskScheduler
{
	[Token(Token = "0x2000259")]
	internal sealed class SystemThreadingTasks_TaskSchedulerDebugView
	{
	}

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x0")]
	private static ConditionalWeakTable<TaskScheduler, object> s_activeTaskSchedulers;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly TaskScheduler s_defaultTaskScheduler;

	[Token(Token = "0x4000AFF")]
	[FieldOffset(Offset = "0x10")]
	internal static int s_taskSchedulerIdCounter;

	[Token(Token = "0x4000B00")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskSchedulerId;

	[Token(Token = "0x4000B01")]
	[FieldOffset(Offset = "0x18")]
	private static EventHandler<UnobservedTaskExceptionEventArgs> _unobservedTaskException;

	[Token(Token = "0x4000B02")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Lock _unobservedTaskExceptionLockObject;

	[Token(Token = "0x17000208")]
	internal virtual bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x5067EE0", Offset = "0x5067EE0", VA = "0x5067EE0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public static TaskScheduler Default
	{
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x5067F00", Offset = "0x5067F00", VA = "0x5067F00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020A")]
	public static TaskScheduler Current
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x50611F0", Offset = "0x50611F0", VA = "0x50611F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	internal static TaskScheduler InternalCurrent
	{
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x505FC30", Offset = "0x505FC30", VA = "0x505FC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	public int Id
	{
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x5060860", Offset = "0x5060860", VA = "0x5060860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60014E1")]
	protected internal abstract void QueueTask(Task task);

	[Token(Token = "0x60014E2")]
	protected abstract bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued);

	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x5060640", Offset = "0x5060640", VA = "0x5060640")]
	internal bool TryRunInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x5067EC0", Offset = "0x5067EC0", VA = "0x5067EC0", Slot = "6")]
	protected internal virtual bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x5067ED0", Offset = "0x5067ED0", VA = "0x5067ED0", Slot = "7")]
	internal virtual void NotifyWorkItemProgress()
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x5067EF0", Offset = "0x5067EF0", VA = "0x5067EF0")]
	protected TaskScheduler()
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x5067F70", Offset = "0x5067F70", VA = "0x5067F70")]
	public static TaskScheduler FromCurrentSynchronizationContext()
	{
		return null;
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x5068060", Offset = "0x5068060", VA = "0x5068060")]
	protected bool TryExecuteTask(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x5066BF0", Offset = "0x5066BF0", VA = "0x5066BF0")]
	internal static void PublishUnobservedTaskException(object sender, UnobservedTaskExceptionEventArgs ueea)
	{
	}
}
