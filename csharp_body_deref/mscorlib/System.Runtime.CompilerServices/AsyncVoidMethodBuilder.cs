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
		[Address(RVA = "0x4EDC9B0", Offset = "0x4EDC9B0", VA = "0x4EDC9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60022BF")]
	[Address(RVA = "0x4EDC7C0", Offset = "0x4EDC7C0", VA = "0x4EDC7C0")]
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
	[Address(RVA = "0x4EDC840", Offset = "0x4EDC840", VA = "0x4EDC840")]
	public void SetStateMachine(IAsyncStateMachine stateMachine)
	{
	}

	[Token(Token = "0x60022C2")]
	public void AwaitUnsafeOnCompleted<TAwaiter, TStateMachine>(ref TAwaiter awaiter, ref TStateMachine stateMachine) where TAwaiter : ICriticalNotifyCompletion where TStateMachine : IAsyncStateMachine
	{
	}

	[Token(Token = "0x60022C3")]
	[Address(RVA = "0x4EDC900", Offset = "0x4EDC900", VA = "0x4EDC900")]
	public void SetResult()
	{
	}

	[Token(Token = "0x60022C4")]
	[Address(RVA = "0x4EDCAD0", Offset = "0x4EDCAD0", VA = "0x4EDCAD0")]
	public void SetException(Exception exception)
	{
	}

	[Token(Token = "0x60022C5")]
	[Address(RVA = "0x4EDCA30", Offset = "0x4EDCA30", VA = "0x4EDCA30")]
	private void NotifySynchronizationContextOfCompletion()
	{
	}
}
