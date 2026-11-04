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

[Token(Token = "0x20004C1")]
public struct AsyncVoidMethodBuilder
{
	[Token(Token = "0x4001317")]
	[FieldOffset(Offset = "0x0")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4001318")]
	[FieldOffset(Offset = "0x8")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x4001319")]
	[FieldOffset(Offset = "0x18")]
	private Task m_task;

	[Token(Token = "0x17000480")]
	internal Task Task
	{
		[Token(Token = "0x6002346")]
		[Address(RVA = "0x1A28EA0", Offset = "0x1A274A0", VA = "0x181A28EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600233F")]
	[Address(RVA = "0x1A28BA0", Offset = "0x1A271A0", VA = "0x181A28BA0")]
	public static AsyncVoidMethodBuilder Create()
	{
		return default(AsyncVoidMethodBuilder);
	}

	[Token(Token = "0x6002340")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002341")]
	[Address(RVA = "0x1A28DD0", Offset = "0x1A273D0", VA = "0x181A28DD0")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x6002342")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002343")]
	[Address(RVA = "0x1A28D70", Offset = "0x1A27370", VA = "0x181A28D70")]
	public void SetResult()
	{
	}

	[Token(Token = "0x6002344")]
	[Address(RVA = "0x1A28C50", Offset = "0x1A27250", VA = "0x181A28C50")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6002345")]
	[Address(RVA = "0x1A28C10", Offset = "0x1A27210", VA = "0x181A28C10")]
	private void NotifySynchronizationContextOfCompletion()
	{
	}
}
