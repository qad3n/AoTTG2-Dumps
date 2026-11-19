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

[Token(Token = "0x200023C")]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}, Result = {DebuggerDisplayResultDescription}")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_FutureDebugView<>))]
public class Task<TResult> : Task
{
	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x0")]
	internal TResult m_result;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x0")]
	private static TaskFactory<TResult> s_defaultFactory;

	[Token(Token = "0x170001E4")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public TResult Result
	{
		[Token(Token = "0x600141A")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E5")]
	internal TResult ResultOnSuccess
	{
		[Token(Token = "0x600141B")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E6")]
	public new static TaskFactory<TResult> Factory
	{
		[Token(Token = "0x600141D")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600140E")]
	internal Task()
	{
	}

	[Token(Token = "0x600140F")]
	internal Task(object state, TaskCreationOptions options)
	{
	}

	[Token(Token = "0x6001410")]
	internal Task(TResult result)
	{
	}

	[Token(Token = "0x6001411")]
	internal Task(bool canceled, TResult result, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x6001412")]
	public Task(Func<TResult> function, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6001413")]
	public Task(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x6001414")]
	internal Task(Func<TResult> valueSelector, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001415")]
	internal Task(Delegate valueSelector, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001416")]
	internal static Task<TResult> StartNew(Task parent, Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001417")]
	internal static Task<TResult> StartNew(Task parent, Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001418")]
	internal bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	internal void DangerousSetResult(TResult result)
	{
	}

	[Token(Token = "0x600141C")]
	internal TResult GetResultCore(bool waitCompletionNotification)
	{
		return (TResult)null;
	}

	[Token(Token = "0x600141E")]
	internal override void InnerInvoke()
	{
	}

	[Token(Token = "0x600141F")]
	public new TaskAwaiter<TResult> GetAwaiter()
	{
		return default(TaskAwaiter<TResult>);
	}

	[Token(Token = "0x6001420")]
	public new ConfiguredTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable<TResult>);
	}

	[Token(Token = "0x6001421")]
	public Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001422")]
	internal Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001423")]
	public Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001424")]
	internal Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001425")]
	public Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001426")]
	internal Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}
}
[Token(Token = "0x2000244")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_TaskDebugView))]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}")]
public class Task : System.Threading.IThreadPoolWorkItem, IAsyncResult, IDisposable
{
	[Token(Token = "0x2000245")]
	internal class ContingentProperties
	{
		[Token(Token = "0x4000A56")]
		[FieldOffset(Offset = "0x10")]
		internal ExecutionContext m_capturedContext;

		[Token(Token = "0x4000A57")]
		[FieldOffset(Offset = "0x18")]
		internal ManualResetEventSlim m_completionEvent;

		[Token(Token = "0x4000A58")]
		[FieldOffset(Offset = "0x20")]
		internal System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder;

		[Token(Token = "0x4000A59")]
		[FieldOffset(Offset = "0x28")]
		internal CancellationToken m_cancellationToken;

		[Token(Token = "0x4000A5A")]
		[FieldOffset(Offset = "0x30")]
		internal object m_cancellationRegistration;

		[Token(Token = "0x4000A5B")]
		[FieldOffset(Offset = "0x38")]
		internal int m_internalCancellationRequested;

		[Token(Token = "0x4000A5C")]
		[FieldOffset(Offset = "0x3C")]
		internal int m_completionCountdown;

		[Token(Token = "0x4000A5D")]
		[FieldOffset(Offset = "0x40")]
		internal System.Collections.Generic.LowLevelListWithIList<Task> m_exceptionalChildren;

		[Token(Token = "0x60014C0")]
		[Address(RVA = "0x55464C0", Offset = "0x55454C0", VA = "0x55464C0")]
		internal void SetCompleted()
		{
		}

		[Token(Token = "0x60014C1")]
		[Address(RVA = "0x55464E0", Offset = "0x55454E0", VA = "0x55464E0")]
		internal void UnregisterCancellationCallback()
		{
		}

		[Token(Token = "0x60014C2")]
		[Address(RVA = "0x5542BE0", Offset = "0x5541BE0", VA = "0x5542BE0")]
		public ContingentProperties()
		{
		}
	}

	[Token(Token = "0x2000246")]
	private sealed class SetOnInvokeMres : ManualResetEventSlim, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x17000203")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x60014C5")]
			[Address(RVA = "0x554B8B0", Offset = "0x554A8B0", VA = "0x554B8B0", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60014C3")]
		[Address(RVA = "0x55488A0", Offset = "0x55478A0", VA = "0x55488A0")]
		internal SetOnInvokeMres()
		{
		}

		[Token(Token = "0x60014C4")]
		[Address(RVA = "0x554B8A0", Offset = "0x554A8A0", VA = "0x554B8A0", Slot = "6")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x2000247")]
	private sealed class DelayPromise : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000A5E")]
		[FieldOffset(Offset = "0x58")]
		internal readonly CancellationToken Token;

		[Token(Token = "0x4000A5F")]
		[FieldOffset(Offset = "0x60")]
		internal CancellationTokenRegistration Registration;

		[Token(Token = "0x4000A60")]
		[FieldOffset(Offset = "0x78")]
		internal Timer Timer;

		[Token(Token = "0x60014C6")]
		[Address(RVA = "0x554AAE0", Offset = "0x5549AE0", VA = "0x554AAE0")]
		internal DelayPromise(CancellationToken token)
		{
		}

		[Token(Token = "0x60014C7")]
		[Address(RVA = "0x554B8C0", Offset = "0x554A8C0", VA = "0x554B8C0")]
		internal void Complete()
		{
		}
	}

	[Token(Token = "0x4000A40")]
	[FieldOffset(Offset = "0x0")]
	internal static int s_taskIdCounter;

	[Token(Token = "0x4000A41")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskId;

	[Token(Token = "0x4000A42")]
	[FieldOffset(Offset = "0x18")]
	internal Delegate m_action;

	[Token(Token = "0x4000A43")]
	[FieldOffset(Offset = "0x20")]
	internal object m_stateObject;

	[Token(Token = "0x4000A44")]
	[FieldOffset(Offset = "0x28")]
	internal TaskScheduler m_taskScheduler;

	[Token(Token = "0x4000A45")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Task m_parent;

	[Token(Token = "0x4000A46")]
	[FieldOffset(Offset = "0x38")]
	internal int m_stateFlags;

	[Token(Token = "0x4000A47")]
	[FieldOffset(Offset = "0x40")]
	private object m_continuationObject;

	[Token(Token = "0x4000A48")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_taskCompletionSentinel;

	[Token(Token = "0x4000A49")]
	[FieldOffset(Offset = "0x10")]
	internal static bool s_asyncDebuggingEnabled;

	[Token(Token = "0x4000A4A")]
	[FieldOffset(Offset = "0x48")]
	internal ContingentProperties m_contingentProperties;

	[Token(Token = "0x4000A4B")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Action<object> s_taskCancelCallback;

	[Token(Token = "0x4000A4C")]
	[ThreadStatic]
	internal static Task t_currentTask;

	[Token(Token = "0x4000A4D")]
	[ThreadStatic]
	private static System.Threading.Tasks.StackGuard t_stackGuard;

	[Token(Token = "0x4000A4E")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Func<ContingentProperties> s_createContingentProperties;

	[Token(Token = "0x4000A51")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Predicate<Task> s_IsExceptionObservedByParentPredicate;

	[Token(Token = "0x4000A52")]
	[FieldOffset(Offset = "0x40")]
	private static ContextCallback s_ecCallback;

	[Token(Token = "0x4000A53")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Predicate<object> s_IsTaskContinuationNullPredicate;

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<int, Task> s_currentActiveTasks;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x58")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E7")]
	internal TaskCreationOptions Options
	{
		[Token(Token = "0x6001446")]
		[Address(RVA = "0x5543560", Offset = "0x5542560", VA = "0x5543560")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001E8")]
	internal bool IsWaitNotificationEnabledOrNotRanToCompletion
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600144C")]
		[Address(RVA = "0x55441F0", Offset = "0x55431F0", VA = "0x55441F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E9")]
	internal virtual bool ShouldNotifyDebuggerOfWaitCompletion
	{
		[Token(Token = "0x600144D")]
		[Address(RVA = "0x5544210", Offset = "0x5543210", VA = "0x5544210", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	internal bool IsWaitNotificationEnabled
	{
		[Token(Token = "0x600144E")]
		[Address(RVA = "0x55441C0", Offset = "0x55431C0", VA = "0x55441C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EB")]
	public int Id
	{
		[Token(Token = "0x6001454")]
		[Address(RVA = "0x55427D0", Offset = "0x55417D0", VA = "0x55427D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EC")]
	internal static Task InternalCurrent
	{
		[Token(Token = "0x6001455")]
		[Address(RVA = "0x55445A0", Offset = "0x55435A0", VA = "0x55445A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001ED")]
	internal static System.Threading.Tasks.StackGuard CurrentStackGuard
	{
		[Token(Token = "0x6001457")]
		[Address(RVA = "0x55446A0", Offset = "0x55436A0", VA = "0x55446A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EE")]
	public AggregateException Exception
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x5544790", Offset = "0x5543790", VA = "0x5544790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EF")]
	public TaskStatus Status
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x55449E0", Offset = "0x55439E0", VA = "0x55449E0")]
		get
		{
			return default(TaskStatus);
		}
	}

	[Token(Token = "0x170001F0")]
	public bool IsCanceled
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x5544A50", Offset = "0x5543A50", VA = "0x5544A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F1")]
	internal bool IsCancellationRequested
	{
		[Token(Token = "0x600145B")]
		[Address(RVA = "0x5544A70", Offset = "0x5543A70", VA = "0x5544A70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	internal CancellationToken CancellationToken
	{
		[Token(Token = "0x600145E")]
		[Address(RVA = "0x55409C0", Offset = "0x553F9C0", VA = "0x55409C0")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001F3")]
	internal bool IsCancellationAcknowledged
	{
		[Token(Token = "0x600145F")]
		[Address(RVA = "0x5544BD0", Offset = "0x5543BD0", VA = "0x5544BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F4")]
	public bool IsCompleted
	{
		[Token(Token = "0x6001460")]
		[Address(RVA = "0x5540C80", Offset = "0x553FC80", VA = "0x5540C80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F5")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x6001462")]
		[Address(RVA = "0x5541BF0", Offset = "0x5540BF0", VA = "0x5541BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F6")]
	public TaskCreationOptions CreationOptions
	{
		[Token(Token = "0x6001463")]
		[Address(RVA = "0x5543030", Offset = "0x5542030", VA = "0x5543030")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001F7")]
	private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
	{
		[Token(Token = "0x6001464")]
		[Address(RVA = "0x5544C00", Offset = "0x5543C00", VA = "0x5544C00", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F8")]
	public object AsyncState
	{
		[Token(Token = "0x6001465")]
		[Address(RVA = "0x5544E70", Offset = "0x5543E70", VA = "0x5544E70", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F9")]
	private bool System_002EIAsyncResult_002ECompletedSynchronously
	{
		[Token(Token = "0x6001466")]
		[Address(RVA = "0x5544E80", Offset = "0x5543E80", VA = "0x5544E80", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FA")]
	internal TaskScheduler ExecutingTaskScheduler
	{
		[Token(Token = "0x6001467")]
		[Address(RVA = "0x5544E90", Offset = "0x5543E90", VA = "0x5544E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FB")]
	public static TaskFactory Factory
	{
		[Token(Token = "0x6001468")]
		[Address(RVA = "0x5544EA0", Offset = "0x5543EA0", VA = "0x5544EA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FC")]
	public static Task CompletedTask
	{
		[Token(Token = "0x6001469")]
		[Address(RVA = "0x5544F10", Offset = "0x5543F10", VA = "0x5544F10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	internal ManualResetEventSlim CompletedEvent
	{
		[Token(Token = "0x600146A")]
		[Address(RVA = "0x5544C90", Offset = "0x5543C90", VA = "0x5544C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	internal bool ExceptionRecorded
	{
		[Token(Token = "0x600146B")]
		[Address(RVA = "0x5544F80", Offset = "0x5543F80", VA = "0x5544F80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FF")]
	public bool IsFaulted
	{
		[Token(Token = "0x600146C")]
		[Address(RVA = "0x55447C0", Offset = "0x55437C0", VA = "0x55447C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	internal ExecutionContext CapturedContext
	{
		[Token(Token = "0x600146D")]
		[Address(RVA = "0x5544FF0", Offset = "0x5543FF0", VA = "0x5544FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600146E")]
		[Address(RVA = "0x5543470", Offset = "0x5542470", VA = "0x5543470")]
		set
		{
		}
	}

	[Token(Token = "0x17000201")]
	internal bool IsExceptionObservedByParent
	{
		[Token(Token = "0x6001479")]
		[Address(RVA = "0x5545C60", Offset = "0x5544C60", VA = "0x5545C60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000202")]
	internal bool IsDelegateInvoked
	{
		[Token(Token = "0x600147A")]
		[Address(RVA = "0x5545C80", Offset = "0x5544C80", VA = "0x5545C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600143B")]
	[Address(RVA = "0x5542B20", Offset = "0x5541B20", VA = "0x5542B20")]
	internal Task(bool canceled, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x600143C")]
	[Address(RVA = "0x5542C00", Offset = "0x5541C00", VA = "0x5542C00")]
	internal Task()
	{
	}

	[Token(Token = "0x600143D")]
	[Address(RVA = "0x5542C20", Offset = "0x5541C20", VA = "0x5542C20")]
	internal Task(object state, TaskCreationOptions creationOptions, bool promiseStyle)
	{
	}

	[Token(Token = "0x600143E")]
	[Address(RVA = "0x5542F40", Offset = "0x5541F40", VA = "0x5542F40")]
	public Task(Action action, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600143F")]
	[Address(RVA = "0x5542F60", Offset = "0x5541F60", VA = "0x5542F60")]
	internal Task(Delegate action, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001440")]
	[Address(RVA = "0x5542D50", Offset = "0x5541D50", VA = "0x5542D50")]
	internal void TaskConstructorCore(Delegate action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001441")]
	[Address(RVA = "0x5543150", Offset = "0x5542150", VA = "0x5543150")]
	private void AssignCancellationToken(CancellationToken cancellationToken, Task antecedent, System.Threading.Tasks.TaskContinuation continuation)
	{
	}

	[Token(Token = "0x6001442")]
	[Address(RVA = "0x5543850", Offset = "0x5542850", VA = "0x5543850")]
	private static void TaskCancelCallback(object o)
	{
	}

	[Token(Token = "0x6001443")]
	[Address(RVA = "0x55422F0", Offset = "0x55412F0", VA = "0x55422F0")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord)
	{
		return default(bool);
	}

	[Token(Token = "0x6001444")]
	[Address(RVA = "0x55417E0", Offset = "0x55407E0", VA = "0x55417E0")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord, object cancellationException)
	{
		return default(bool);
	}

	[Token(Token = "0x6001445")]
	[Address(RVA = "0x5542330", Offset = "0x5541330", VA = "0x5542330")]
	internal bool TrySetException(object exceptionObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001447")]
	[Address(RVA = "0x5543FA0", Offset = "0x5542FA0", VA = "0x5543FA0")]
	internal static TaskCreationOptions OptionsMethod(int flags)
	{
		return default(TaskCreationOptions);
	}

	[Token(Token = "0x6001448")]
	[Address(RVA = "0x5543BA0", Offset = "0x5542BA0", VA = "0x5543BA0")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits)
	{
		return default(bool);
	}

	[Token(Token = "0x6001449")]
	[Address(RVA = "0x5543FB0", Offset = "0x5542FB0", VA = "0x5543FB0")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits, ref int oldFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x600144A")]
	[Address(RVA = "0x5544080", Offset = "0x5543080", VA = "0x5544080")]
	internal void SetNotificationForWaitCompletion(bool enabled)
	{
	}

	[Token(Token = "0x600144B")]
	[Address(RVA = "0x5544170", Offset = "0x5543170", VA = "0x5544170")]
	internal bool NotifyDebuggerOfWaitCompletionIfNecessary()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)72)]
	[Token(Token = "0x600144F")]
	[Address(RVA = "0x55441E0", Offset = "0x55431E0", VA = "0x55441E0")]
	private void NotifyDebuggerOfWaitCompletion()
	{
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x5544230", Offset = "0x5543230", VA = "0x5544230")]
	internal bool MarkStarted()
	{
		return default(bool);
	}

	[Token(Token = "0x6001451")]
	[Address(RVA = "0x5543080", Offset = "0x5542080", VA = "0x5543080")]
	internal void AddNewChild()
	{
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x55437A0", Offset = "0x55427A0", VA = "0x55437A0")]
	internal void DisregardChild()
	{
	}

	[Token(Token = "0x6001453")]
	[Address(RVA = "0x5544240", Offset = "0x5543240", VA = "0x5544240")]
	internal static Task InternalStartNew(Task creatingTask, Delegate action, object state, CancellationToken cancellationToken, TaskScheduler scheduler, TaskCreationOptions options, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
		return null;
	}

	[Token(Token = "0x6001456")]
	[Address(RVA = "0x5544600", Offset = "0x5543600", VA = "0x5544600")]
	internal static Task InternalCurrentIfAttached(TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x5543530", Offset = "0x5542530", VA = "0x5543530")]
	internal ContingentProperties EnsureContingentPropertiesInitialized(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x600145D")]
	[Address(RVA = "0x5544AF0", Offset = "0x5543AF0", VA = "0x5544AF0")]
	private ContingentProperties EnsureContingentPropertiesInitializedCore(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x6001461")]
	[Address(RVA = "0x5544BF0", Offset = "0x5543BF0", VA = "0x5544BF0")]
	private static bool IsCompletedMethod(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600146F")]
	[Address(RVA = "0x5545060", Offset = "0x5544060", VA = "0x5545060", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x55450D0", Offset = "0x55440D0", VA = "0x55450D0", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x5544340", Offset = "0x5543340", VA = "0x5544340")]
	internal void ScheduleAndStart(bool needsProtection)
	{
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x5543DF0", Offset = "0x5542DF0", VA = "0x5543DF0")]
	internal void AddException(object exceptionObject)
	{
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x55452C0", Offset = "0x55442C0", VA = "0x55452C0")]
	internal void AddException(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x55447E0", Offset = "0x55437E0", VA = "0x55447E0")]
	private AggregateException GetExceptions(bool includeTaskCanceledExceptions)
	{
		return null;
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x5545810", Offset = "0x5544810", VA = "0x5545810")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x5545A90", Offset = "0x5544A90", VA = "0x5545A90")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x5545AC0", Offset = "0x5544AC0", VA = "0x5545AC0")]
	internal void ThrowIfExceptional(bool includeTaskCanceledExceptions)
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x5545B00", Offset = "0x5544B00", VA = "0x5545B00")]
	internal void UpdateExceptionObservedStatus()
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x5543E00", Offset = "0x5542E00", VA = "0x5543E00")]
	internal void Finish(bool bUserDelegateExecuted)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x5545CA0", Offset = "0x5544CA0", VA = "0x5545CA0")]
	internal void FinishStageTwo()
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x55465F0", Offset = "0x55455F0", VA = "0x55465F0")]
	internal void FinishStageThree()
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x5546690", Offset = "0x5545690", VA = "0x5546690")]
	internal void ProcessChildCompletion(Task childTask)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x5546070", Offset = "0x5545070", VA = "0x5546070")]
	internal void AddExceptionsFromChildren()
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x5546EC0", Offset = "0x5545EC0", VA = "0x5546EC0")]
	private void Execute()
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x55470C0", Offset = "0x55460C0", VA = "0x55470C0", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x55470D0", Offset = "0x55460D0", VA = "0x55470D0")]
	internal bool ExecuteEntry(bool bPreventDoubleExecution)
	{
		return default(bool);
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x55474A0", Offset = "0x55464A0", VA = "0x55474A0")]
	private static void ExecutionContextCallback(object obj)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x5547500", Offset = "0x5546500", VA = "0x5547500", Slot = "13")]
	internal virtual void InnerInvoke()
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x5546F70", Offset = "0x5545F70", VA = "0x5546F70")]
	private void HandleException(Exception unhandledException)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x5540F20", Offset = "0x553FF20", VA = "0x5540F20")]
	public TaskAwaiter GetAwaiter()
	{
		return default(TaskAwaiter);
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x5540F50", Offset = "0x553FF50", VA = "0x5540F50")]
	public ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable);
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x55475B0", Offset = "0x55465B0", VA = "0x55475B0")]
	internal void SetContinuationForAwait(Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x5547BE0", Offset = "0x5546BE0", VA = "0x5547BE0")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x5547BF0", Offset = "0x5546BF0", VA = "0x5547BF0")]
	public void Wait()
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x5547D80", Offset = "0x5546D80", VA = "0x5547D80")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x5547C00", Offset = "0x5546C00", VA = "0x5547C00")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x5548170", Offset = "0x5547170", VA = "0x5548170")]
	private bool WrappedTryRunInline()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x600148E")]
	[Address(RVA = "0x5547D90", Offset = "0x5546D90", VA = "0x5547D90")]
	internal bool InternalWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x55484F0", Offset = "0x55474F0", VA = "0x55484F0")]
	private bool SpinThenBlockingWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x5548720", Offset = "0x5547720", VA = "0x5548720")]
	private bool SpinWait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x55435B0", Offset = "0x55425B0", VA = "0x55435B0")]
	internal bool InternalCancel(bool bCancelNonExecutingOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x55489B0", Offset = "0x55479B0", VA = "0x55489B0")]
	internal void RecordInternalCancellationRequest()
	{
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x5548A60", Offset = "0x5547A60", VA = "0x5548A60")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord)
	{
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x5543C60", Offset = "0x5542C60", VA = "0x5543C60")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord, object cancellationException)
	{
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x5543CA0", Offset = "0x5542CA0", VA = "0x5543CA0")]
	internal void CancellationCleanupLogic()
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x5547580", Offset = "0x5546580", VA = "0x5547580")]
	private void SetCancellationAcknowledged()
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x5546870", Offset = "0x5545870", VA = "0x5546870")]
	internal void FinishContinuations()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001498")]
	[Address(RVA = "0x5548CA0", Offset = "0x5547CA0", VA = "0x5548CA0")]
	private void LogFinishCompletionNotification()
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x5548CE0", Offset = "0x5547CE0", VA = "0x5548CE0")]
	public Task ContinueWith(Action<Task> continuationAction)
	{
		return null;
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x5548F80", Offset = "0x5547F80", VA = "0x5548F80")]
	public Task ContinueWith(Action<Task> continuationAction, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x5548E10", Offset = "0x5547E10", VA = "0x5548E10")]
	private Task ContinueWith(Action<Task> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x55493C0", Offset = "0x55483C0", VA = "0x55493C0")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x5549550", Offset = "0x5548550", VA = "0x5549550")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x55493D0", Offset = "0x55483D0", VA = "0x55493D0")]
	private Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x5548F90", Offset = "0x5547F90", VA = "0x5548F90")]
	internal static void CreationOptionsFromContinuationOptions(TaskContinuationOptions continuationOptions, out TaskCreationOptions creationOptions, out System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x55491D0", Offset = "0x55481D0", VA = "0x55491D0")]
	internal void ContinueWithCore(Task continuationTask, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions options)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x55496D0", Offset = "0x55486D0", VA = "0x55496D0")]
	internal void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action)
	{
	}

	[Token(Token = "0x60014A2")]
	[Address(RVA = "0x55488F0", Offset = "0x55478F0", VA = "0x55488F0")]
	private void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action, bool addBeforeOthers)
	{
	}

	[Token(Token = "0x60014A3")]
	[Address(RVA = "0x55496E0", Offset = "0x55486E0", VA = "0x55496E0")]
	private bool AddTaskContinuationComplex(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x5547A30", Offset = "0x5546A30", VA = "0x5547A30")]
	private bool AddTaskContinuation(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x5543940", Offset = "0x5542940", VA = "0x5543940")]
	internal void RemoveContinuation(object continuationObject)
	{
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x5549A00", Offset = "0x5548A00", VA = "0x5549A00")]
	public static int WaitAny(params Task[] tasks)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x5549AB0", Offset = "0x5548AB0", VA = "0x5549AB0")]
	public static int WaitAny(Task[] tasks, int millisecondsTimeout)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x5549B00", Offset = "0x5548B00", VA = "0x5549B00")]
	public static int WaitAny(Task[] tasks, int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(int);
	}

	[Token(Token = "0x60014A9")]
	public static Task<TResult> FromResult<TResult>(TResult result)
	{
		return null;
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x5541840", Offset = "0x5540840", VA = "0x5541840")]
	public static Task FromException(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x60014AB")]
	public static Task<TResult> FromException<TResult>(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x554A160", Offset = "0x5549160", VA = "0x554A160")]
	internal static Task FromCancellation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x5541EA0", Offset = "0x5540EA0", VA = "0x5541EA0")]
	public static Task FromCanceled(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014AE")]
	internal static Task<TResult> FromCancellation<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014AF")]
	public static Task<TResult> FromCanceled<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014B0")]
	internal static Task<TResult> FromCancellation<TResult>(OperationCanceledException exception)
	{
		return null;
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x554A230", Offset = "0x5549230", VA = "0x554A230")]
	public static Task Run(Action action)
	{
		return null;
	}

	[Token(Token = "0x60014B2")]
	public static Task<TResult> Run<TResult>(Func<TResult> function)
	{
		return null;
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x554A340", Offset = "0x5549340", VA = "0x554A340")]
	public static Task Run(Func<Task> function)
	{
		return null;
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x554A3B0", Offset = "0x55493B0", VA = "0x554A3B0")]
	public static Task Run(Func<Task> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function)
	{
		return null;
	}

	[Token(Token = "0x60014B6")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x554A630", Offset = "0x5549630", VA = "0x554A630")]
	public static Task Delay(int millisecondsDelay)
	{
		return null;
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x554A690", Offset = "0x5549690", VA = "0x554A690")]
	public static Task Delay(int millisecondsDelay, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x554AC10", Offset = "0x5549C10", VA = "0x554AC10")]
	public static Task<Task> WhenAny(params Task[] tasks)
	{
		return null;
	}

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x554ADC0", Offset = "0x5549DC0", VA = "0x554ADC0")]
	public static Task<Task> WhenAny(IEnumerable<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x554B220", Offset = "0x554A220", VA = "0x554B220")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool AddToActiveTasks(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x554B370", Offset = "0x554A370", VA = "0x554B370")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void RemoveFromActiveTasks(int taskId)
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x554B4A0", Offset = "0x554A4A0", VA = "0x554B4A0", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x5547250", Offset = "0x5546250", VA = "0x5547250")]
	private void ExecuteWithThreadLocal(ref Task currentTaskSlot)
	{
	}
}
