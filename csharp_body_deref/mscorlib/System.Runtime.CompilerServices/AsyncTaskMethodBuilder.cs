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

[Token(Token = "0x20004C2")]
public struct AsyncTaskMethodBuilder
{
	[Token(Token = "0x400131A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Task<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted;

	[Token(Token = "0x400131B")]
	[FieldOffset(Offset = "0x0")]
	private AsyncTaskMethodBuilder<System.Threading.Tasks.VoidTaskResult> m_builder;

	[Token(Token = "0x17000481")]
	public Task Task
	{
		[Token(Token = "0x600234C")]
		[Address(RVA = "0x1A28B40", Offset = "0x1A27140", VA = "0x181A28B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002347")]
	[Address(RVA = "0x8ED550", Offset = "0x8EBB50", VA = "0x1808ED550")]
	public static AsyncTaskMethodBuilder Create()
	{
		return default(AsyncTaskMethodBuilder);
	}

	[Token(Token = "0x6002348")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002349")]
	[Address(RVA = "0x1A28A50", Offset = "0x1A27050", VA = "0x181A28A50")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x600234A")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x600234B")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x600234D")]
	[Address(RVA = "0x1A289B0", Offset = "0x1A26FB0", VA = "0x181A289B0")]
	public void SetResult()
	{
	}

	[Token(Token = "0x600234E")]
	[Address(RVA = "0x1A28940", Offset = "0x1A26F40", VA = "0x181A28940")]
	public void SetException(Exception exception)
	{
	}
}
[Token(Token = "0x20004C3")]
public struct AsyncTaskMethodBuilder<TResult>
{
	[Token(Token = "0x400131C")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly Task<TResult> s_defaultResultTask;

	[Token(Token = "0x400131D")]
	[FieldOffset(Offset = "0x0")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x400131E")]
	[FieldOffset(Offset = "0x0")]
	private Task<TResult> m_task;

	[Token(Token = "0x17000482")]
	public Task<TResult> Task
	{
		[Token(Token = "0x6002355")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002350")]
	public static AsyncTaskMethodBuilder<TResult> Create()
	{
		return default(AsyncTaskMethodBuilder<TResult>);
	}

	[Token(Token = "0x6002351")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002352")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x6002353")]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002354")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002356")]
	public void SetResult(TResult result)
	{
	}

	[Token(Token = "0x6002357")]
	internal void SetResult(Task<TResult> completedTask)
	{
	}

	[Token(Token = "0x6002358")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6002359")]
	internal static Task<TResult> GetTaskForResult(TResult result)
	{
		return null;
	}
}
