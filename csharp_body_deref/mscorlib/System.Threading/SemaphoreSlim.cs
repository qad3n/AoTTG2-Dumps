using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001EE")]
[DebuggerDisplay("Current Count = {m_currentCount}")]
[ComVisible(false)]
public class SemaphoreSlim : IDisposable
{
	[Token(Token = "0x20001EF")]
	private sealed class TaskNode : Task<bool>, System.Threading.IThreadPoolWorkItem
	{
		[Token(Token = "0x4000990")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal TaskNode Prev;

		[Token(Token = "0x4000991")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal TaskNode Next;

		[Token(Token = "0x6001208")]
		[Address(RVA = "0x50498F0", Offset = "0x50498F0", VA = "0x50498F0")]
		internal TaskNode()
		{
		}

		[Token(Token = "0x6001209")]
		[Address(RVA = "0x504A280", Offset = "0x504A280", VA = "0x504A280", Slot = "4")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
		{
		}

		[Token(Token = "0x600120A")]
		[Address(RVA = "0x504A2C0", Offset = "0x504A2C0", VA = "0x504A2C0", Slot = "5")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001F0")]
	[CompilerGenerated]
	private struct _003CWaitUntilCountOrTimeoutAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000992")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000993")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000994")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000995")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public TaskNode asyncWaiter;

		[Token(Token = "0x4000996")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int millisecondsTimeout;

		[Token(Token = "0x4000997")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public SemaphoreSlim _003C_003E4__this;

		[Token(Token = "0x4000998")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000999")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private object _003C_003E7__wrap2;

		[Token(Token = "0x400099A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400099B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600120B")]
		[Address(RVA = "0x504A2D0", Offset = "0x504A2D0", VA = "0x504A2D0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600120C")]
		[Address(RVA = "0x504AD30", Offset = "0x504AD30", VA = "0x504AD30", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000985")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_currentCount;

	[Token(Token = "0x4000986")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private readonly int m_maxCount;

	[Token(Token = "0x4000987")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_waitCount;

	[Token(Token = "0x4000988")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_lockObj;

	[Token(Token = "0x4000989")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ManualResetEvent m_waitHandle;

	[Token(Token = "0x400098A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TaskNode m_asyncHead;

	[Token(Token = "0x400098B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private TaskNode m_asyncTail;

	[Token(Token = "0x400098C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task<bool> s_trueTask;

	[Token(Token = "0x400098D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Task<bool> s_falseTask;

	[Token(Token = "0x400098E")]
	private const int NO_MAXIMUM = int.MaxValue;

	[Token(Token = "0x400098F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action<object> s_cancellationTokenCanceledEventHandler;

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x50486A0", Offset = "0x50486A0", VA = "0x50486A0")]
	public SemaphoreSlim(int initialCount, int maxCount)
	{
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x5048840", Offset = "0x5048840", VA = "0x5048840")]
	public void Wait()
	{
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x5048F60", Offset = "0x5048F60", VA = "0x5048F60")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x5048850", Offset = "0x5048850", VA = "0x5048850")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x50493B0", Offset = "0x50493B0", VA = "0x50493B0")]
	private bool WaitUntilCountOrTimeout(int millisecondsTimeout, uint startTime, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x50496A0", Offset = "0x50496A0", VA = "0x50496A0")]
	public Task WaitAsync()
	{
		return null;
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x5048FF0", Offset = "0x5048FF0", VA = "0x5048FF0")]
	public Task<bool> WaitAsync(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x50496B0", Offset = "0x50496B0", VA = "0x50496B0")]
	private TaskNode CreateAndAddAsyncWaiter()
	{
		return null;
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x5049930", Offset = "0x5049930", VA = "0x5049930")]
	private bool RemoveAsyncWaiter(TaskNode task)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x5049790", Offset = "0x5049790", VA = "0x5049790")]
	[AsyncStateMachine(typeof(_003CWaitUntilCountOrTimeoutAsync_003Ed__32))]
	private Task<bool> WaitUntilCountOrTimeoutAsync(TaskNode asyncWaiter, int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x5049A20", Offset = "0x5049A20", VA = "0x5049A20")]
	public int Release()
	{
		return default(int);
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x5049A30", Offset = "0x5049A30", VA = "0x5049A30")]
	public int Release(int releaseCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x5049EB0", Offset = "0x5049EB0", VA = "0x5049EB0")]
	private static void QueueWaiterTask(TaskNode waiterTask)
	{
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x5049EC0", Offset = "0x5049EC0", VA = "0x5049EC0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001203")]
	[Address(RVA = "0x5049F30", Offset = "0x5049F30", VA = "0x5049F30", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001204")]
	[Address(RVA = "0x5049FE0", Offset = "0x5049FE0", VA = "0x5049FE0")]
	private static void CancellationTokenCanceledEventHandler(object obj)
	{
	}

	[Token(Token = "0x6001205")]
	[Address(RVA = "0x5048F70", Offset = "0x5048F70", VA = "0x5048F70")]
	private void CheckDispose()
	{
	}

	[Token(Token = "0x6001206")]
	[Address(RVA = "0x5048830", Offset = "0x5048830", VA = "0x5048830")]
	private static string GetResourceString(string str)
	{
		return null;
	}
}
