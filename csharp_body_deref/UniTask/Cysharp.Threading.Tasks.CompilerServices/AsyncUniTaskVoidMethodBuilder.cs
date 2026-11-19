// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
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
[Token(Token = "0x200025C")]
public struct AsyncUniTaskVoidMethodBuilder
{
	[Token(Token = "0x40006C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IStateMachineRunner runner;

	[Token(Token = "0x17000084")]
	public UniTaskVoid Task
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000D8A")]
		[Address(RVA = "0x630CF10", Offset = "0x630BF10", VA = "0x630CF10")]
		[DebuggerHidden]
		get
		{
			return default(UniTaskVoid);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x630CF00", Offset = "0x630BF00", VA = "0x630CF00")]
	[DebuggerHidden]
	public static AsyncUniTaskVoidMethodBuilder Create()
	{
		return default(AsyncUniTaskVoidMethodBuilder);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x630CF20", Offset = "0x630BF20", VA = "0x630CF20")]
	[DebuggerHidden]
	public void SetException(Exception exception)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x630D050", Offset = "0x630C050", VA = "0x630D050")]
	[DebuggerHidden]
	public void SetResult()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8D")]
	[DebuggerHidden]
	public void AwaitOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : INotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8E")]
	[DebuggerHidden]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D8F")]
	[DebuggerHidden]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x62E43F0", Offset = "0x62E33F0", VA = "0x62E43F0")]
	[DebuggerHidden]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}
}
