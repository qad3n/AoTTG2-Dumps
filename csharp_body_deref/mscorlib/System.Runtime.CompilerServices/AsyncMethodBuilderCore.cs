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

[Token(Token = "0x200049E")]
internal struct AsyncMethodBuilderCore
{
	[Token(Token = "0x200049F")]
	internal sealed class MoveNextRunner
	{
		[Token(Token = "0x4001284")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly ExecutionContext m_context;

		[Token(Token = "0x4001285")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		internal IAsyncStateMachine m_stateMachine;

		[Token(Token = "0x4001286")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static ContextCallback s_invokeMoveNext;

		[Token(Token = "0x6002332")]
		[Address(RVA = "0x53CAAF0", Offset = "0x53C9AF0", VA = "0x53CAAF0")]
		internal MoveNextRunner(ExecutionContext context, IAsyncStateMachine stateMachine)
		{
		}

		[Token(Token = "0x6002333")]
		[Address(RVA = "0x53CAF90", Offset = "0x53C9F90", VA = "0x53CAF90")]
		internal void Run()
		{
		}

		[Token(Token = "0x6002334")]
		[Address(RVA = "0x53CB1B0", Offset = "0x53CA1B0", VA = "0x53CB1B0")]
		private static void InvokeMoveNext(object stateMachine)
		{
		}
	}

	[Token(Token = "0x20004A0")]
	private class ContinuationWrapper
	{
		[Token(Token = "0x4001287")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal readonly Action m_continuation;

		[Token(Token = "0x4001288")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly Action m_invokeAction;

		[Token(Token = "0x4001289")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		internal readonly Task m_innerTask;

		[Token(Token = "0x6002335")]
		[Address(RVA = "0x53CAE60", Offset = "0x53C9E60", VA = "0x53CAE60")]
		internal ContinuationWrapper(Action continuation, Action invokeAction, Task innerTask)
		{
		}

		[Token(Token = "0x6002336")]
		[Address(RVA = "0x53CB290", Offset = "0x53CA290", VA = "0x53CB290")]
		internal void Invoke()
		{
		}
	}

	[Token(Token = "0x4001282")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal IAsyncStateMachine m_stateMachine;

	[Token(Token = "0x4001283")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal Action m_defaultContextAction;

	[Token(Token = "0x600232B")]
	[Address(RVA = "0x53C9CB0", Offset = "0x53C8CB0", VA = "0x53C9CB0")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x600232C")]
	[Address(RVA = "0x53CA8C0", Offset = "0x53C98C0", VA = "0x53CA8C0")]
	internal Action GetCompletionAction(Task taskForTracing, ref MoveNextRunner runnerToInitialize)
	{
		return null;
	}

	[Token(Token = "0x600232D")]
	[Address(RVA = "0x53CAB30", Offset = "0x53C9B30", VA = "0x53CAB30")]
	private Action OutputAsyncCausalityEvents(Task innerTask, Action continuation)
	{
		return null;
	}

	[Token(Token = "0x600232E")]
	[Address(RVA = "0x53CACB0", Offset = "0x53C9CB0", VA = "0x53CACB0")]
	internal void PostBoxInitialization(IAsyncStateMachine stateMachine, MoveNextRunner runner, Task builtTask)
	{
	}

	[Token(Token = "0x600232F")]
	[Address(RVA = "0x53CA0C0", Offset = "0x53C90C0", VA = "0x53CA0C0")]
	internal static void ThrowAsync(Exception exception, SynchronizationContext targetContext)
	{
	}

	[Token(Token = "0x6002330")]
	[Address(RVA = "0x53CAC10", Offset = "0x53C9C10", VA = "0x53CAC10")]
	internal static Action CreateContinuationWrapper(Action continuation, Action invokeAction, [Optional] Task innerTask)
	{
		return null;
	}

	[Token(Token = "0x6002331")]
	[Address(RVA = "0x53CAF20", Offset = "0x53C9F20", VA = "0x53CAF20")]
	internal static Task TryGetContinuationTask(Action action)
	{
		return null;
	}
}
