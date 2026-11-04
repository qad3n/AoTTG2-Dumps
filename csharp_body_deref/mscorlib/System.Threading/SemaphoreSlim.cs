// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SemaphoreSlim
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000219")]
[ComVisible(false)]
[DebuggerDisplay("Current Count = {m_currentCount}")]
public class SemaphoreSlim : IDisposable
{
	[Token(Token = "0x200021A")]
	private sealed class TaskNode : Task<bool>, System.Threading.IThreadPoolWorkItem
	{
		[Token(Token = "0x40009E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal TaskNode Prev;

		[Token(Token = "0x40009E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal TaskNode Next;

		[Token(Token = "0x6001263")]
		[Address(RVA = "0x1BA5CC0", Offset = "0x1BA42C0", VA = "0x181BA5CC0")]
		internal TaskNode()
		{
		}

		[Token(Token = "0x6001264")]
		[Address(RVA = "0x1BA5C80", Offset = "0x1BA4280", VA = "0x181BA5C80", Slot = "4")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
		{
		}

		[Token(Token = "0x6001265")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200021B")]
	[CompilerGenerated]
	private struct _003CWaitUntilCountOrTimeoutAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x40009E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x40009E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x40009E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x40009E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public TaskNode asyncWaiter;

		[Token(Token = "0x40009E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int millisecondsTimeout;

		[Token(Token = "0x40009E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public SemaphoreSlim _003C_003E4__this;

		[Token(Token = "0x40009EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x40009EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private object _003C_003E7__wrap2;

		[Token(Token = "0x40009EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x40009ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001266")]
		[Address(RVA = "0x1BA8440", Offset = "0x1BA6A40", VA = "0x181BA8440", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001267")]
		[Address(RVA = "0x1BA8D50", Offset = "0x1BA7350", VA = "0x181BA8D50", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40009D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_currentCount;

	[Token(Token = "0x40009D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private readonly int m_maxCount;

	[Token(Token = "0x40009DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_waitCount;

	[Token(Token = "0x40009DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_lockObj;

	[Token(Token = "0x40009DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ManualResetEvent m_waitHandle;

	[Token(Token = "0x40009DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TaskNode m_asyncHead;

	[Token(Token = "0x40009DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private TaskNode m_asyncTail;

	[Token(Token = "0x40009DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task<bool> s_trueTask;

	[Token(Token = "0x40009E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Task<bool> s_falseTask;

	[Token(Token = "0x40009E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action<object> s_cancellationTokenCanceledEventHandler;

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x1BA4990", Offset = "0x1BA2F90", VA = "0x181BA4990")]
	public SemaphoreSlim(int initialCount, int maxCount)
	{
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x1BA4810", Offset = "0x1BA2E10", VA = "0x181BA4810")]
	public void Wait()
	{
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x1BA40E0", Offset = "0x1BA26E0", VA = "0x181BA40E0")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x1BA40F0", Offset = "0x1BA26F0", VA = "0x181BA40F0")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x1BA3FD0", Offset = "0x1BA25D0", VA = "0x181BA3FD0")]
	private bool WaitUntilCountOrTimeout(int millisecondsTimeout, uint startTime, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x1BA3930", Offset = "0x1BA1F30", VA = "0x181BA3930")]
	public Task WaitAsync()
	{
		return null;
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x1BA3940", Offset = "0x1BA1F40", VA = "0x181BA3940")]
	public Task<bool> WaitAsync(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x1BA3360", Offset = "0x1BA1960", VA = "0x181BA3360")]
	private TaskNode CreateAndAddAsyncWaiter()
	{
		return null;
	}

	[Token(Token = "0x6001258")]
	[Address(RVA = "0x1BA3840", Offset = "0x1BA1E40", VA = "0x181BA3840")]
	private bool RemoveAsyncWaiter(TaskNode task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001259")]
	[Address(RVA = "0x1BA3EA0", Offset = "0x1BA24A0", VA = "0x181BA3EA0")]
	[AsyncStateMachine(typeof(_003CWaitUntilCountOrTimeoutAsync_003Ed__32))]
	private Task<bool> WaitUntilCountOrTimeoutAsync(TaskNode asyncWaiter, int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600125A")]
	[Address(RVA = "0x1BA3830", Offset = "0x1BA1E30", VA = "0x181BA3830")]
	public int Release()
	{
		return default(int);
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x1BA3560", Offset = "0x1BA1B60", VA = "0x181BA3560")]
	public int Release(int releaseCount)
	{
		return default(int);
	}

	[Token(Token = "0x600125C")]
	[Address(RVA = "0x1BA3550", Offset = "0x1BA1B50", VA = "0x181BA3550")]
	private static void QueueWaiterTask(TaskNode waiterTask)
	{
	}

	[Token(Token = "0x600125D")]
	[Address(RVA = "0x1BA3430", Offset = "0x1BA1A30", VA = "0x181BA3430", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x1BA3490", Offset = "0x1BA1A90", VA = "0x181BA3490", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600125F")]
	[Address(RVA = "0x1BA31D0", Offset = "0x1BA17D0", VA = "0x181BA31D0")]
	private static void CancellationTokenCanceledEventHandler(object obj)
	{
	}

	[Token(Token = "0x6001260")]
	[Address(RVA = "0x1BA32D0", Offset = "0x1BA18D0", VA = "0x181BA32D0")]
	private void CheckDispose()
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x1BA3540", Offset = "0x1BA1B40", VA = "0x181BA3540")]
	private static string GetResourceString(string str)
	{
		return null;
	}
}
