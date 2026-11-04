// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x200025A")]
public struct AsyncUniTaskMethodBuilder
{
	[Token(Token = "0x40006C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunnerPromise runnerPromise;

	[Token(Token = "0x40006C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private Exception ex;

	[Token(Token = "0x17000082")]
	public UniTask Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D7A")]
		[Address(RVA = "0x293E040", Offset = "0x293C640", VA = "0x18293E040")]
		[DebuggerHidden]
		get
		{
			return default(UniTask);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x8ED540", Offset = "0x8EBB40", VA = "0x1808ED540")]
	[DebuggerHidden]
	public static AsyncUniTaskMethodBuilder Create()
	{
		return default(AsyncUniTaskMethodBuilder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x293DF80", Offset = "0x293C580", VA = "0x18293DF80")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x293DFF0", Offset = "0x293C5F0", VA = "0x18293DFF0")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7D")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7E")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7F")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
[StructLayout((LayoutKind)3)]
[Token(Token = "0x200025B")]
public struct AsyncUniTaskMethodBuilder<T>
{
	[Token(Token = "0x40006C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunnerPromise<T> runnerPromise;

	[Token(Token = "0x40006C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Exception ex;

	[Token(Token = "0x40006C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private T result;

	[Token(Token = "0x17000083")]
	public UniTask<T> Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D82")]
		[DebuggerHidden]
		get
		{
			return default(UniTask<T>);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D81")]
	[DebuggerHidden]
	public static AsyncUniTaskMethodBuilder<T> Create()
	{
		return default(AsyncUniTaskMethodBuilder<T>);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D83")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D84")]
	[DebuggerHidden]
	public void SetResult(T result)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D85")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D86")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D87")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D88")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
