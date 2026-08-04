// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3BC3160", Offset = "0x3BC3160", VA = "0x3BC3160")]
		internal MoveNextRunner(ExecutionContext context, IAsyncStateMachine stateMachine)
		{
		}

		[Token(Token = "0x60022E6")]
		[Address(RVA = "0x3BC3620", Offset = "0x3BC3620", VA = "0x3BC3620")]
		internal void Run()
		{
		}

		[Token(Token = "0x60022E7")]
		[Address(RVA = "0x3BC3860", Offset = "0x3BC3860", VA = "0x3BC3860")]
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
		[Address(RVA = "0x3BC34D0", Offset = "0x3BC34D0", VA = "0x3BC34D0")]
		internal ContinuationWrapper(Action continuation, Action invokeAction, Task innerTask)
		{
		}

		[Token(Token = "0x60022E9")]
		[Address(RVA = "0x3BC3940", Offset = "0x3BC3940", VA = "0x3BC3940")]
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
	[Address(RVA = "0x3BC2370", Offset = "0x3BC2370", VA = "0x3BC2370")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022DF")]
	[Address(RVA = "0x3BC2F30", Offset = "0x3BC2F30", VA = "0x3BC2F30")]
	internal Action GetCompletionAction(Task taskForTracing, ref MoveNextRunner runnerToInitialize)
	{
		return null;
	}

	[Token(Token = "0x60022E0")]
	[Address(RVA = "0x3BC31A0", Offset = "0x3BC31A0", VA = "0x3BC31A0")]
	private Action OutputAsyncCausalityEvents(Task innerTask, Action continuation)
	{
		return null;
	}

	[Token(Token = "0x60022E1")]
	[Address(RVA = "0x3BC3320", Offset = "0x3BC3320", VA = "0x3BC3320")]
	internal void PostBoxInitialization(IAsyncStateMachine stateMachine, MoveNextRunner runner, Task builtTask)
	{
	}

	[Token(Token = "0x60022E2")]
	[Address(RVA = "0x3BC2770", Offset = "0x3BC2770", VA = "0x3BC2770")]
	internal static void ThrowAsync(Exception exception, SynchronizationContext targetContext)
	{
	}

	[Token(Token = "0x60022E3")]
	[Address(RVA = "0x3BC3280", Offset = "0x3BC3280", VA = "0x3BC3280")]
	internal static Action CreateContinuationWrapper(Action continuation, Action invokeAction, [Optional] Task innerTask)
	{
		return null;
	}

	[Token(Token = "0x60022E4")]
	[Address(RVA = "0x3BC35A0", Offset = "0x3BC35A0", VA = "0x3BC35A0")]
	internal static Task TryGetContinuationTask(Action action)
	{
		return null;
	}
}
