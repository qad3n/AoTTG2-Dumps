// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200049B")]
public struct AsyncTaskMethodBuilder
{
	[Token(Token = "0x400127A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Task<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted;

	[Token(Token = "0x400127B")]
	[FieldOffset(Offset = "0x0")]
	private AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult> m_builder;

	[Token(Token = "0x17000480")]
	public Task Task
	{
		[Token(Token = "0x6002319")]
		[Address(RVA = "0x53CA510", Offset = "0x53C9510", VA = "0x53CA510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002314")]
	[Address(RVA = "0x53CA480", Offset = "0x53C9480", VA = "0x53CA480")]
	public static AsyncTaskMethodBuilder Create()
	{
		return default(AsyncTaskMethodBuilder);
	}

	[Token(Token = "0x6002315")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002316")]
	[Address(RVA = "0x53CA4A0", Offset = "0x53C94A0", VA = "0x53CA4A0")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x6002317")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002318")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x600231A")]
	[Address(RVA = "0x53CA570", Offset = "0x53C9570", VA = "0x53CA570")]
	public void SetResult()
	{
	}

	[Token(Token = "0x600231B")]
	[Address(RVA = "0x53CA610", Offset = "0x53C9610", VA = "0x53CA610")]
	public void SetException(Exception exception)
	{
	}
}
[Token(Token = "0x200049C")]
public struct AsyncTaskMethodBuilder<TResult>
{
	[Token(Token = "0x400127C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<TResult> s_defaultResultTask;

	[Token(Token = "0x400127D")]
	[FieldOffset(Offset = "0x0")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x400127E")]
	[FieldOffset(Offset = "0x0")]
	private Task<TResult> m_task;

	[Token(Token = "0x17000481")]
	public Task<TResult> Task
	{
		[Token(Token = "0x6002322")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600231D")]
	public static AsyncTaskMethodBuilder<TResult> Create()
	{
		return default(AsyncTaskMethodBuilder<TResult>);
	}

	[Token(Token = "0x600231E")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x600231F")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x6002320")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002321")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002323")]
	public void SetResult(TResult result)
	{
	}

	[Token(Token = "0x6002324")]
	internal void SetResult(Task<TResult> completedTask)
	{
	}

	[Token(Token = "0x6002325")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6002326")]
	internal static Task<TResult> GetTaskForResult(TResult result)
	{
		return null;
	}
}
