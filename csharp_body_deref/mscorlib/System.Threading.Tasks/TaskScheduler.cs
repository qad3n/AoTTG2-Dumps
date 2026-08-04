// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskScheduler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3D4DA00", Offset = "0x3D4DA00", VA = "0x3D4DA00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public static TaskScheduler Default
	{
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x3D4DA20", Offset = "0x3D4DA20", VA = "0x3D4DA20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020A")]
	public static TaskScheduler Current
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x3D46D10", Offset = "0x3D46D10", VA = "0x3D46D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020B")]
	internal static TaskScheduler InternalCurrent
	{
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x3D45750", Offset = "0x3D45750", VA = "0x3D45750")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700020C")]
	public int Id
	{
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x3D46380", Offset = "0x3D46380", VA = "0x3D46380")]
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
	[Address(RVA = "0x3D46160", Offset = "0x3D46160", VA = "0x3D46160")]
	internal bool TryRunInline(Task task, bool taskWasPreviouslyQueued)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x3D4D9E0", Offset = "0x3D4D9E0", VA = "0x3D4D9E0", Slot = "6")]
	protected internal virtual bool TryDequeue(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x3D4D9F0", Offset = "0x3D4D9F0", VA = "0x3D4D9F0", Slot = "7")]
	internal virtual void NotifyWorkItemProgress()
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x3D4DA10", Offset = "0x3D4DA10", VA = "0x3D4DA10")]
	protected TaskScheduler()
	{
	}

	[Token(Token = "0x60014EB")]
	[Address(RVA = "0x3D4DA90", Offset = "0x3D4DA90", VA = "0x3D4DA90")]
	public static TaskScheduler FromCurrentSynchronizationContext()
	{
		return null;
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x3D4DB80", Offset = "0x3D4DB80", VA = "0x3D4DB80")]
	protected bool TryExecuteTask(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x3D4C710", Offset = "0x3D4C710", VA = "0x3D4C710")]
	internal static void PublishUnobservedTaskException(object sender, UnobservedTaskExceptionEventArgs ueea)
	{
	}
}
