// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000260")]
[DebuggerDisplay("Id={Id}")]
[DebuggerTypeProxy(typeof(SystemThreadingTasks_TaskSchedulerDebugView))]
public abstract class TaskScheduler
{
	[Token(Token = "0x2000261")]
	internal sealed class SystemThreadingTasks_TaskSchedulerDebugView
	{
	}

	[Token(Token = "0x4000AA5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TaskScheduler s_defaultTaskScheduler;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x8")]
	internal static int s_taskSchedulerIdCounter;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskSchedulerId;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0x10")]
	private static EventHandler<UnobservedTaskExceptionEventArgs> _unobservedTaskException;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Lock _unobservedTaskExceptionLockObject;

	[Token(Token = "0x17000209")]
	internal virtual bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x6001529")]
		[Address(RVA = "0x554E6D0", Offset = "0x554D6D0", VA = "0x554E6D0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public static TaskScheduler Default
	{
		[Token(Token = "0x600152B")]
		[Address(RVA = "0x554E6F0", Offset = "0x554D6F0", VA = "0x554E6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	public static TaskScheduler Current
	{
		[Token(Token = "0x600152C")]
		[Address(RVA = "0x5548D40", Offset = "0x5547D40", VA = "0x5548D40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	internal static TaskScheduler InternalCurrent
	{
		[Token(Token = "0x600152D")]
		[Address(RVA = "0x5547890", Offset = "0x5546890", VA = "0x5547890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020D")]
	public int Id
	{
		[Token(Token = "0x600152F")]
		[Address(RVA = "0x5548460", Offset = "0x5547460", VA = "0x5548460")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001524")]
	protected internal abstract void QueueTask(Task task);

	[Token(Token = "0x6001525")]
	protected abstract bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued);

	[Token(Token = "0x6001526")]
	[Address(RVA = "0x5548250", Offset = "0x5547250", VA = "0x5548250")]
	internal bool TryRunInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x6001527")]
	[Address(RVA = "0x554E6B0", Offset = "0x554D6B0", VA = "0x554E6B0", Slot = "6")]
	protected internal virtual bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001528")]
	[Address(RVA = "0x554E6C0", Offset = "0x554D6C0", VA = "0x554E6C0", Slot = "7")]
	internal virtual void NotifyWorkItemProgress()
	{
	}

	[Token(Token = "0x600152A")]
	[Address(RVA = "0x554E6E0", Offset = "0x554D6E0", VA = "0x554E6E0")]
	protected TaskScheduler()
	{
	}

	[Token(Token = "0x600152E")]
	[Address(RVA = "0x554E760", Offset = "0x554D760", VA = "0x554E760")]
	public static TaskScheduler FromCurrentSynchronizationContext()
	{
		return null;
	}

	[Token(Token = "0x6001530")]
	[Address(RVA = "0x554E850", Offset = "0x554D850", VA = "0x554E850")]
	protected bool TryExecuteTask(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001531")]
	[Address(RVA = "0x554D4A0", Offset = "0x554C4A0", VA = "0x554D4A0")]
	internal static void PublishUnobservedTaskException(object sender, UnobservedTaskExceptionEventArgs ueea)
	{
	}
}
