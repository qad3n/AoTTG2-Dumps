// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.Tasks.TaskFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200023E")]
public class TaskFactory<TResult>
{
	[Token(Token = "0x200023F")]
	private sealed class FromAsyncTrimPromise<TInstance> : Task<TResult> where TInstance : class
	{
		[Token(Token = "0x4000A2B")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AsyncCallback s_completeFromAsyncResult;

		[Token(Token = "0x4000A2C")]
		[FieldOffset(Offset = "0x0")]
		private TInstance m_thisRef;

		[Token(Token = "0x4000A2D")]
		[FieldOffset(Offset = "0x0")]
		private Func<TInstance, IAsyncResult, TResult> m_endMethod;

		[Token(Token = "0x6001431")]
		internal FromAsyncTrimPromise(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod)
		{
		}

		[Token(Token = "0x6001432")]
		internal static void CompleteFromAsyncResult(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x6001433")]
		internal void Complete(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod, IAsyncResult asyncResult, bool requiresSynchronization)
		{
		}
	}

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x0")]
	private TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x0")]
	private TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x0")]
	private TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x6001427")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x6001428")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001429")]
	public Task<TResult> StartNew(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600142A")]
	private static void FromAsyncCoreLogic(IAsyncResult iar, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, Task<TResult> promise, bool requiresSynchronization)
	{
	}

	[Token(Token = "0x600142B")]
	public Task<TResult> FromAsync(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, object state)
	{
		return null;
	}

	[Token(Token = "0x600142C")]
	internal static Task<TResult> FromAsyncImpl(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	public Task<TResult> FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x600142E")]
	internal static Task<TResult> FromAsyncImpl<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x600142F")]
	internal static Task<TResult> FromAsyncImpl<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001430")]
	internal static Task<TResult> FromAsyncTrim<TInstance, TArgs>(TInstance thisRef, TArgs args, Func<TInstance, TArgs, AsyncCallback, object, IAsyncResult> beginMethod, Func<TInstance, IAsyncResult, TResult> endMethod) where TInstance : class
	{
		return null;
	}
}
[Token(Token = "0x200025E")]
public class TaskFactory
{
	[Token(Token = "0x200025F")]
	internal sealed class CompleteOnInvokePromise : Task<Task>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4000AA4")]
		[FieldOffset(Offset = "0x58")]
		private IList<Task> _tasks;

		[Token(Token = "0x17000208")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x6001523")]
			[Address(RVA = "0x554E6A0", Offset = "0x554D6A0", VA = "0x554E6A0", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001521")]
		[Address(RVA = "0x554E280", Offset = "0x554D280", VA = "0x554E280")]
		public CompleteOnInvokePromise(IList<Task> tasks)
		{
		}

		[Token(Token = "0x6001522")]
		[Address(RVA = "0x554E3B0", Offset = "0x554D3B0", VA = "0x554E3B0", Slot = "14")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x18")]
	private readonly TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x24")]
	private readonly TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x6001513")]
	[Address(RVA = "0x554B860", Offset = "0x554A860", VA = "0x554B860")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x6001514")]
	[Address(RVA = "0x554DD50", Offset = "0x554CD50", VA = "0x554DD50")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001515")]
	[Address(RVA = "0x554DEF0", Offset = "0x554CEF0", VA = "0x554DEF0")]
	internal static void CheckCreationOptions(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x6001516")]
	[Address(RVA = "0x554DF50", Offset = "0x554CF50", VA = "0x554DF50")]
	public Task StartNew(Action action, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001517")]
	[Address(RVA = "0x554E070", Offset = "0x554D070", VA = "0x554E070")]
	public Task StartNew(Action<object> action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001518")]
	public Task<TResult> StartNew<TResult>(Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001519")]
	public Task<TResult> StartNew<TResult>(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x600151A")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x600151B")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x600151C")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state)
	{
		return null;
	}

	[Token(Token = "0x600151D")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x600151E")]
	[Address(RVA = "0x554E1A0", Offset = "0x554D1A0", VA = "0x554E1A0")]
	internal static void CheckFromAsyncOptions(TaskCreationOptions creationOptions, bool hasBeginMethod)
	{
	}

	[Token(Token = "0x600151F")]
	[Address(RVA = "0x5549D90", Offset = "0x5548D90", VA = "0x5549D90")]
	internal static Task<Task> CommonCWAnyLogic(IList<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x6001520")]
	[Address(RVA = "0x554DE00", Offset = "0x554CE00", VA = "0x554DE00")]
	internal static void CheckMultiTaskContinuationOptions(TaskContinuationOptions continuationOptions)
	{
	}
}
