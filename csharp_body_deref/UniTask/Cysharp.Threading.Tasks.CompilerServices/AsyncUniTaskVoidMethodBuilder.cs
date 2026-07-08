using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[StructLayout((LayoutKind)3)]
[Token(Token = "0x2000259")]
public struct AsyncUniTaskVoidMethodBuilder
{
	[Token(Token = "0x40006B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunner runner;

	[Token(Token = "0x17000082")]
	public UniTaskVoid Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x46FA7D0", Offset = "0x46FA7D0", VA = "0x46FA7D0")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskVoid);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x46FA7C0", Offset = "0x46FA7C0", VA = "0x46FA7C0")]
	[DebuggerHidden]
	public static AsyncUniTaskVoidMethodBuilder Create()
	{
		return default(AsyncUniTaskVoidMethodBuilder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x46FA7E0", Offset = "0x46FA7E0", VA = "0x46FA7E0")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x46FA910", Offset = "0x46FA910", VA = "0x46FA910")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D69")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6A")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D6B")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x46D1EF0", Offset = "0x46D1EF0", VA = "0x46D1EF0")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
