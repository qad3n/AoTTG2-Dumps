// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.Task
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000233")]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}, Result = {DebuggerDisplayResultDescription}")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_FutureDebugView<>))]
public class Task<TResult> : Task
{
	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x0")]
	internal TResult m_result;

	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x0")]
	private static TaskFactory<TResult> s_defaultFactory;

	[Token(Token = "0x170001E1")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public TResult Result
	{
		[Token(Token = "0x60013D2")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E2")]
	internal TResult ResultOnSuccess
	{
		[Token(Token = "0x60013D3")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E3")]
	public new static TaskFactory<TResult> Factory
	{
		[Token(Token = "0x60013D5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013C6")]
	internal Task()
	{
	}

	[Token(Token = "0x60013C7")]
	internal Task(object state, TaskCreationOptions options)
	{
	}

	[Token(Token = "0x60013C8")]
	internal Task(TResult result)
	{
	}

	[Token(Token = "0x60013C9")]
	internal Task(bool canceled, TResult result, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x60013CA")]
	public Task(Func<TResult> function, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60013CB")]
	public Task(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60013CC")]
	internal Task(Func<TResult> valueSelector, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60013CD")]
	internal Task(Delegate valueSelector, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60013CE")]
	internal static Task<TResult> StartNew(Task parent, Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	internal static Task<TResult> StartNew(Task parent, Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60013D0")]
	internal bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x60013D1")]
	internal void DangerousSetResult(TResult result)
	{
	}

	[Token(Token = "0x60013D4")]
	internal TResult GetResultCore(bool waitCompletionNotification)
	{
		return (TResult)null;
	}

	[Token(Token = "0x60013D6")]
	internal override void InnerInvoke()
	{
	}

	[Token(Token = "0x60013D7")]
	public new TaskAwaiter<TResult> GetAwaiter()
	{
		return default(TaskAwaiter<TResult>);
	}

	[Token(Token = "0x60013D8")]
	public new ConfiguredTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable<TResult>);
	}

	[Token(Token = "0x60013D9")]
	public Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60013DA")]
	internal Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013DB")]
	public Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60013DC")]
	internal Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013DD")]
	public Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013DE")]
	internal Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}
}
[Token(Token = "0x200023B")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_TaskDebugView))]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}")]
public class Task : System.Threading.IThreadPoolWorkItem, IAsyncResult, IDisposable
{
	[Token(Token = "0x200023C")]
	internal class ContingentProperties
	{
		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x10")]
		internal ExecutionContext m_capturedContext;

		[Token(Token = "0x4000AAC")]
		[FieldOffset(Offset = "0x18")]
		internal ManualResetEventSlim m_completionEvent;

		[Token(Token = "0x4000AAD")]
		[FieldOffset(Offset = "0x20")]
		internal System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder;

		[Token(Token = "0x4000AAE")]
		[FieldOffset(Offset = "0x28")]
		internal CancellationToken m_cancellationToken;

		[Token(Token = "0x4000AAF")]
		[FieldOffset(Offset = "0x30")]
		internal object m_cancellationRegistration;

		[Token(Token = "0x4000AB0")]
		[FieldOffset(Offset = "0x38")]
		internal int m_internalCancellationRequested;

		[Token(Token = "0x4000AB1")]
		[FieldOffset(Offset = "0x3C")]
		internal int m_completionCountdown;

		[Token(Token = "0x4000AB2")]
		[FieldOffset(Offset = "0x40")]
		internal System.Collections.Generic.LowLevelListWithIList<Task> m_exceptionalChildren;

		[Token(Token = "0x6001479")]
		[Address(RVA = "0x3D44140", Offset = "0x3D44140", VA = "0x3D44140")]
		internal void SetCompleted()
		{
		}

		[Token(Token = "0x600147A")]
		[Address(RVA = "0x3D44160", Offset = "0x3D44160", VA = "0x3D44160")]
		internal void UnregisterCancellationCallback()
		{
		}

		[Token(Token = "0x600147B")]
		[Address(RVA = "0x3D404E0", Offset = "0x3D404E0", VA = "0x3D404E0")]
		public ContingentProperties()
		{
		}
	}

	[Token(Token = "0x200023D")]
	private sealed class SetOnInvokeMres : ManualResetEventSlim, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x17000200")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x600147E")]
			[Address(RVA = "0x3D4A4B0", Offset = "0x3D4A4B0", VA = "0x3D4A4B0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600147C")]
		[Address(RVA = "0x3D46810", Offset = "0x3D46810", VA = "0x3D46810")]
		internal SetOnInvokeMres()
		{
		}

		[Token(Token = "0x600147D")]
		[Address(RVA = "0x3D4A4A0", Offset = "0x3D4A4A0", VA = "0x3D4A4A0", Slot = "6")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x200023E")]
	private sealed class DelayPromise : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000AB3")]
		[FieldOffset(Offset = "0x58")]
		internal readonly CancellationToken Token;

		[Token(Token = "0x4000AB4")]
		[FieldOffset(Offset = "0x60")]
		internal CancellationTokenRegistration Registration;

		[Token(Token = "0x4000AB5")]
		[FieldOffset(Offset = "0x78")]
		internal Timer Timer;

		[Token(Token = "0x600147F")]
		[Address(RVA = "0x3D48430", Offset = "0x3D48430", VA = "0x3D48430")]
		internal DelayPromise(CancellationToken token)
		{
		}

		[Token(Token = "0x6001480")]
		[Address(RVA = "0x3D4A4C0", Offset = "0x3D4A4C0", VA = "0x3D4A4C0")]
		internal void Complete()
		{
		}
	}

	[Token(Token = "0x200023F")]
	private sealed class WhenAllPromise : Task<System.Threading.Tasks.VoidTaskResult>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4000AB6")]
		[FieldOffset(Offset = "0x58")]
		private readonly Task[] m_tasks;

		[Token(Token = "0x4000AB7")]
		[FieldOffset(Offset = "0x60")]
		private int m_count;

		[Token(Token = "0x17000201")]
		internal override bool ShouldNotifyDebuggerOfWaitCompletion
		{
			[Token(Token = "0x6001483")]
			[Address(RVA = "0x3D4AA90", Offset = "0x3D4AA90", VA = "0x3D4AA90", Slot = "11")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000202")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x6001484")]
			[Address(RVA = "0x3D4AB70", Offset = "0x3D4AB70", VA = "0x3D4AB70", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001481")]
		[Address(RVA = "0x3D491D0", Offset = "0x3D491D0", VA = "0x3D491D0")]
		internal WhenAllPromise(Task[] tasks)
		{
		}

		[Token(Token = "0x6001482")]
		[Address(RVA = "0x3D4A680", Offset = "0x3D4A680", VA = "0x3D4A680", Slot = "14")]
		public void Invoke(Task ignored)
		{
		}
	}

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x0")]
	internal static int s_taskIdCounter;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskId;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x18")]
	internal Delegate m_action;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x20")]
	internal object m_stateObject;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x28")]
	internal TaskScheduler m_taskScheduler;

	[Token(Token = "0x4000A8A")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Task m_parent;

	[Token(Token = "0x4000A8B")]
	[FieldOffset(Offset = "0x38")]
	internal int m_stateFlags;

	[Token(Token = "0x4000A8C")]
	private const int OptionsMask = 65535;

	[Token(Token = "0x4000A8D")]
	internal const int TASK_STATE_STARTED = 65536;

	[Token(Token = "0x4000A8E")]
	internal const int TASK_STATE_DELEGATE_INVOKED = 131072;

	[Token(Token = "0x4000A8F")]
	internal const int TASK_STATE_DISPOSED = 262144;

	[Token(Token = "0x4000A90")]
	internal const int TASK_STATE_EXCEPTIONOBSERVEDBYPARENT = 524288;

	[Token(Token = "0x4000A91")]
	internal const int TASK_STATE_CANCELLATIONACKNOWLEDGED = 1048576;

	[Token(Token = "0x4000A92")]
	internal const int TASK_STATE_FAULTED = 2097152;

	[Token(Token = "0x4000A93")]
	internal const int TASK_STATE_CANCELED = 4194304;

	[Token(Token = "0x4000A94")]
	internal const int TASK_STATE_WAITING_ON_CHILDREN = 8388608;

	[Token(Token = "0x4000A95")]
	internal const int TASK_STATE_RAN_TO_COMPLETION = 16777216;

	[Token(Token = "0x4000A96")]
	internal const int TASK_STATE_WAITINGFORACTIVATION = 33554432;

	[Token(Token = "0x4000A97")]
	internal const int TASK_STATE_COMPLETION_RESERVED = 67108864;

	[Token(Token = "0x4000A98")]
	internal const int TASK_STATE_THREAD_WAS_ABORTED = 134217728;

	[Token(Token = "0x4000A99")]
	internal const int TASK_STATE_WAIT_COMPLETION_NOTIFICATION = 268435456;

	[Token(Token = "0x4000A9A")]
	private const int TASK_STATE_COMPLETED_MASK = 23068672;

	[Token(Token = "0x4000A9B")]
	private const int CANCELLATION_REQUESTED = 1;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x40")]
	private object m_continuationObject;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_taskCompletionSentinel;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x10")]
	internal static bool s_asyncDebuggingEnabled;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x48")]
	internal ContingentProperties m_contingentProperties;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Action<object> s_taskCancelCallback;

	[Token(Token = "0x4000AA1")]
	[ThreadStatic]
	internal static Task t_currentTask;

	[Token(Token = "0x4000AA2")]
	[ThreadStatic]
	private static System.Threading.Tasks.StackGuard t_stackGuard;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Func<ContingentProperties> s_createContingentProperties;

	[Token(Token = "0x4000AA6")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Predicate<Task> s_IsExceptionObservedByParentPredicate;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x40")]
	private static ContextCallback s_ecCallback;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Predicate<object> s_IsTaskContinuationNullPredicate;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<int, Task> s_currentActiveTasks;

	[Token(Token = "0x4000AAA")]
	[FieldOffset(Offset = "0x58")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E4")]
	internal TaskCreationOptions Options
	{
		[Token(Token = "0x60013FE")]
		[Address(RVA = "0x3D40F20", Offset = "0x3D40F20", VA = "0x3D40F20")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001E5")]
	internal bool IsWaitNotificationEnabledOrNotRanToCompletion
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001405")]
		[Address(RVA = "0x3D41CF0", Offset = "0x3D41CF0", VA = "0x3D41CF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E6")]
	internal virtual bool ShouldNotifyDebuggerOfWaitCompletion
	{
		[Token(Token = "0x6001406")]
		[Address(RVA = "0x3D41D10", Offset = "0x3D41D10", VA = "0x3D41D10", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E7")]
	internal bool IsWaitNotificationEnabled
	{
		[Token(Token = "0x6001407")]
		[Address(RVA = "0x3D41C20", Offset = "0x3D41C20", VA = "0x3D41C20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E8")]
	public int Id
	{
		[Token(Token = "0x600140D")]
		[Address(RVA = "0x3D40080", Offset = "0x3D40080", VA = "0x3D40080")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001E9")]
	internal static Task InternalCurrent
	{
		[Token(Token = "0x600140E")]
		[Address(RVA = "0x3D421C0", Offset = "0x3D421C0", VA = "0x3D421C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EA")]
	internal static System.Threading.Tasks.StackGuard CurrentStackGuard
	{
		[Token(Token = "0x6001410")]
		[Address(RVA = "0x3D422C0", Offset = "0x3D422C0", VA = "0x3D422C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EB")]
	public AggregateException Exception
	{
		[Token(Token = "0x6001411")]
		[Address(RVA = "0x3D423B0", Offset = "0x3D423B0", VA = "0x3D423B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EC")]
	public TaskStatus Status
	{
		[Token(Token = "0x6001412")]
		[Address(RVA = "0x3D42610", Offset = "0x3D42610", VA = "0x3D42610")]
		get
		{
			return default(TaskStatus);
		}
	}

	[Token(Token = "0x170001ED")]
	public bool IsCanceled
	{
		[Token(Token = "0x6001413")]
		[Address(RVA = "0x3D42680", Offset = "0x3D42680", VA = "0x3D42680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EE")]
	internal bool IsCancellationRequested
	{
		[Token(Token = "0x6001414")]
		[Address(RVA = "0x3D426A0", Offset = "0x3D426A0", VA = "0x3D426A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	internal CancellationToken CancellationToken
	{
		[Token(Token = "0x6001417")]
		[Address(RVA = "0x3D3E100", Offset = "0x3D3E100", VA = "0x3D3E100")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001F0")]
	internal bool IsCancellationAcknowledged
	{
		[Token(Token = "0x6001418")]
		[Address(RVA = "0x3D42800", Offset = "0x3D42800", VA = "0x3D42800")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F1")]
	public bool IsCompleted
	{
		[Token(Token = "0x6001419")]
		[Address(RVA = "0x3D3E3D0", Offset = "0x3D3E3D0", VA = "0x3D3E3D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x600141B")]
		[Address(RVA = "0x3D3F3F0", Offset = "0x3D3F3F0", VA = "0x3D3F3F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F3")]
	public TaskCreationOptions CreationOptions
	{
		[Token(Token = "0x600141C")]
		[Address(RVA = "0x3D40930", Offset = "0x3D40930", VA = "0x3D40930")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001F4")]
	private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
	{
		[Token(Token = "0x600141D")]
		[Address(RVA = "0x3D42830", Offset = "0x3D42830", VA = "0x3D42830", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	public object AsyncState
	{
		[Token(Token = "0x600141E")]
		[Address(RVA = "0x3D42AA0", Offset = "0x3D42AA0", VA = "0x3D42AA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F6")]
	private bool System_002EIAsyncResult_002ECompletedSynchronously
	{
		[Token(Token = "0x600141F")]
		[Address(RVA = "0x3D42AB0", Offset = "0x3D42AB0", VA = "0x3D42AB0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F7")]
	internal TaskScheduler ExecutingTaskScheduler
	{
		[Token(Token = "0x6001420")]
		[Address(RVA = "0x3D42AC0", Offset = "0x3D42AC0", VA = "0x3D42AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F8")]
	public static TaskFactory Factory
	{
		[Token(Token = "0x6001421")]
		[Address(RVA = "0x3D42AD0", Offset = "0x3D42AD0", VA = "0x3D42AD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F9")]
	public static Task CompletedTask
	{
		[Token(Token = "0x6001422")]
		[Address(RVA = "0x3D42B40", Offset = "0x3D42B40", VA = "0x3D42B40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FA")]
	internal ManualResetEventSlim CompletedEvent
	{
		[Token(Token = "0x6001423")]
		[Address(RVA = "0x3D428C0", Offset = "0x3D428C0", VA = "0x3D428C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FB")]
	internal bool ExceptionRecorded
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x3D42BB0", Offset = "0x3D42BB0", VA = "0x3D42BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FC")]
	public bool IsFaulted
	{
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x3D423E0", Offset = "0x3D423E0", VA = "0x3D423E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FD")]
	internal ExecutionContext CapturedContext
	{
		[Token(Token = "0x6001426")]
		[Address(RVA = "0x3D42C20", Offset = "0x3D42C20", VA = "0x3D42C20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x3D40E30", Offset = "0x3D40E30", VA = "0x3D40E30")]
		set
		{
		}
	}

	[Token(Token = "0x170001FE")]
	internal bool IsExceptionObservedByParent
	{
		[Token(Token = "0x6001432")]
		[Address(RVA = "0x3D438B0", Offset = "0x3D438B0", VA = "0x3D438B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FF")]
	internal bool IsDelegateInvoked
	{
		[Token(Token = "0x6001433")]
		[Address(RVA = "0x3D438D0", Offset = "0x3D438D0", VA = "0x3D438D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x3D40410", Offset = "0x3D40410", VA = "0x3D40410")]
	internal Task(bool canceled, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x3D40500", Offset = "0x3D40500", VA = "0x3D40500")]
	internal Task()
	{
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x3D40520", Offset = "0x3D40520", VA = "0x3D40520")]
	internal Task(object state, TaskCreationOptions creationOptions, bool promiseStyle)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x3D40840", Offset = "0x3D40840", VA = "0x3D40840")]
	public Task(Action action, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x3D40860", Offset = "0x3D40860", VA = "0x3D40860")]
	internal Task(Delegate action, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x3D40650", Offset = "0x3D40650", VA = "0x3D40650")]
	internal void TaskConstructorCore(Delegate action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x3D40A50", Offset = "0x3D40A50", VA = "0x3D40A50")]
	private void AssignCancellationToken(CancellationToken cancellationToken, Task antecedent, System.Threading.Tasks.TaskContinuation continuation)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x3D41270", Offset = "0x3D41270", VA = "0x3D41270")]
	private static void TaskCancelCallback(object o)
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x3D3FB60", Offset = "0x3D3FB60", VA = "0x3D3FB60")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord)
	{
		return default(bool);
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x3D3EFE0", Offset = "0x3D3EFE0", VA = "0x3D3EFE0")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord, object cancellationException)
	{
		return default(bool);
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x3D3FBB0", Offset = "0x3D3FBB0", VA = "0x3D3FBB0")]
	internal bool TrySetException(object exceptionObject)
	{
		return default(bool);
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x3D41A00", Offset = "0x3D41A00", VA = "0x3D41A00")]
	internal static TaskCreationOptions OptionsMethod(int flags)
	{
		return default(TaskCreationOptions);
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x3D41600", Offset = "0x3D41600", VA = "0x3D41600")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits)
	{
		return default(bool);
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x3D41A10", Offset = "0x3D41A10", VA = "0x3D41A10")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits, ref int oldFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x3D41AE0", Offset = "0x3D41AE0", VA = "0x3D41AE0")]
	internal void SetNotificationForWaitCompletion(bool enabled)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x3D41BD0", Offset = "0x3D41BD0", VA = "0x3D41BD0")]
	internal bool NotifyDebuggerOfWaitCompletionIfNecessary()
	{
		return default(bool);
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x3D41C50", Offset = "0x3D41C50", VA = "0x3D41C50")]
	internal static bool AnyTaskRequiresNotifyDebuggerOfWaitCompletion(Task[] tasks)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)72)]
	[Token(Token = "0x6001408")]
	[Address(RVA = "0x3D41C40", Offset = "0x3D41C40", VA = "0x3D41C40")]
	private void NotifyDebuggerOfWaitCompletion()
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x3D41D30", Offset = "0x3D41D30", VA = "0x3D41D30")]
	internal bool MarkStarted()
	{
		return default(bool);
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x3D40980", Offset = "0x3D40980", VA = "0x3D40980")]
	internal void AddNewChild()
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x3D411C0", Offset = "0x3D411C0", VA = "0x3D411C0")]
	internal void DisregardChild()
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x3D41D40", Offset = "0x3D41D40", VA = "0x3D41D40")]
	internal static Task InternalStartNew(Task creatingTask, Delegate action, object state, CancellationToken cancellationToken, TaskScheduler scheduler, TaskCreationOptions options, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x3D42220", Offset = "0x3D42220", VA = "0x3D42220")]
	internal static Task InternalCurrentIfAttached(TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x3D40EF0", Offset = "0x3D40EF0", VA = "0x3D40EF0")]
	internal ContingentProperties EnsureContingentPropertiesInitialized(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x3D42720", Offset = "0x3D42720", VA = "0x3D42720")]
	private ContingentProperties EnsureContingentPropertiesInitializedCore(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x3D42820", Offset = "0x3D42820", VA = "0x3D42820")]
	private static bool IsCompletedMethod(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001428")]
	[Address(RVA = "0x3D42C90", Offset = "0x3D42C90", VA = "0x3D42C90", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001429")]
	[Address(RVA = "0x3D42D00", Offset = "0x3D42D00", VA = "0x3D42D00", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600142A")]
	[Address(RVA = "0x3D41E40", Offset = "0x3D41E40", VA = "0x3D41E40")]
	internal void ScheduleAndStart(bool needsProtection)
	{
	}

	[Token(Token = "0x600142B")]
	[Address(RVA = "0x3D41850", Offset = "0x3D41850", VA = "0x3D41850")]
	internal void AddException(object exceptionObject)
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x3D42F00", Offset = "0x3D42F00", VA = "0x3D42F00")]
	internal void AddException(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x3D42400", Offset = "0x3D42400", VA = "0x3D42400")]
	private AggregateException GetExceptions(bool includeTaskCanceledExceptions)
	{
		return null;
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x3D43460", Offset = "0x3D43460", VA = "0x3D43460")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x3D436D0", Offset = "0x3D436D0", VA = "0x3D436D0")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x3D43700", Offset = "0x3D43700", VA = "0x3D43700")]
	internal void ThrowIfExceptional(bool includeTaskCanceledExceptions)
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x3D43740", Offset = "0x3D43740", VA = "0x3D43740")]
	internal void UpdateExceptionObservedStatus()
	{
	}

	[Token(Token = "0x6001434")]
	[Address(RVA = "0x3D41860", Offset = "0x3D41860", VA = "0x3D41860")]
	internal void Finish(bool bUserDelegateExecuted)
	{
	}

	[Token(Token = "0x6001435")]
	[Address(RVA = "0x3D438F0", Offset = "0x3D438F0", VA = "0x3D438F0")]
	internal void FinishStageTwo()
	{
	}

	[Token(Token = "0x6001436")]
	[Address(RVA = "0x3D44270", Offset = "0x3D44270", VA = "0x3D44270")]
	internal void FinishStageThree()
	{
	}

	[Token(Token = "0x6001437")]
	[Address(RVA = "0x3D44310", Offset = "0x3D44310", VA = "0x3D44310")]
	internal void ProcessChildCompletion(Task childTask)
	{
	}

	[Token(Token = "0x6001438")]
	[Address(RVA = "0x3D43C70", Offset = "0x3D43C70", VA = "0x3D43C70")]
	internal void AddExceptionsFromChildren()
	{
	}

	[Token(Token = "0x6001439")]
	[Address(RVA = "0x3D44D80", Offset = "0x3D44D80", VA = "0x3D44D80")]
	private void Execute()
	{
	}

	[Token(Token = "0x600143A")]
	[Address(RVA = "0x3D44F70", Offset = "0x3D44F70", VA = "0x3D44F70", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x3D44F80", Offset = "0x3D44F80", VA = "0x3D44F80")]
	internal bool ExecuteEntry(bool bPreventDoubleExecution)
	{
		return default(bool);
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x3D45360", Offset = "0x3D45360", VA = "0x3D45360")]
	private static void ExecutionContextCallback(object obj)
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x3D453C0", Offset = "0x3D453C0", VA = "0x3D453C0", Slot = "13")]
	internal virtual void InnerInvoke()
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x3D44E20", Offset = "0x3D44E20", VA = "0x3D44E20")]
	private void HandleException(Exception unhandledException)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x3D3E680", Offset = "0x3D3E680", VA = "0x3D3E680")]
	public TaskAwaiter GetAwaiter()
	{
		return default(TaskAwaiter);
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x3D3E6B0", Offset = "0x3D3E6B0", VA = "0x3D3E6B0")]
	public ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable);
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x3D45470", Offset = "0x3D45470", VA = "0x3D45470")]
	internal void SetContinuationForAwait(Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x3D45AD0", Offset = "0x3D45AD0", VA = "0x3D45AD0")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x3D45AE0", Offset = "0x3D45AE0", VA = "0x3D45AE0")]
	public void Wait()
	{
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x3D45C80", Offset = "0x3D45C80", VA = "0x3D45C80")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x3D45AF0", Offset = "0x3D45AF0", VA = "0x3D45AF0")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001446")]
	[Address(RVA = "0x3D46080", Offset = "0x3D46080", VA = "0x3D46080")]
	private bool WrappedTryRunInline()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x6001447")]
	[Address(RVA = "0x3D45C90", Offset = "0x3D45C90", VA = "0x3D45C90")]
	internal bool InternalWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x3D46420", Offset = "0x3D46420", VA = "0x3D46420")]
	private bool SpinThenBlockingWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x3D466A0", Offset = "0x3D466A0", VA = "0x3D466A0")]
	private bool SpinWait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x3D40F70", Offset = "0x3D40F70", VA = "0x3D40F70")]
	internal bool InternalCancel(bool bCancelNonExecutingOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x3D46920", Offset = "0x3D46920", VA = "0x3D46920")]
	internal void RecordInternalCancellationRequest()
	{
	}

	[Token(Token = "0x600144C")]
	[Address(RVA = "0x3D469D0", Offset = "0x3D469D0", VA = "0x3D469D0")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord)
	{
	}

	[Token(Token = "0x600144D")]
	[Address(RVA = "0x3D416C0", Offset = "0x3D416C0", VA = "0x3D416C0")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord, object cancellationException)
	{
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x3D41700", Offset = "0x3D41700", VA = "0x3D41700")]
	internal void CancellationCleanupLogic()
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x3D45440", Offset = "0x3D45440", VA = "0x3D45440")]
	private void SetCancellationAcknowledged()
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x3D444F0", Offset = "0x3D444F0", VA = "0x3D444F0")]
	internal void FinishContinuations()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001451")]
	[Address(RVA = "0x3D46C70", Offset = "0x3D46C70", VA = "0x3D46C70")]
	private void LogFinishCompletionNotification()
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x3D46CB0", Offset = "0x3D46CB0", VA = "0x3D46CB0")]
	public Task ContinueWith(Action<Task> continuationAction)
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x3D46F50", Offset = "0x3D46F50", VA = "0x3D46F50")]
	public Task ContinueWith(Action<Task> continuationAction, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001454")]
	[Address(RVA = "0x3D46DE0", Offset = "0x3D46DE0", VA = "0x3D46DE0")]
	private Task ContinueWith(Action<Task> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001455")]
	[Address(RVA = "0x3D473B0", Offset = "0x3D473B0", VA = "0x3D473B0")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x3D47540", Offset = "0x3D47540", VA = "0x3D47540")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001457")]
	[Address(RVA = "0x3D473C0", Offset = "0x3D473C0", VA = "0x3D473C0")]
	private Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001458")]
	[Address(RVA = "0x3D46F60", Offset = "0x3D46F60", VA = "0x3D46F60")]
	internal static void CreationOptionsFromContinuationOptions(TaskContinuationOptions continuationOptions, out TaskCreationOptions creationOptions, out System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x6001459")]
	[Address(RVA = "0x3D471B0", Offset = "0x3D471B0", VA = "0x3D471B0")]
	internal void ContinueWithCore(Task continuationTask, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions options)
	{
	}

	[Token(Token = "0x600145A")]
	[Address(RVA = "0x3D476C0", Offset = "0x3D476C0", VA = "0x3D476C0")]
	internal void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action)
	{
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x3D46860", Offset = "0x3D46860", VA = "0x3D46860")]
	private void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action, bool addBeforeOthers)
	{
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x3D476D0", Offset = "0x3D476D0", VA = "0x3D476D0")]
	private bool AddTaskContinuationComplex(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x3D45920", Offset = "0x3D45920", VA = "0x3D45920")]
	private bool AddTaskContinuation(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x3D41360", Offset = "0x3D41360", VA = "0x3D41360")]
	internal void RemoveContinuation(object continuationObject)
	{
	}

	[Token(Token = "0x600145F")]
	public static Task<TResult> FromResult<TResult>(TResult result)
	{
		return null;
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x3D3F040", Offset = "0x3D3F040", VA = "0x3D3F040")]
	public static Task FromException(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x6001461")]
	public static Task<TResult> FromException<TResult>(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x3D47AA0", Offset = "0x3D47AA0", VA = "0x3D47AA0")]
	internal static Task FromCancellation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x3D3F6A0", Offset = "0x3D3F6A0", VA = "0x3D3F6A0")]
	public static Task FromCanceled(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001464")]
	internal static Task<TResult> FromCancellation<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001465")]
	public static Task<TResult> FromCanceled<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001466")]
	internal static Task<TResult> FromCancellation<TResult>(OperationCanceledException exception)
	{
		return null;
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x3D47B70", Offset = "0x3D47B70", VA = "0x3D47B70")]
	public static Task Run(Action action)
	{
		return null;
	}

	[Token(Token = "0x6001468")]
	public static Task<TResult> Run<TResult>(Func<TResult> function)
	{
		return null;
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x3D47C80", Offset = "0x3D47C80", VA = "0x3D47C80")]
	public static Task Run(Func<Task> function)
	{
		return null;
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x3D47CE0", Offset = "0x3D47CE0", VA = "0x3D47CE0")]
	public static Task Run(Func<Task> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600146B")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function)
	{
		return null;
	}

	[Token(Token = "0x600146C")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x3D47F60", Offset = "0x3D47F60", VA = "0x3D47F60")]
	public static Task Delay(int millisecondsDelay)
	{
		return null;
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x3D47FC0", Offset = "0x3D47FC0", VA = "0x3D47FC0")]
	public static Task Delay(int millisecondsDelay, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x3D48560", Offset = "0x3D48560", VA = "0x3D48560")]
	public static Task WhenAll(IEnumerable<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x3D48F10", Offset = "0x3D48F10", VA = "0x3D48F10")]
	public static Task WhenAll(params Task[] tasks)
	{
		return null;
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x3D490F0", Offset = "0x3D490F0", VA = "0x3D490F0")]
	private static Task InternalWhenAll(Task[] tasks)
	{
		return null;
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x3D493F0", Offset = "0x3D493F0", VA = "0x3D493F0")]
	public static Task<Task> WhenAny(params Task[] tasks)
	{
		return null;
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x3D49900", Offset = "0x3D49900", VA = "0x3D49900")]
	public static Task<Task> WhenAny(IEnumerable<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x3D49DF0", Offset = "0x3D49DF0", VA = "0x3D49DF0")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool AddToActiveTasks(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x3D49F60", Offset = "0x3D49F60", VA = "0x3D49F60")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void RemoveFromActiveTasks(int taskId)
	{
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x3D4A0A0", Offset = "0x3D4A0A0", VA = "0x3D4A0A0", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x3D45100", Offset = "0x3D45100", VA = "0x3D45100")]
	private void ExecuteWithThreadLocal(ref Task currentTaskSlot)
	{
	}
}
