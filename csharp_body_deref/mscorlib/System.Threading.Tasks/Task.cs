// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.Task
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000264")]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}, Result = {DebuggerDisplayResultDescription}")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_FutureDebugView<>))]
public class Task<TResult> : Task
{
	[Token(Token = "0x4000AC7")]
	[FieldOffset(Offset = "0x0")]
	internal TResult m_result;

	[Token(Token = "0x4000AC8")]
	[FieldOffset(Offset = "0x0")]
	private static TaskFactory<TResult> s_defaultFactory;

	[Token(Token = "0x170001E5")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	public TResult Result
	{
		[Token(Token = "0x6001443")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E6")]
	internal TResult ResultOnSuccess
	{
		[Token(Token = "0x6001444")]
		get
		{
			return (TResult)null;
		}
	}

	[Token(Token = "0x170001E7")]
	public new static TaskFactory<TResult> Factory
	{
		[Token(Token = "0x6001446")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001437")]
	internal Task()
	{
	}

	[Token(Token = "0x6001438")]
	internal Task(object state, TaskCreationOptions options)
	{
	}

	[Token(Token = "0x6001439")]
	internal Task(TResult result)
	{
	}

	[Token(Token = "0x600143A")]
	internal Task(bool canceled, TResult result, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x600143B")]
	public Task(Func<TResult> function, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x600143C")]
	public Task(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x600143D")]
	internal Task(Func<TResult> valueSelector, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x600143E")]
	internal Task(Delegate valueSelector, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x600143F")]
	internal static Task<TResult> StartNew(Task parent, Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001440")]
	internal static Task<TResult> StartNew(Task parent, Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001441")]
	internal bool TrySetResult(TResult result)
	{
		return default(bool);
	}

	[Token(Token = "0x6001442")]
	internal void DangerousSetResult(TResult result)
	{
	}

	[Token(Token = "0x6001445")]
	internal TResult GetResultCore(bool waitCompletionNotification)
	{
		return (TResult)null;
	}

	[Token(Token = "0x6001447")]
	internal override void InnerInvoke()
	{
	}

	[Token(Token = "0x6001448")]
	public new TaskAwaiter<TResult> GetAwaiter()
	{
		return default(TaskAwaiter<TResult>);
	}

	[Token(Token = "0x6001449")]
	public new ConfiguredTaskAwaitable<TResult> ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable<TResult>);
	}

	[Token(Token = "0x600144A")]
	public Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600144B")]
	internal Task ContinueWith(Action<Task<TResult>> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x600144C")]
	public Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600144D")]
	internal Task ContinueWith(Action<Task<TResult>, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x600144E")]
	public Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x600144F")]
	internal Task<TNewResult> ContinueWith<TNewResult>(Func<Task<TResult>, TNewResult> continuationFunction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}
}
[Token(Token = "0x200026C")]
[DebuggerDisplay("Id = {Id}, Status = {Status}, Method = {DebuggerDisplayMethodDescription}")]
[DebuggerTypeProxy(typeof(System.Threading.Tasks.SystemThreadingTasks_TaskDebugView))]
public class Task : System.Threading.IThreadPoolWorkItem, IAsyncResult, IDisposable
{
	[Token(Token = "0x200026D")]
	internal class ContingentProperties
	{
		[Token(Token = "0x4000AF8")]
		[FieldOffset(Offset = "0x10")]
		internal ExecutionContext m_capturedContext;

		[Token(Token = "0x4000AF9")]
		[FieldOffset(Offset = "0x18")]
		internal ManualResetEventSlim m_completionEvent;

		[Token(Token = "0x4000AFA")]
		[FieldOffset(Offset = "0x20")]
		internal System.Threading.Tasks.TaskExceptionHolder m_exceptionsHolder;

		[Token(Token = "0x4000AFB")]
		[FieldOffset(Offset = "0x28")]
		internal CancellationToken m_cancellationToken;

		[Token(Token = "0x4000AFC")]
		[FieldOffset(Offset = "0x30")]
		internal object m_cancellationRegistration;

		[Token(Token = "0x4000AFD")]
		[FieldOffset(Offset = "0x38")]
		internal int m_internalCancellationRequested;

		[Token(Token = "0x4000AFE")]
		[FieldOffset(Offset = "0x3C")]
		internal int m_completionCountdown;

		[Token(Token = "0x4000AFF")]
		[FieldOffset(Offset = "0x40")]
		internal System.Collections.Generic.LowLevelListWithIList<Task> m_exceptionalChildren;

		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x1BAD360", Offset = "0x1BAB960", VA = "0x181BAD360")]
		internal void SetCompleted()
		{
		}

		[Token(Token = "0x60014EA")]
		[Address(RVA = "0x1BAD390", Offset = "0x1BAB990", VA = "0x181BAD390")]
		internal void UnregisterCancellationCallback()
		{
		}

		[Token(Token = "0x60014EB")]
		[Address(RVA = "0x1BAD440", Offset = "0x1BABA40", VA = "0x181BAD440")]
		public ContingentProperties()
		{
		}
	}

	[Token(Token = "0x200026E")]
	private sealed class SetOnInvokeMres : ManualResetEventSlim, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x17000204")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x60014EE")]
			[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x1BB3A00", Offset = "0x1BB2000", VA = "0x181BB3A00")]
		internal SetOnInvokeMres()
		{
		}

		[Token(Token = "0x60014ED")]
		[Address(RVA = "0x1BB39F0", Offset = "0x1BB1FF0", VA = "0x181BB39F0", Slot = "6")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x200026F")]
	private sealed class DelayPromise : Task<System.Threading.Tasks.VoidTaskResult>
	{
		[Token(Token = "0x4000B00")]
		[FieldOffset(Offset = "0x58")]
		internal readonly CancellationToken Token;

		[Token(Token = "0x4000B01")]
		[FieldOffset(Offset = "0x60")]
		internal CancellationTokenRegistration Registration;

		[Token(Token = "0x4000B02")]
		[FieldOffset(Offset = "0x78")]
		internal Timer Timer;

		[Token(Token = "0x60014EF")]
		[Address(RVA = "0x1BAF4E0", Offset = "0x1BADAE0", VA = "0x181BAF4E0")]
		internal DelayPromise(CancellationToken token)
		{
		}

		[Token(Token = "0x60014F0")]
		[Address(RVA = "0x1BAF3D0", Offset = "0x1BAD9D0", VA = "0x181BAF3D0")]
		internal void Complete()
		{
		}
	}

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x0")]
	internal static int s_taskIdCounter;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x10")]
	private int m_taskId;

	[Token(Token = "0x4000AE4")]
	[FieldOffset(Offset = "0x18")]
	internal Delegate m_action;

	[Token(Token = "0x4000AE5")]
	[FieldOffset(Offset = "0x20")]
	internal object m_stateObject;

	[Token(Token = "0x4000AE6")]
	[FieldOffset(Offset = "0x28")]
	internal TaskScheduler m_taskScheduler;

	[Token(Token = "0x4000AE7")]
	[FieldOffset(Offset = "0x30")]
	internal readonly Task m_parent;

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x38")]
	internal int m_stateFlags;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x40")]
	private object m_continuationObject;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_taskCompletionSentinel;

	[Token(Token = "0x4000AEB")]
	[FieldOffset(Offset = "0x10")]
	internal static bool s_asyncDebuggingEnabled;

	[Token(Token = "0x4000AEC")]
	[FieldOffset(Offset = "0x48")]
	internal ContingentProperties m_contingentProperties;

	[Token(Token = "0x4000AED")]
	[FieldOffset(Offset = "0x18")]
	private static readonly Action<object> s_taskCancelCallback;

	[Token(Token = "0x4000AEE")]
	[ThreadStatic]
	internal static Task t_currentTask;

	[Token(Token = "0x4000AEF")]
	[ThreadStatic]
	private static System.Threading.Tasks.StackGuard t_stackGuard;

	[Token(Token = "0x4000AF0")]
	[FieldOffset(Offset = "0x20")]
	private static readonly Func<ContingentProperties> s_createContingentProperties;

	[Token(Token = "0x4000AF3")]
	[FieldOffset(Offset = "0x38")]
	private static readonly Predicate<Task> s_IsExceptionObservedByParentPredicate;

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x40")]
	private static ContextCallback s_ecCallback;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x48")]
	private static readonly Predicate<object> s_IsTaskContinuationNullPredicate;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x50")]
	private static readonly Dictionary<int, Task> s_currentActiveTasks;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x58")]
	private static readonly object s_activeTasksLock;

	[Token(Token = "0x170001E8")]
	internal TaskCreationOptions Options
	{
		[Token(Token = "0x600146F")]
		[Address(RVA = "0x1BBFBE0", Offset = "0x1BBE1E0", VA = "0x181BBFBE0")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001E9")]
	internal bool IsWaitNotificationEnabledOrNotRanToCompletion
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001475")]
		[Address(RVA = "0x1BBFB90", Offset = "0x1BBE190", VA = "0x181BBFB90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	internal virtual bool ShouldNotifyDebuggerOfWaitCompletion
	{
		[Token(Token = "0x6001476")]
		[Address(RVA = "0x1BBFBC0", Offset = "0x1BBE1C0", VA = "0x181BBFBC0", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EB")]
	internal bool IsWaitNotificationEnabled
	{
		[Token(Token = "0x6001477")]
		[Address(RVA = "0x1BBFBC0", Offset = "0x1BBE1C0", VA = "0x181BBFBC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EC")]
	public int Id
	{
		[Token(Token = "0x600147D")]
		[Address(RVA = "0x1BBF8E0", Offset = "0x1BBDEE0", VA = "0x181BBF8E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001ED")]
	internal static Task InternalCurrent
	{
		[Token(Token = "0x600147E")]
		[Address(RVA = "0x1BBF980", Offset = "0x1BBDF80", VA = "0x181BBF980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EE")]
	internal static System.Threading.Tasks.StackGuard CurrentStackGuard
	{
		[Token(Token = "0x6001480")]
		[Address(RVA = "0x1BBF710", Offset = "0x1BBDD10", VA = "0x181BBF710")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001EF")]
	public AggregateException Exception
	{
		[Token(Token = "0x6001481")]
		[Address(RVA = "0x1BBF840", Offset = "0x1BBDE40", VA = "0x181BBF840")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F0")]
	public TaskStatus Status
	{
		[Token(Token = "0x6001482")]
		[Address(RVA = "0x1BBFC30", Offset = "0x1BBE230", VA = "0x181BBFC30")]
		get
		{
			return default(TaskStatus);
		}
	}

	[Token(Token = "0x170001F1")]
	public bool IsCanceled
	{
		[Token(Token = "0x6001483")]
		[Address(RVA = "0x1BBF9D0", Offset = "0x1BBDFD0", VA = "0x181BBF9D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F2")]
	internal bool IsCancellationRequested
	{
		[Token(Token = "0x6001484")]
		[Address(RVA = "0x1BBFA20", Offset = "0x1BBE020", VA = "0x181BBFA20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F3")]
	internal CancellationToken CancellationToken
	{
		[Token(Token = "0x6001487")]
		[Address(RVA = "0x1BBF420", Offset = "0x1BBDA20", VA = "0x181BBF420")]
		get
		{
			return default(CancellationToken);
		}
	}

	[Token(Token = "0x170001F4")]
	internal bool IsCancellationAcknowledged
	{
		[Token(Token = "0x6001488")]
		[Address(RVA = "0x1BBFA00", Offset = "0x1BBE000", VA = "0x181BBFA00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F5")]
	public bool IsCompleted
	{
		[Token(Token = "0x6001489")]
		[Address(RVA = "0x1BBFAD0", Offset = "0x1BBE0D0", VA = "0x181BBFAD0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F6")]
	public bool IsCompletedSuccessfully
	{
		[Token(Token = "0x600148B")]
		[Address(RVA = "0x1BBFAA0", Offset = "0x1BBE0A0", VA = "0x181BBFAA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F7")]
	public TaskCreationOptions CreationOptions
	{
		[Token(Token = "0x600148C")]
		[Address(RVA = "0x1BBF6C0", Offset = "0x1BBDCC0", VA = "0x181BBF6C0")]
		get
		{
			return default(TaskCreationOptions);
		}
	}

	[Token(Token = "0x170001F8")]
	private WaitHandle System_002EIAsyncResult_002EAsyncWaitHandle
	{
		[Token(Token = "0x600148D")]
		[Address(RVA = "0x1BBD600", Offset = "0x1BBBC00", VA = "0x181BBD600", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F9")]
	public object AsyncState
	{
		[Token(Token = "0x600148E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FA")]
	private bool System_002EIAsyncResult_002ECompletedSynchronously
	{
		[Token(Token = "0x600148F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FB")]
	internal TaskScheduler ExecutingTaskScheduler
	{
		[Token(Token = "0x6001490")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FC")]
	public static TaskFactory Factory
	{
		[Token(Token = "0x6001491")]
		[Address(RVA = "0x1BBF890", Offset = "0x1BBDE90", VA = "0x181BBF890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FD")]
	public static Task CompletedTask
	{
		[Token(Token = "0x6001492")]
		[Address(RVA = "0x1BBF670", Offset = "0x1BBDC70", VA = "0x181BBF670")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FE")]
	internal ManualResetEventSlim CompletedEvent
	{
		[Token(Token = "0x6001493")]
		[Address(RVA = "0x1BBF4D0", Offset = "0x1BBDAD0", VA = "0x181BBF4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001FF")]
	internal bool ExceptionRecorded
	{
		[Token(Token = "0x6001494")]
		[Address(RVA = "0x1BBF7D0", Offset = "0x1BBDDD0", VA = "0x181BBF7D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000200")]
	public bool IsFaulted
	{
		[Token(Token = "0x6001495")]
		[Address(RVA = "0x1BBFB70", Offset = "0x1BBE170", VA = "0x181BBFB70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000201")]
	internal ExecutionContext CapturedContext
	{
		[Token(Token = "0x6001496")]
		[Address(RVA = "0x1BBF450", Offset = "0x1BBDA50", VA = "0x181BBF450")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001497")]
		[Address(RVA = "0x1BBFCC0", Offset = "0x1BBE2C0", VA = "0x181BBFCC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000202")]
	internal bool IsExceptionObservedByParent
	{
		[Token(Token = "0x60014A2")]
		[Address(RVA = "0x1BBFB50", Offset = "0x1BBE150", VA = "0x181BBFB50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000203")]
	internal bool IsDelegateInvoked
	{
		[Token(Token = "0x60014A3")]
		[Address(RVA = "0x1BBFB30", Offset = "0x1BBE130", VA = "0x181BBFB30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x1BBF060", Offset = "0x1BBD660", VA = "0x181BBF060")]
	internal Task(bool canceled, TaskCreationOptions creationOptions, CancellationToken ct)
	{
	}

	[Token(Token = "0x6001465")]
	[Address(RVA = "0x1BBF200", Offset = "0x1BBD800", VA = "0x181BBF200")]
	internal Task()
	{
	}

	[Token(Token = "0x6001466")]
	[Address(RVA = "0x1BBF230", Offset = "0x1BBD830", VA = "0x181BBF230")]
	internal Task(object state, TaskCreationOptions creationOptions, bool promiseStyle)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x1BBF370", Offset = "0x1BBD970", VA = "0x181BBF370")]
	public Task(Action action, CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x1BBF120", Offset = "0x1BBD720", VA = "0x181BBF120")]
	internal Task(Delegate action, object state, Task parent, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x1BBD930", Offset = "0x1BBBF30", VA = "0x181BBD930")]
	internal void TaskConstructorCore(Delegate action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x1BB8540", Offset = "0x1BB6B40", VA = "0x181BB8540")]
	private void AssignCancellationToken(CancellationToken cancellationToken, Task antecedent, System.Threading.Tasks.TaskContinuation continuation)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x1BBD830", Offset = "0x1BBBE30", VA = "0x181BBD830")]
	private static void TaskCancelCallback(object o)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x1BBDC50", Offset = "0x1BBC250", VA = "0x181BBDC50")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord)
	{
		return default(bool);
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x1BBDC60", Offset = "0x1BBC260", VA = "0x181BBDC60")]
	internal bool TrySetCanceled(CancellationToken tokenToRecord, object cancellationException)
	{
		return default(bool);
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x1BBDD30", Offset = "0x1BBC330", VA = "0x181BBDD30")]
	internal bool TrySetException(object exceptionObject)
	{
		return default(bool);
	}

	[Token(Token = "0x6001470")]
	[Address(RVA = "0x1A82000", Offset = "0x1A80600", VA = "0x181A82000")]
	internal static TaskCreationOptions OptionsMethod(int flags)
	{
		return default(TaskCreationOptions);
	}

	[Token(Token = "0x6001471")]
	[Address(RVA = "0x1BB88D0", Offset = "0x1BB6ED0", VA = "0x181BB88D0")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits)
	{
		return default(bool);
	}

	[Token(Token = "0x6001472")]
	[Address(RVA = "0x1BB8810", Offset = "0x1BB6E10", VA = "0x181BB8810")]
	internal bool AtomicStateUpdate(int newBits, int illegalBits, ref int oldFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001473")]
	[Address(RVA = "0x1BBD070", Offset = "0x1BBB670", VA = "0x181BBD070")]
	internal void SetNotificationForWaitCompletion(bool enabled)
	{
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x1BBBF60", Offset = "0x1BBA560", VA = "0x181BBBF60")]
	internal bool NotifyDebuggerOfWaitCompletionIfNecessary()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)72)]
	[Token(Token = "0x6001478")]
	[Address(RVA = "0x1BBBFC0", Offset = "0x1BBA5C0", VA = "0x181BBBFC0")]
	private void NotifyDebuggerOfWaitCompletion()
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x1BBBF40", Offset = "0x1BBA540", VA = "0x181BBBF40")]
	internal bool MarkStarted()
	{
		return default(bool);
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x1BB7E80", Offset = "0x1BB6480", VA = "0x181BB7E80")]
	internal void AddNewChild()
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x1BB9CF0", Offset = "0x1BB82F0", VA = "0x181BB9CF0")]
	internal void DisregardChild()
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x1BBB880", Offset = "0x1BB9E80", VA = "0x181BBB880")]
	internal static Task InternalStartNew(Task creatingTask, Delegate action, object state, CancellationToken cancellationToken, TaskScheduler scheduler, TaskCreationOptions options, System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
		return null;
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x1BBB7F0", Offset = "0x1BB9DF0", VA = "0x181BBB7F0")]
	internal static Task InternalCurrentIfAttached(TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x1BB9EA0", Offset = "0x1BB84A0", VA = "0x181BB9EA0")]
	internal ContingentProperties EnsureContingentPropertiesInitialized(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x1BB9DB0", Offset = "0x1BB83B0", VA = "0x181BB9DB0")]
	private ContingentProperties EnsureContingentPropertiesInitializedCore(bool needsProtection)
	{
		return null;
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x1BBBEF0", Offset = "0x1BBA4F0", VA = "0x181BBBEF0")]
	private static bool IsCompletedMethod(int flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x1BB9C90", Offset = "0x1BB8290", VA = "0x181BB9C90", Slot = "10")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x1BB9B20", Offset = "0x1BB8120", VA = "0x181BB9B20", Slot = "12")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x1BBCD10", Offset = "0x1BBB310", VA = "0x181BBCD10")]
	internal void ScheduleAndStart(bool needsProtection)
	{
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x1BB7AA0", Offset = "0x1BB60A0", VA = "0x181BB7AA0")]
	internal void AddException(object exceptionObject)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x1BB7710", Offset = "0x1BB5D10", VA = "0x181BB7710")]
	internal void AddException(object exceptionObject, bool representsCancellation)
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x1BBB2B0", Offset = "0x1BB98B0", VA = "0x181BBB2B0")]
	private AggregateException GetExceptions(bool includeTaskCanceledExceptions)
	{
		return null;
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x1BBB090", Offset = "0x1BB9690", VA = "0x181BBB090")]
	internal ReadOnlyCollection<ExceptionDispatchInfo> GetExceptionDispatchInfos()
	{
		return null;
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x1BBB050", Offset = "0x1BB9650", VA = "0x181BBB050")]
	internal ExceptionDispatchInfo GetCancellationExceptionDispatchInfo()
	{
		return null;
	}

	[Token(Token = "0x60014A0")]
	[Address(RVA = "0x1BBDC00", Offset = "0x1BBC200", VA = "0x181BBDC00")]
	internal void ThrowIfExceptional(bool includeTaskCanceledExceptions)
	{
	}

	[Token(Token = "0x60014A1")]
	[Address(RVA = "0x1BBDE30", Offset = "0x1BBC430", VA = "0x181BBDE30")]
	internal void UpdateExceptionObservedStatus()
	{
	}

	[Token(Token = "0x60014A4")]
	[Address(RVA = "0x1BBAC40", Offset = "0x1BB9240", VA = "0x181BBAC40")]
	internal void Finish(bool bUserDelegateExecuted)
	{
	}

	[Token(Token = "0x60014A5")]
	[Address(RVA = "0x1BBAB00", Offset = "0x1BB9100", VA = "0x181BBAB00")]
	internal void FinishStageTwo()
	{
	}

	[Token(Token = "0x60014A6")]
	[Address(RVA = "0x1BBAA50", Offset = "0x1BB9050", VA = "0x181BBAA50")]
	internal void FinishStageThree()
	{
	}

	[Token(Token = "0x60014A7")]
	[Address(RVA = "0x1BBBFF0", Offset = "0x1BBA5F0", VA = "0x181BBBFF0")]
	internal void ProcessChildCompletion(Task childTask)
	{
	}

	[Token(Token = "0x60014A8")]
	[Address(RVA = "0x1BB7AB0", Offset = "0x1BB60B0", VA = "0x181BB7AB0")]
	internal void AddExceptionsFromChildren()
	{
	}

	[Token(Token = "0x60014A9")]
	[Address(RVA = "0x1BBA380", Offset = "0x1BB8980", VA = "0x181BBA380")]
	private void Execute()
	{
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x1BBD820", Offset = "0x1BBBE20", VA = "0x181BBD820", Slot = "4")]
	private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x1BB9FA0", Offset = "0x1BB85A0", VA = "0x181BB9FA0")]
	internal bool ExecuteEntry(bool bPreventDoubleExecution)
	{
		return default(bool);
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x1BBA3C0", Offset = "0x1BB89C0", VA = "0x181BBA3C0")]
	private static void ExecutionContextCallback(object obj)
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x1BBB5A0", Offset = "0x1BB9BA0", VA = "0x181BBB5A0", Slot = "13")]
	internal virtual void InnerInvoke()
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x1BBB490", Offset = "0x1BB9A90", VA = "0x181BBB490")]
	private void HandleException(Exception unhandledException)
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x1BB49C0", Offset = "0x1BB2FC0", VA = "0x181BB49C0")]
	public TaskAwaiter GetAwaiter()
	{
		return default(TaskAwaiter);
	}

	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x1BB8A50", Offset = "0x1BB7050", VA = "0x181BB8A50")]
	public ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext)
	{
		return default(ConfiguredTaskAwaitable);
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x1BBCEB0", Offset = "0x1BBB4B0", VA = "0x181BBCEB0")]
	internal void SetContinuationForAwait(Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext)
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	public static YieldAwaitable Yield()
	{
		return default(YieldAwaitable);
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x1BBE550", Offset = "0x1BBCB50", VA = "0x181BBE550")]
	public void Wait()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x1BBE540", Offset = "0x1BBCB40", VA = "0x181BBE540")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x1BBE560", Offset = "0x1BBCB60", VA = "0x181BBE560")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x1BBEBB0", Offset = "0x1BBD1B0", VA = "0x181BBEBB0")]
	private bool WrappedTryRunInline()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x1BBBA20", Offset = "0x1BBA020", VA = "0x181BBBA20")]
	internal bool InternalWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x1BBD160", Offset = "0x1BBB760", VA = "0x181BBD160")]
	private bool SpinThenBlockingWait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60014B9")]
	[Address(RVA = "0x1BBD4A0", Offset = "0x1BBBAA0", VA = "0x181BBD4A0")]
	private bool SpinWait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BA")]
	[Address(RVA = "0x1BBB640", Offset = "0x1BB9C40", VA = "0x181BBB640")]
	internal bool InternalCancel(bool bCancelNonExecutingOnly)
	{
		return default(bool);
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x1BBC380", Offset = "0x1BBA980", VA = "0x181BBC380")]
	internal void RecordInternalCancellationRequest()
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x1BBC2F0", Offset = "0x1BBA8F0", VA = "0x181BBC2F0")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord)
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x1BBC230", Offset = "0x1BBA830", VA = "0x181BBC230")]
	internal void RecordInternalCancellationRequest(CancellationToken tokenToRecord, object cancellationException)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x1BB8980", Offset = "0x1BB6F80", VA = "0x181BB8980")]
	internal void CancellationCleanupLogic()
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x1BBCE80", Offset = "0x1BBB480", VA = "0x181BBCE80")]
	private void SetCancellationAcknowledged()
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x1BBA450", Offset = "0x1BB8A50", VA = "0x181BBA450")]
	internal void FinishContinuations()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x1BBBF00", Offset = "0x1BBA500", VA = "0x181BBBF00")]
	private void LogFinishCompletionNotification()
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x1BB8D10", Offset = "0x1BB7310", VA = "0x181BB8D10")]
	public Task ContinueWith(Action<Task> continuationAction)
	{
		return null;
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x1BB90B0", Offset = "0x1BB76B0", VA = "0x181BB90B0")]
	public Task ContinueWith(Action<Task> continuationAction, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x1BB8E10", Offset = "0x1BB7410", VA = "0x181BB8E10")]
	private Task ContinueWith(Action<Task> continuationAction, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x60014C5")]
	[Address(RVA = "0x1BB8CC0", Offset = "0x1BB72C0", VA = "0x181BB8CC0")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014C6")]
	[Address(RVA = "0x1BB8CE0", Offset = "0x1BB72E0", VA = "0x181BB8CE0")]
	public Task ContinueWith(Action<Task, object> continuationAction, object state, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014C7")]
	[Address(RVA = "0x1BB90E0", Offset = "0x1BB76E0", VA = "0x181BB90E0")]
	private Task ContinueWith(Action<Task, object> continuationAction, object state, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions continuationOptions)
	{
		return null;
	}

	[Token(Token = "0x60014C8")]
	[Address(RVA = "0x1BB9380", Offset = "0x1BB7980", VA = "0x181BB9380")]
	internal static void CreationOptionsFromContinuationOptions(TaskContinuationOptions continuationOptions, out TaskCreationOptions creationOptions, out System.Threading.Tasks.InternalTaskOptions internalOptions)
	{
	}

	[Token(Token = "0x60014C9")]
	[Address(RVA = "0x1BB8A70", Offset = "0x1BB7070", VA = "0x181BB8A70")]
	internal void ContinueWithCore(Task continuationTask, TaskScheduler scheduler, CancellationToken cancellationToken, TaskContinuationOptions options)
	{
	}

	[Token(Token = "0x60014CA")]
	[Address(RVA = "0x1BB7620", Offset = "0x1BB5C20", VA = "0x181BB7620")]
	internal void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action)
	{
	}

	[Token(Token = "0x60014CB")]
	[Address(RVA = "0x1BB7690", Offset = "0x1BB5C90", VA = "0x181BB7690")]
	private void AddCompletionAction(System.Threading.Tasks.ITaskCompletionAction action, bool addBeforeOthers)
	{
	}

	[Token(Token = "0x60014CC")]
	[Address(RVA = "0x1BB7F70", Offset = "0x1BB6570", VA = "0x181BB7F70")]
	private bool AddTaskContinuationComplex(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x60014CD")]
	[Address(RVA = "0x1BB82C0", Offset = "0x1BB68C0", VA = "0x181BB82C0")]
	private bool AddTaskContinuation(object tc, bool addBeforeOthers)
	{
		return default(bool);
	}

	[Token(Token = "0x60014CE")]
	[Address(RVA = "0x1BBC440", Offset = "0x1BBAA40", VA = "0x181BBC440")]
	internal void RemoveContinuation(object continuationObject)
	{
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014CF")]
	[Address(RVA = "0x1BBE4D0", Offset = "0x1BBCAD0", VA = "0x181BBE4D0")]
	public static int WaitAny(params Task[] tasks)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x1BBE430", Offset = "0x1BBCA30", VA = "0x181BBE430")]
	public static int WaitAny(Task[] tasks, int millisecondsTimeout)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)64)]
	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x1BBDF40", Offset = "0x1BBC540", VA = "0x181BBDF40")]
	public static int WaitAny(Task[] tasks, int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(int);
	}

	[Token(Token = "0x60014D2")]
	public static Task<TResult> FromResult<TResult>(TResult result)
	{
		return null;
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x1BBAFF0", Offset = "0x1BB95F0", VA = "0x181BBAFF0")]
	public static Task FromException(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x60014D4")]
	public static Task<TResult> FromException<TResult>(Exception exception)
	{
		return null;
	}

	[Token(Token = "0x60014D5")]
	[Address(RVA = "0x1BBAE80", Offset = "0x1BB9480", VA = "0x181BBAE80")]
	internal static Task FromCancellation(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014D6")]
	[Address(RVA = "0x1BBAE30", Offset = "0x1BB9430", VA = "0x181BBAE30")]
	public static Task FromCanceled(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	internal static Task<TResult> FromCancellation<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014D8")]
	public static Task<TResult> FromCanceled<TResult>(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	internal static Task<TResult> FromCancellation<TResult>(OperationCanceledException exception)
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	[Address(RVA = "0x1BBC8A0", Offset = "0x1BBAEA0", VA = "0x181BBC8A0")]
	public static Task Run(Action action)
	{
		return null;
	}

	[Token(Token = "0x60014DB")]
	public static Task<TResult> Run<TResult>(Func<TResult> function)
	{
		return null;
	}

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x1BBCA80", Offset = "0x1BBB080", VA = "0x181BBCA80")]
	public static Task Run(Func<Task> function)
	{
		return null;
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x1BBCAD0", Offset = "0x1BBB0D0", VA = "0x181BBCAD0")]
	public static Task Run(Func<Task> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014DE")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function)
	{
		return null;
	}

	[Token(Token = "0x60014DF")]
	public static Task<TResult> Run<TResult>(Func<Task<TResult>> function, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x1BB94E0", Offset = "0x1BB7AE0", VA = "0x181BB94E0")]
	public static Task Delay(int millisecondsDelay)
	{
		return null;
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x1BB9530", Offset = "0x1BB7B30", VA = "0x181BB9530")]
	public static Task Delay(int millisecondsDelay, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60014E2")]
	[Address(RVA = "0x1BBE9A0", Offset = "0x1BBCFA0", VA = "0x181BBE9A0")]
	public static Task<Task> WhenAny(params Task[] tasks)
	{
		return null;
	}

	[Token(Token = "0x60014E3")]
	[Address(RVA = "0x1BBE6D0", Offset = "0x1BBCCD0", VA = "0x181BBE6D0")]
	public static Task<Task> WhenAny(IEnumerable<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x60014E4")]
	[Address(RVA = "0x1BB8390", Offset = "0x1BB6990", VA = "0x181BB8390")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static bool AddToActiveTasks(Task task)
	{
		return default(bool);
	}

	[Token(Token = "0x60014E5")]
	[Address(RVA = "0x1BBC710", Offset = "0x1BBAD10", VA = "0x181BBC710")]
	[System.Runtime.CompilerServices.FriendAccessAllowed]
	internal static void RemoveFromActiveTasks(int taskId)
	{
	}

	[Token(Token = "0x60014E6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void MarkAborted(ThreadAbortException e)
	{
	}

	[Token(Token = "0x60014E7")]
	[Address(RVA = "0x1BBA150", Offset = "0x1BB8750", VA = "0x181BBA150")]
	private void ExecuteWithThreadLocal(ref Task currentTaskSlot)
	{
	}
}
