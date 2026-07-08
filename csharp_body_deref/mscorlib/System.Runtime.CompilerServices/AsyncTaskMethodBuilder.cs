using System.Diagnostics;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000493")]
public struct AsyncTaskMethodBuilder
{
	[Token(Token = "0x4001318")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Task<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted;

	[Token(Token = "0x4001319")]
	[FieldOffset(Offset = "0x0")]
	private AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult> m_builder;

	[Token(Token = "0x1700047E")]
	public Task Task
	{
		[Token(Token = "0x60022CC")]
		[Address(RVA = "0x4EDD060", Offset = "0x4EDD060", VA = "0x4EDD060")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022C7")]
	[Address(RVA = "0x4EDCFD0", Offset = "0x4EDCFD0", VA = "0x4EDCFD0")]
	public static AsyncTaskMethodBuilder Create()
	{
		return default(AsyncTaskMethodBuilder);
	}

	[Token(Token = "0x60022C8")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022C9")]
	[Address(RVA = "0x4EDCFF0", Offset = "0x4EDCFF0", VA = "0x4EDCFF0")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022CA")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022CB")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022CD")]
	[Address(RVA = "0x4EDD0C0", Offset = "0x4EDD0C0", VA = "0x4EDD0C0")]
	public void SetResult()
	{
	}

	[Token(Token = "0x60022CE")]
	[Address(RVA = "0x4EDD160", Offset = "0x4EDD160", VA = "0x4EDD160")]
	public void SetException(Exception exception)
	{
	}
}
[Token(Token = "0x2000494")]
public struct AsyncTaskMethodBuilder<TResult>
{
	[Token(Token = "0x400131A")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<TResult> s_defaultResultTask;

	[Token(Token = "0x400131B")]
	[FieldOffset(Offset = "0x0")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x400131C")]
	[FieldOffset(Offset = "0x0")]
	private Task<TResult> m_task;

	[Token(Token = "0x1700047F")]
	public Task<TResult> Task
	{
		[Token(Token = "0x60022D5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022D0")]
	public static AsyncTaskMethodBuilder<TResult> Create()
	{
		return default(AsyncTaskMethodBuilder<TResult>);
	}

	[Token(Token = "0x60022D1")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022D2")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022D3")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022D4")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022D6")]
	public void SetResult(TResult result)
	{
	}

	[Token(Token = "0x60022D7")]
	internal void SetResult(Task<TResult> completedTask)
	{
	}

	[Token(Token = "0x60022D8")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x60022D9")]
	internal static Task<TResult> GetTaskForResult(TResult result)
	{
		return null;
	}
}
