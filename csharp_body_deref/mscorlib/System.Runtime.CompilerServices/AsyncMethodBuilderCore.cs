using System.Runtime.InteropServices;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000496")]
internal struct AsyncMethodBuilderCore
{
	[Token(Token = "0x2000497")]
	internal sealed class MoveNextRunner
	{
		[Token(Token = "0x4001322")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExecutionContext m_context;

		[Token(Token = "0x4001323")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IAsyncStateMachine m_stateMachine;

		[Token(Token = "0x4001324")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeMoveNext;

		[Token(Token = "0x60022E5")]
		[Address(RVA = "0x4EDD640", Offset = "0x4EDD640", VA = "0x4EDD640")]
		internal MoveNextRunner(ExecutionContext context, IAsyncStateMachine stateMachine)
		{
		}

		[Token(Token = "0x60022E6")]
		[Address(RVA = "0x4EDDB00", Offset = "0x4EDDB00", VA = "0x4EDDB00")]
		internal void Run()
		{
		}

		[Token(Token = "0x60022E7")]
		[Address(RVA = "0x4EDDD40", Offset = "0x4EDDD40", VA = "0x4EDDD40")]
		private static void InvokeMoveNext(object stateMachine)
		{
		}
	}

	[Token(Token = "0x2000498")]
	private class ContinuationWrapper
	{
		[Token(Token = "0x4001325")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal readonly Action m_continuation;

		[Token(Token = "0x4001326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly Action m_invokeAction;

		[Token(Token = "0x4001327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal readonly Task m_innerTask;

		[Token(Token = "0x60022E8")]
		[Address(RVA = "0x4EDD9B0", Offset = "0x4EDD9B0", VA = "0x4EDD9B0")]
		internal ContinuationWrapper(Action continuation, Action invokeAction, Task innerTask)
		{
		}

		[Token(Token = "0x60022E9")]
		[Address(RVA = "0x4EDDE20", Offset = "0x4EDDE20", VA = "0x4EDDE20")]
		internal void Invoke()
		{
		}
	}

	[Token(Token = "0x4001320")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IAsyncStateMachine m_stateMachine;

	[Token(Token = "0x4001321")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal Action m_defaultContextAction;

	[Token(Token = "0x60022DE")]
	[Address(RVA = "0x4EDC850", Offset = "0x4EDC850", VA = "0x4EDC850")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022DF")]
	[Address(RVA = "0x4EDD410", Offset = "0x4EDD410", VA = "0x4EDD410")]
	internal Action GetCompletionAction(Task taskForTracing, ref MoveNextRunner runnerToInitialize)
	{
		return null;
	}

	[Token(Token = "0x60022E0")]
	[Address(RVA = "0x4EDD680", Offset = "0x4EDD680", VA = "0x4EDD680")]
	private Action OutputAsyncCausalityEvents(Task innerTask, Action continuation)
	{
		return null;
	}

	[Token(Token = "0x60022E1")]
	[Address(RVA = "0x4EDD800", Offset = "0x4EDD800", VA = "0x4EDD800")]
	internal void PostBoxInitialization(IAsyncStateMachine stateMachine, MoveNextRunner runner, Task builtTask)
	{
	}

	[Token(Token = "0x60022E2")]
	[Address(RVA = "0x4EDCC50", Offset = "0x4EDCC50", VA = "0x4EDCC50")]
	internal static void ThrowAsync(Exception exception, SynchronizationContext targetContext)
	{
	}

	[Token(Token = "0x60022E3")]
	[Address(RVA = "0x4EDD760", Offset = "0x4EDD760", VA = "0x4EDD760")]
	internal static Action CreateContinuationWrapper(Action continuation, Action invokeAction, [Optional] Task innerTask)
	{
		return null;
	}

	[Token(Token = "0x60022E4")]
	[Address(RVA = "0x4EDDA80", Offset = "0x4EDDA80", VA = "0x4EDDA80")]
	internal static Task TryGetContinuationTask(Action action)
	{
		return null;
	}
}
