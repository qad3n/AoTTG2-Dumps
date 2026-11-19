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

[Token(Token = "0x2000264")]
internal sealed class AsyncUniTask<TStateMachine> : IStateMachineRunnerPromise, IUniTaskSource, IValueTaskSource, ITaskPoolNode<AsyncUniTask<TStateMachine>> where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006D2")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTask<TStateMachine>> pool;

	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action returnDelegate;

	[Token(Token = "0x40006D5")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006D6")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<AsyncUnit> core;

	[Token(Token = "0x40006D7")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTask<TStateMachine> nextNode;

	[Token(Token = "0x1700008E")]
	public Action MoveNext
	{
		[Token(Token = "0x6000DAF")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public unsafe ref AsyncUniTask<TStateMachine> NextNode
	{
		[Token(Token = "0x6000DB2")]
		get
		{
			return ref *(AsyncUniTask<TStateMachine>*)null;
		}
	}

	[Token(Token = "0x17000090")]
	public UniTask Task
	{
		[Token(Token = "0x6000DB7")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[Token(Token = "0x6000DB0")]
	private AsyncUniTask()
	{
	}

	[Token(Token = "0x6000DB1")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunnerPromise runnerPromiseFieldRef)
	{
	}

	[Token(Token = "0x6000DB3")]
	static AsyncUniTask()
	{
	}

	[Token(Token = "0x6000DB4")]
	private void Return()
	{
	}

	[Token(Token = "0x6000DB5")]
	private bool TryReturn()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB6")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000DB8")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[Token(Token = "0x6000DB9")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6000DBA")]
	[DebuggerHidden]
	public void GetResult(short token)
	{
	}

	[Token(Token = "0x6000DBB")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DBC")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DBD")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
[Token(Token = "0x2000266")]
internal sealed class AsyncUniTask<TStateMachine, T> : IStateMachineRunnerPromise<T>, IUniTaskSource<T>, IUniTaskSource, IValueTaskSource, IValueTaskSource<T>, ITaskPoolNode<AsyncUniTask<TStateMachine, T>> where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006D9")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTask<TStateMachine, T>> pool;

	[Token(Token = "0x40006DA")]
	[FieldOffset(Offset = "0x0")]
	private readonly Action returnDelegate;

	[Token(Token = "0x40006DC")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x0")]
	private UniTaskCompletionSourceCore<T> core;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTask<TStateMachine, T> nextNode;

	[Token(Token = "0x17000091")]
	public Action MoveNext
	{
		[Token(Token = "0x6000DC1")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000092")]
	public unsafe ref AsyncUniTask<TStateMachine, T> NextNode
	{
		[Token(Token = "0x6000DC4")]
		get
		{
			return ref *(AsyncUniTask<TStateMachine, T>*)null;
		}
	}

	[Token(Token = "0x17000093")]
	public UniTask<T> Task
	{
		[Token(Token = "0x6000DC9")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[Token(Token = "0x6000DC2")]
	private AsyncUniTask()
	{
	}

	[Token(Token = "0x6000DC3")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunnerPromise<T> runnerPromiseFieldRef)
	{
	}

	[Token(Token = "0x6000DC5")]
	static AsyncUniTask()
	{
	}

	[Token(Token = "0x6000DC6")]
	private void Return()
	{
	}

	[Token(Token = "0x6000DC7")]
	private bool TryReturn()
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC8")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000DCA")]
	[DebuggerHidden]
	public void SetResult(T result)
	{
	}

	[Token(Token = "0x6000DCB")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6000DCC")]
	[DebuggerHidden]
	public T GetResult(short token)
	{
		return (T)null;
	}

	[Token(Token = "0x6000DCD")]
	[DebuggerHidden]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000DCE")]
	[DebuggerHidden]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DCF")]
	[DebuggerHidden]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DD0")]
	[DebuggerHidden]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}
}
