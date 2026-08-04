// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTask
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x2000261")]
internal sealed class AsyncUniTask<TStateMachine> : IStateMachineRunnerPromise, IUniTaskSource, IValueTaskSource, ITaskPoolNode<AsyncUniTask<TStateMachine>> where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTask<TStateMachine>> pool;

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action returnDelegate;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTask<TStateMachine> nextNode;

	[Token(Token = "0x1700008C")]
	public Action MoveNext
	{
		[Token(Token = "0x6000D8B")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public unsafe ref AsyncUniTask<TStateMachine> NextNode
	{
		[Token(Token = "0x6000D8E")]
		get
		{
			return ref *(AsyncUniTask<TStateMachine>*)null;
		}
	}

	[Token(Token = "0x1700008E")]
	public UniTask Task
	{
		[Token(Token = "0x6000D93")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000D8C")]
	private AsyncUniTask()
	{
	}

	[Token(Token = "0x6000D8D")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunnerPromise runnerPromiseFieldRef)
	{
	}

	[Token(Token = "0x6000D8F")]
	static AsyncUniTask()
	{
	}

	[Token(Token = "0x6000D90")]
	private void Return()
	{
	}

	[Token(Token = "0x6000D91")]
	private bool TryReturn()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D92")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000D94")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[Token(Token = "0x6000D95")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6000D96")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x6000D97")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000D98")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000D99")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
[Token(Token = "0x2000263")]
internal sealed class AsyncUniTask<TStateMachine, T> : IStateMachineRunnerPromise<T>, IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITaskPoolNode<AsyncUniTask<TStateMachine, T>> where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006C6")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTask<TStateMachine, T>> pool;

	[Token(Token = "0x40006C7")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action returnDelegate;

	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006CA")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x40006CB")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTask<TStateMachine, T> nextNode;

	[Token(Token = "0x1700008F")]
	public Action MoveNext
	{
		[Token(Token = "0x6000D9D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public unsafe ref AsyncUniTask<TStateMachine, T> NextNode
	{
		[Token(Token = "0x6000DA0")]
		get
		{
			return ref *(AsyncUniTask<TStateMachine, T>*)null;
		}
	}

	[Token(Token = "0x17000091")]
	public UniTask<T> Task
	{
		[Token(Token = "0x6000DA5")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x6000D9E")]
	private AsyncUniTask()
	{
	}

	[Token(Token = "0x6000D9F")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunnerPromise<T> runnerPromiseFieldRef)
	{
	}

	[Token(Token = "0x6000DA1")]
	static AsyncUniTask()
	{
	}

	[Token(Token = "0x6000DA2")]
	private void Return()
	{
	}

	[Token(Token = "0x6000DA3")]
	private bool TryReturn()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA4")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000DA6")]
	[DebuggerHidden]
	public void SetResult(T result)
	{
	}

	[Token(Token = "0x6000DA7")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6000DA8")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000DA9")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000DAA")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DAB")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DAC")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
