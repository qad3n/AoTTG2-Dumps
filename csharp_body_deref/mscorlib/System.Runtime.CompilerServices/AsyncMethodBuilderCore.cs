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

[Token(Token = "0x20004C5")]
internal struct AsyncMethodBuilderCore
{
	[Token(Token = "0x20004C6")]
	internal sealed class MoveNextRunner
	{
		[Token(Token = "0x4001324")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExecutionContext m_context;

		[Token(Token = "0x4001325")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IAsyncStateMachine m_stateMachine;

		[Token(Token = "0x4001326")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeMoveNext;

		[Token(Token = "0x6002365")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		internal MoveNextRunner(ExecutionContext context, IAsyncStateMachine stateMachine)
		{
		}

		[Token(Token = "0x6002366")]
		[Address(RVA = "0x1A2DCA0", Offset = "0x1A2C2A0", VA = "0x181A2DCA0")]
		internal void Run()
		{
		}

		[Token(Token = "0x6002367")]
		[Address(RVA = "0x1A2DC00", Offset = "0x1A2C200", VA = "0x181A2DC00")]
		private static void InvokeMoveNext(object stateMachine)
		{
		}
	}

	[Token(Token = "0x20004C7")]
	private class ContinuationWrapper
	{
		[Token(Token = "0x4001327")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal readonly Action m_continuation;

		[Token(Token = "0x4001328")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly Action m_invokeAction;

		[Token(Token = "0x4001329")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal readonly Task m_innerTask;

		[Token(Token = "0x6002368")]
		[Address(RVA = "0x1A299F0", Offset = "0x1A27FF0", VA = "0x181A299F0")]
		internal ContinuationWrapper(Action continuation, Action invokeAction, Task innerTask)
		{
		}

		[Token(Token = "0x6002369")]
		[Address(RVA = "0x1A299C0", Offset = "0x1A27FC0", VA = "0x181A299C0")]
		internal void Invoke()
		{
		}
	}

	[Token(Token = "0x4001322")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IAsyncStateMachine m_stateMachine;

	[Token(Token = "0x4001323")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal Action m_defaultContextAction;

	[Token(Token = "0x600235E")]
	[Address(RVA = "0x1A28240", Offset = "0x1A26840", VA = "0x181A28240")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x600235F")]
	[Address(RVA = "0x1A27C70", Offset = "0x1A26270", VA = "0x181A27C70")]
	internal Action GetCompletionAction(Task taskForTracing, ref MoveNextRunner runnerToInitialize)
	{
		return null;
	}

	[Token(Token = "0x6002360")]
	[Address(RVA = "0x1A27E90", Offset = "0x1A26490", VA = "0x181A27E90")]
	private Action OutputAsyncCausalityEvents(Task innerTask, Action continuation)
	{
		return null;
	}

	[Token(Token = "0x6002361")]
	[Address(RVA = "0x1A28070", Offset = "0x1A26670", VA = "0x181A28070")]
	internal void PostBoxInitialization(IAsyncStateMachine stateMachine, MoveNextRunner runner, Task builtTask)
	{
	}

	[Token(Token = "0x6002362")]
	[Address(RVA = "0x1A28310", Offset = "0x1A26910", VA = "0x181A28310")]
	internal static void ThrowAsync(Exception exception, SynchronizationContext targetContext)
	{
	}

	[Token(Token = "0x6002363")]
	[Address(RVA = "0x1A27B50", Offset = "0x1A26150", VA = "0x181A27B50")]
	internal static Action CreateContinuationWrapper(Action continuation, Action invokeAction, [Optional] Task innerTask)
	{
		return null;
	}

	[Token(Token = "0x6002364")]
	[Address(RVA = "0x1A285F0", Offset = "0x1A26BF0", VA = "0x181A285F0")]
	internal static Task TryGetContinuationTask(Action action)
	{
		return null;
	}
}
