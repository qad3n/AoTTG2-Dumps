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

[Token(Token = "0x2000266")]
public class TaskFactory<TResult>
{
	[Token(Token = "0x2000267")]
	private sealed class FromAsyncTrimPromise<TInstance> : Task<TResult> where TInstance : class
	{
		[Token(Token = "0x4000ACD")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly AsyncCallback s_completeFromAsyncResult;

		[Token(Token = "0x4000ACE")]
		[FieldOffset(Offset = "0x0")]
		private TInstance m_thisRef;

		[Token(Token = "0x4000ACF")]
		[FieldOffset(Offset = "0x0")]
		private Func<TInstance, IAsyncResult, TResult> m_endMethod;

		[Token(Token = "0x600145A")]
		internal FromAsyncTrimPromise(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod)
		{
		}

		[Token(Token = "0x600145B")]
		internal static void CompleteFromAsyncResult(IAsyncResult asyncResult)
		{
		}

		[Token(Token = "0x600145C")]
		internal void Complete(TInstance thisRef, Func<TInstance, IAsyncResult, TResult> endMethod, IAsyncResult asyncResult, bool requiresSynchronization)
		{
		}
	}

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x0")]
	private CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x0")]
	private TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000ACB")]
	[FieldOffset(Offset = "0x0")]
	private TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x0")]
	private TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x6001450")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x6001451")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x6001452")]
	public Task<TResult> StartNew(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001453")]
	private static void FromAsyncCoreLogic(IAsyncResult iar, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, Task<TResult> promise, bool requiresSynchronization)
	{
	}

	[Token(Token = "0x6001454")]
	public Task<TResult> FromAsync(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, object state)
	{
		return null;
	}

	[Token(Token = "0x6001455")]
	internal static Task<TResult> FromAsyncImpl(Func<AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001456")]
	public Task<TResult> FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x6001457")]
	internal static Task<TResult> FromAsyncImpl<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001458")]
	internal static Task<TResult> FromAsyncImpl<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Func<IAsyncResult, TResult> endFunction, Action<IAsyncResult> endAction, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001459")]
	internal static Task<TResult> FromAsyncTrim<TInstance, TArgs>(TInstance thisRef, TArgs args, Func<TInstance, TArgs, AsyncCallback, object, IAsyncResult> beginMethod, Func<TInstance, IAsyncResult, TResult> endMethod) where TInstance : class
	{
		return null;
	}
}
[Token(Token = "0x2000286")]
public class TaskFactory
{
	[Token(Token = "0x2000287")]
	internal sealed class CompleteOnInvokePromise : Task<Task>, System.Threading.Tasks.ITaskCompletionAction
	{
		[Token(Token = "0x4000B46")]
		[FieldOffset(Offset = "0x58")]
		private IList<Task> _tasks;

		[Token(Token = "0x17000209")]
		public bool InvokeMayRunArbitraryCode
		{
			[Token(Token = "0x600154C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600154A")]
		[Address(RVA = "0x1BAD260", Offset = "0x1BAB860", VA = "0x181BAD260")]
		public CompleteOnInvokePromise(IList<Task> tasks)
		{
		}

		[Token(Token = "0x600154B")]
		[Address(RVA = "0x1BAD0B0", Offset = "0x1BAB6B0", VA = "0x181BAD0B0", Slot = "14")]
		public void Invoke(Task completingTask)
		{
		}
	}

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x10")]
	private readonly CancellationToken m_defaultCancellationToken;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x18")]
	private readonly TaskScheduler m_defaultScheduler;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x20")]
	private readonly TaskCreationOptions m_defaultCreationOptions;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x24")]
	private readonly TaskContinuationOptions m_defaultContinuationOptions;

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x1BB60C0", Offset = "0x1BB46C0", VA = "0x181BB60C0")]
	public TaskFactory()
	{
	}

	[Token(Token = "0x600153D")]
	[Address(RVA = "0x1BB6110", Offset = "0x1BB4710", VA = "0x181BB6110")]
	public TaskFactory(CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskContinuationOptions continuationOptions, TaskScheduler scheduler)
	{
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x1BB57F0", Offset = "0x1BB3DF0", VA = "0x181BB57F0")]
	internal static void CheckCreationOptions(TaskCreationOptions creationOptions)
	{
	}

	[Token(Token = "0x600153F")]
	[Address(RVA = "0x1BB5F00", Offset = "0x1BB4500", VA = "0x181BB5F00")]
	public Task StartNew(Action action, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001540")]
	[Address(RVA = "0x1BB5D40", Offset = "0x1BB4340", VA = "0x181BB5D40")]
	public Task StartNew(Action<object> action, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001541")]
	public Task<TResult> StartNew<TResult>(Func<TResult> function, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001542")]
	public Task<TResult> StartNew<TResult>(Func<object, TResult> function, object state, CancellationToken cancellationToken, TaskCreationOptions creationOptions, TaskScheduler scheduler)
	{
		return null;
	}

	[Token(Token = "0x6001543")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state)
	{
		return null;
	}

	[Token(Token = "0x6001544")]
	public Task FromAsync<TArg1>(Func<TArg1, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001545")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state)
	{
		return null;
	}

	[Token(Token = "0x6001546")]
	public Task FromAsync<TArg1, TArg2>(Func<TArg1, TArg2, AsyncCallback, object, IAsyncResult> beginMethod, Action<IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, object state, TaskCreationOptions creationOptions)
	{
		return null;
	}

	[Token(Token = "0x6001547")]
	[Address(RVA = "0x1BB5860", Offset = "0x1BB3E60", VA = "0x181BB5860")]
	internal static void CheckFromAsyncOptions(TaskCreationOptions creationOptions, bool hasBeginMethod)
	{
	}

	[Token(Token = "0x6001548")]
	[Address(RVA = "0x1BB5AD0", Offset = "0x1BB40D0", VA = "0x181BB5AD0")]
	internal static Task<Task> CommonCWAnyLogic(IList<Task> tasks)
	{
		return null;
	}

	[Token(Token = "0x6001549")]
	[Address(RVA = "0x1BB5990", Offset = "0x1BB3F90", VA = "0x181BB5990")]
	internal static void CheckMultiTaskContinuationOptions(TaskContinuationOptions continuationOptions)
	{
	}
}
