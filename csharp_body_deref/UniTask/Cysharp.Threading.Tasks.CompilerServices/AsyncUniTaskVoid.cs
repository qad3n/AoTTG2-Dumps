// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoid
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

[Token(Token = "0x2000262")]
internal sealed class AsyncUniTaskVoid<TStateMachine> : IStateMachineRunner, ITaskPoolNode<AsyncUniTaskVoid<TStateMachine>>, IUniTaskSource, IValueTaskSource where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006CC")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTaskVoid<TStateMachine>> pool;

	[Token(Token = "0x40006CE")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTaskVoid<TStateMachine> nextNode;

	[Token(Token = "0x1700008B")]
	public Action ReturnAction
	{
		[Token(Token = "0x6000DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008C")]
	public Action MoveNext
	{
		[Token(Token = "0x6000DA1")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public unsafe ref AsyncUniTaskVoid<TStateMachine> NextNode
	{
		[Token(Token = "0x6000DA5")]
		get
		{
			return ref *(AsyncUniTaskVoid<TStateMachine>*)null;
		}
	}

	[Token(Token = "0x6000DA2")]
	public AsyncUniTaskVoid()
	{
	}

	[Token(Token = "0x6000DA3")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunner runnerFieldRef)
	{
	}

	[Token(Token = "0x6000DA4")]
	static AsyncUniTaskVoid()
	{
	}

	[Token(Token = "0x6000DA6")]
	public void Return()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA7")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000DA8")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DA9")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000DAA")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000DAB")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}
}
