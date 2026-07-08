using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000257")]
public struct AsyncUniTaskMethodBuilder
{
	[Token(Token = "0x40006B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunnerPromise runnerPromise;

	[Token(Token = "0x40006B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private Exception ex;

	[Token(Token = "0x17000080")]
	public UniTask Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x46FA540", Offset = "0x46FA540", VA = "0x46FA540")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x46FA530", Offset = "0x46FA530", VA = "0x46FA530")]
	[DebuggerHidden]
	public static AsyncUniTaskMethodBuilder Create()
	{
		return default(AsyncUniTaskMethodBuilder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x46FA650", Offset = "0x46FA650", VA = "0x46FA650")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x46FA720", Offset = "0x46FA720", VA = "0x46FA720")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D59")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5A")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5B")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x46D02A0", Offset = "0x46D02A0", VA = "0x46D02A0")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000258")]
public struct AsyncUniTaskMethodBuilder<T>
{
	[Token(Token = "0x40006B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunnerPromise<T> runnerPromise;

	[Token(Token = "0x40006B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Exception ex;

	[Token(Token = "0x40006B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T result;

	[Token(Token = "0x17000081")]
	public UniTask<T> Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D5E")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5D")]
	[DebuggerHidden]
	public static AsyncUniTaskMethodBuilder<T> Create()
	{
		return default(AsyncUniTaskMethodBuilder<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5F")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D60")]
	[DebuggerHidden]
	public void SetResult(T result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D61")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D62")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D63")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D64")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
