// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskScheduler
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000288")]
[DebuggerDisplay("Id={Id}")]
[DebuggerTypeProxy(typeof(SystemThreadingTasks_TaskSchedulerDebugView))]
public abstract class TaskScheduler
{
	[Token(Token = "0x2000289")]
	internal sealed class SystemThreadingTasks_TaskSchedulerDebugView
	{
	}

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TaskScheduler s_defaultTaskScheduler;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x8")]
	internal static int s_taskSchedulerIdCounter;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskSchedulerId;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x10")]
	private static EventHandler<UnobservedTaskExceptionEventArgs> _unobservedTaskException;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Lock _unobservedTaskExceptionLockObject;

	[Token(Token = "0x1700020A")]
	internal virtual bool RequiresAtomicStartTransition
	{
		[Token(Token = "0x6001552")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020B")]
	public static TaskScheduler Default
	{
		[Token(Token = "0x6001554")]
		[Address(RVA = "0x1BB6EF0", Offset = "0x1BB54F0", VA = "0x181BB6EF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	public static TaskScheduler Current
	{
		[Token(Token = "0x6001555")]
		[Address(RVA = "0x1BB6E50", Offset = "0x1BB5450", VA = "0x181BB6E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020D")]
	internal static TaskScheduler InternalCurrent
	{
		[Token(Token = "0x6001556")]
		[Address(RVA = "0x1BB6FE0", Offset = "0x1BB55E0", VA = "0x181BB6FE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020E")]
	public int Id
	{
		[Token(Token = "0x6001558")]
		[Address(RVA = "0x1BB6F40", Offset = "0x1BB5540", VA = "0x181BB6F40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600154D")]
	protected internal abstract void QueueTask(Task task);

	[Token(Token = "0x600154E")]
	protected abstract bool TryExecuteTaskInline(Task task, bool taskWasPreviouslyQueued);

	[Token(Token = "0x600154F")]
	[Address(RVA = "0x1BB6A80", Offset = "0x1BB5080", VA = "0x181BB6A80")]
	internal bool TryRunInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
	protected internal virtual bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	internal virtual void NotifyWorkItemProgress()
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TaskScheduler()
	{
	}

	[Token(Token = "0x6001557")]
	[Address(RVA = "0x1BB67D0", Offset = "0x1BB4DD0", VA = "0x181BB67D0")]
	public static TaskScheduler FromCurrentSynchronizationContext()
	{
		return null;
	}

	[Token(Token = "0x6001559")]
	[Address(RVA = "0x1BB6A00", Offset = "0x1BB5000", VA = "0x181BB6A00")]
	protected bool TryExecuteTask(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x600155A")]
	[Address(RVA = "0x1BB68B0", Offset = "0x1BB4EB0", VA = "0x181BB68B0")]
	internal static void PublishUnobservedTaskException(object sender, UnobservedTaskExceptionEventArgs ueea)
	{
	}
}
