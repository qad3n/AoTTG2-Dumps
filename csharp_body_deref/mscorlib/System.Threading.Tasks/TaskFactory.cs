using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000235")]
public class TaskFactory<TResult>
{
	[Token(Token = "0x2000236")]
	private sealed class FromAsyncTrimPromise<TInstance> : Task<TResult> where TInstance : class
	{
		[Token(Token = "0x4000A70")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AsyncCallback s_completeFromAsyncResult;

		[Token(Token = "0x4000A71")]
		[FieldOffset(Offset = "0x0")]
		private TInstance m_thisRef;

		[Token(Token = "0x4000A72")]
		[FieldOffset(Offset = "0x0")]
		private Func<TInstance, IAsyncResult, TResult> m_endMethod;

		[Token(Token = "0x60013E9")]
		internal FromAsyncTrimPromise(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod)
		{
		}

		[Token(Token = "0x60013EA")]
		internal static void CompleteFromAsyncResult(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x60013EB")]
		internal void Complete(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod, IAsyncResult asyncResult, bool requiresSynchronization)
		{
		}
	}

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x0")]
	private TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x0")]
	private TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x0")]
	private TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x60013DF")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x60013E0")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60013E1")]
	public Task<TResult> StartNew(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60013E2")]
	private static void FromAsyncCoreLogic(IAsyncResult iar, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, Task<TResult> promise, bool requiresSynchronization)
	{
	}

	[Token(Token = "0x60013E3")]
	public Task<TResult> FromAsync(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, object state)
	{
		return null;
	}

	[Token(Token = "0x60013E4")]
	internal static Task<TResult> FromAsyncImpl(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013E5")]
	public Task<TResult> FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x60013E6")]
	internal static Task<TResult> FromAsyncImpl<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013E7")]
	internal static Task<TResult> FromAsyncImpl<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x60013E8")]
	internal static Task<TResult> FromAsyncTrim<TInstance, TArgs>(TInstance thisRef, TArgs args, Func<TInstance, TArgs, AsyncCallback, object, IAsyncResult> beginMethod, Func<TInstance, IAsyncResult, TResult> endMethod) where TInstance : class
	{
		return null;
	}
}
[Token(Token = "0x2000256")]
public class TaskFactory
{
	[Token(Token = "0x2000257")]
	internal sealed class CompleteOnInvokePromise : Task<Task>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4000AFC")]
		[FieldOffset(Offset = "0x58")]
		private IList<Task> _tasks;

		[Token(Token = "0x17000207")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x60014E0")]
			[Address(RVA = "0x5067EB0", Offset = "0x5067EB0", VA = "0x5067EB0", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60014DE")]
		[Address(RVA = "0x5067A70", Offset = "0x5067A70", VA = "0x5067A70")]
		public CompleteOnInvokePromise(IList<Task> tasks)
		{
		}

		[Token(Token = "0x60014DF")]
		[Address(RVA = "0x5067BA0", Offset = "0x5067BA0", VA = "0x5067BA0", Slot = "14")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x18")]
	private readonly TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x24")]
	private readonly TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x60014D0")]
	[Address(RVA = "0x5064940", Offset = "0x5064940", VA = "0x5064940")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x60014D1")]
	[Address(RVA = "0x5067540", Offset = "0x5067540", VA = "0x5067540")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x60014D2")]
	[Address(RVA = "0x50676E0", Offset = "0x50676E0", VA = "0x50676E0")]
	internal static void CheckCreationOptions(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x60014D3")]
	[Address(RVA = "0x5067740", Offset = "0x5067740", VA = "0x5067740")]
	public Task StartNew(Action action, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014D4")]
	[Address(RVA = "0x5067860", Offset = "0x5067860", VA = "0x5067860")]
	public Task StartNew(Action<object> action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014D5")]
	public Task<TResult> StartNew<TResult>(Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014D6")]
	public Task<TResult> StartNew<TResult>(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x60014D7")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x60014D8")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x60014D9")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state)
	{
		return null;
	}

	[Token(Token = "0x60014DA")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x60014DB")]
	[Address(RVA = "0x5067990", Offset = "0x5067990", VA = "0x5067990")]
	internal static void CheckFromAsyncOptions(TaskCreationOptions creationOptions, bool hasBeginMethod)
	{
	}

	[Token(Token = "0x60014DC")]
	[Address(RVA = "0x5063A80", Offset = "0x5063A80", VA = "0x5063A80")]
	internal static Task<Task> CommonCWAnyLogic(IList<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x60014DD")]
	[Address(RVA = "0x50675F0", Offset = "0x50675F0", VA = "0x50675F0")]
	internal static void CheckMultiTaskContinuationOptions(TaskContinuationOptions continuationOptions)
	{
	}
}
