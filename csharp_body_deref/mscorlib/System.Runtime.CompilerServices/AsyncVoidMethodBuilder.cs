// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x2000492")]
public struct AsyncVoidMethodBuilder
{
	[Token(Token = "0x4001315")]
	[FieldOffset(Offset = "0x0")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4001316")]
	[FieldOffset(Offset = "0x8")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x4001317")]
	[FieldOffset(Offset = "0x18")]
	private Task m_task;

	[Token(Token = "0x1700047D")]
	internal Task Task
	{
		[Token(Token = "0x60022C6")]
		[Address(RVA = "0x3BC24D0", Offset = "0x3BC24D0", VA = "0x3BC24D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022BF")]
	[Address(RVA = "0x3BC22E0", Offset = "0x3BC22E0", VA = "0x3BC22E0")]
	public static AsyncVoidMethodBuilder Create()
	{
		return default(AsyncVoidMethodBuilder);
	}

	[Token(Token = "0x60022C0")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022C1")]
	[Address(RVA = "0x3BC2360", Offset = "0x3BC2360", VA = "0x3BC2360")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022C2")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022C3")]
	[Address(RVA = "0x3BC2420", Offset = "0x3BC2420", VA = "0x3BC2420")]
	public void SetResult()
	{
	}

	[Token(Token = "0x60022C4")]
	[Address(RVA = "0x3BC25F0", Offset = "0x3BC25F0", VA = "0x3BC25F0")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x60022C5")]
	[Address(RVA = "0x3BC2550", Offset = "0x3BC2550", VA = "0x3BC2550")]
	private void NotifySynchronizationContextOfCompletion()
	{
	}
}
