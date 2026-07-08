using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks.CompilerServices;

[Token(Token = "0x200025F")]
internal sealed class AsyncUniTaskVoid<TStateMachine> : IStateMachineRunner, ITaskPoolNode<AsyncUniTaskVoid<TStateMachine>>, IUniTaskSource, IValueTaskSource where TStateMachine : IAsyncStateMachine
{
	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x0")]
	private static TaskPool<AsyncUniTaskVoid<TStateMachine>> pool;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x0")]
	private TStateMachine stateMachine;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x0")]
	private AsyncUniTaskVoid<TStateMachine> nextNode;

	[Token(Token = "0x17000089")]
	public Action ReturnAction
	{
		[Token(Token = "0x6000D7C")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008A")]
	public Action MoveNext
	{
		[Token(Token = "0x6000D7D")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public unsafe ref AsyncUniTaskVoid<TStateMachine> NextNode
	{
		[Token(Token = "0x6000D81")]
		get
		{
			return ref *(AsyncUniTaskVoid<TStateMachine>*)null;
		}
	}

	[Token(Token = "0x6000D7E")]
	public AsyncUniTaskVoid()
	{
	}

	[Token(Token = "0x6000D7F")]
	public static void SetStateMachine(ref TStateMachine stateMachine, ref IStateMachineRunner runnerFieldRef)
	{
	}

	[Token(Token = "0x6000D80")]
	static AsyncUniTaskVoid()
	{
	}

	[Token(Token = "0x6000D82")]
	public void Return()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D83")]
	[DebuggerHidden]
	private void Run()
	{
	}

	[Token(Token = "0x6000D84")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000D85")]
	private UniTaskStatus Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EUnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000D86")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EOnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000D87")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}
}
