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

[Token(Token = "0x200049A")]
public struct AsyncVoidMethodBuilder
{
	[Token(Token = "0x4001277")]
	[FieldOffset(Offset = "0x0")]
	private SynchronizationContext m_synchronizationContext;

	[Token(Token = "0x4001278")]
	[FieldOffset(Offset = "0x8")]
	private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState;

	[Token(Token = "0x4001279")]
	[FieldOffset(Offset = "0x18")]
	private Task m_task;

	[Token(Token = "0x1700047F")]
	internal Task Task
	{
		[Token(Token = "0x6002313")]
		[Address(RVA = "0x53C9E10", Offset = "0x53C8E10", VA = "0x53C9E10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600230C")]
	[Address(RVA = "0x53C9C30", Offset = "0x53C8C30", VA = "0x53C9C30")]
	public static AsyncVoidMethodBuilder Create()
	{
		return default(AsyncVoidMethodBuilder);
	}

	[Token(Token = "0x600230D")]
	[DebuggerStepThrough]
	public void Start<TStateMachine>(ref TStateMachine stateMachine) where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x600230E")]
	[Address(RVA = "0x53C9CA0", Offset = "0x53C8CA0", VA = "0x53C9CA0")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x600230F")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x6002310")]
	[Address(RVA = "0x53C9D60", Offset = "0x53C8D60", VA = "0x53C9D60")]
	public void SetResult()
	{
	}

	[Token(Token = "0x6002311")]
	[Address(RVA = "0x53C9F30", Offset = "0x53C8F30", VA = "0x53C9F30")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6002312")]
	[Address(RVA = "0x53C9E90", Offset = "0x53C8E90", VA = "0x53C9E90")]
	private void NotifySynchronizationContextOfCompletion()
	{
	}
}
