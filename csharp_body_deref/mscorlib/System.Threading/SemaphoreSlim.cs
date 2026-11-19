// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SemaphoreSlim
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001F1")]
[ComVisible(false)]
[DebuggerDisplay("Current Count = {m_currentCount}")]
public class SemaphoreSlim : IDisposable
{
	[Token(Token = "0x20001F2")]
	private sealed class TaskNode : Task<bool>, System.Threading.IThreadPoolWorkItem
	{
		[Token(Token = "0x4000940")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		internal TaskNode Prev;

		[Token(Token = "0x4000941")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		internal TaskNode Next;

		[Token(Token = "0x600123A")]
		[Address(RVA = "0x5532410", Offset = "0x5531410", VA = "0x5532410")]
		internal TaskNode()
		{
		}

		[Token(Token = "0x600123B")]
		[Address(RVA = "0x5532D50", Offset = "0x5531D50", VA = "0x5532D50", Slot = "4")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EExecuteWorkItem()
		{
		}

		[Token(Token = "0x600123C")]
		[Address(RVA = "0x5532D90", Offset = "0x5531D90", VA = "0x5532D90", Slot = "5")]
		private void System_002EThreading_002EIThreadPoolWorkItem_002EMarkAborted(ThreadAbortException tae)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x20001F3")]
	[CompilerGenerated]
	private struct _003CWaitUntilCountOrTimeoutAsync_003Ed__32 : IAsyncStateMachine
	{
		[Token(Token = "0x4000942")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000943")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<bool> _003C_003Et__builder;

		[Token(Token = "0x4000944")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000945")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public TaskNode asyncWaiter;

		[Token(Token = "0x4000946")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int millisecondsTimeout;

		[Token(Token = "0x4000947")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public SemaphoreSlim _003C_003E4__this;

		[Token(Token = "0x4000948")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private CancellationTokenSource _003Ccts_003E5__2;

		[Token(Token = "0x4000949")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private object _003C_003E7__wrap2;

		[Token(Token = "0x400094A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable<Task>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400094B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x600123D")]
		[Address(RVA = "0x5532DA0", Offset = "0x5531DA0", VA = "0x5532DA0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600123E")]
		[Address(RVA = "0x55336B0", Offset = "0x55326B0", VA = "0x55336B0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int m_currentCount;

	[Token(Token = "0x4000937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private readonly int m_maxCount;

	[Token(Token = "0x4000938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_waitCount;

	[Token(Token = "0x4000939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private object m_lockObj;

	[Token(Token = "0x400093A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ManualResetEvent m_waitHandle;

	[Token(Token = "0x400093B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private TaskNode m_asyncHead;

	[Token(Token = "0x400093C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private TaskNode m_asyncTail;

	[Token(Token = "0x400093D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Task<bool> s_trueTask;

	[Token(Token = "0x400093E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly Task<bool> s_falseTask;

	[Token(Token = "0x400093F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static Action<object> s_cancellationTokenCanceledEventHandler;

	[Token(Token = "0x6001227")]
	[Address(RVA = "0x5531380", Offset = "0x5530380", VA = "0x5531380")]
	public SemaphoreSlim(int initialCount, int maxCount)
	{
	}

	[Token(Token = "0x6001228")]
	[Address(RVA = "0x5531520", Offset = "0x5530520", VA = "0x5531520")]
	public void Wait()
	{
	}

	[Token(Token = "0x6001229")]
	[Address(RVA = "0x5531C00", Offset = "0x5530C00", VA = "0x5531C00")]
	public bool Wait(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x5531530", Offset = "0x5530530", VA = "0x5531530")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x5532010", Offset = "0x5531010", VA = "0x5532010")]
	private bool WaitUntilCountOrTimeout(int millisecondsTimeout, uint startTime, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0x55321D0", Offset = "0x55311D0", VA = "0x55321D0")]
	public Task WaitAsync()
	{
		return null;
	}

	[Token(Token = "0x600122D")]
	[Address(RVA = "0x5531C90", Offset = "0x5530C90", VA = "0x5531C90")]
	public Task<bool> WaitAsync(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x600122E")]
	[Address(RVA = "0x55321E0", Offset = "0x55311E0", VA = "0x55321E0")]
	private TaskNode CreateAndAddAsyncWaiter()
	{
		return null;
	}

	[Token(Token = "0x600122F")]
	[Address(RVA = "0x5532450", Offset = "0x5531450", VA = "0x5532450")]
	private bool RemoveAsyncWaiter(TaskNode task)
	{
		return default(bool);
	}

	[Token(Token = "0x6001230")]
	[Address(RVA = "0x55322C0", Offset = "0x55312C0", VA = "0x55322C0")]
	[AsyncStateMachine(typeof(_003CWaitUntilCountOrTimeoutAsync_003Ed__32))]
	private Task<bool> WaitUntilCountOrTimeoutAsync(TaskNode asyncWaiter, int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6001231")]
	[Address(RVA = "0x5532540", Offset = "0x5531540", VA = "0x5532540")]
	public int Release()
	{
		return default(int);
	}

	[Token(Token = "0x6001232")]
	[Address(RVA = "0x5532550", Offset = "0x5531550", VA = "0x5532550")]
	public int Release(int releaseCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001233")]
	[Address(RVA = "0x5532990", Offset = "0x5531990", VA = "0x5532990")]
	private static void QueueWaiterTask(TaskNode waiterTask)
	{
	}

	[Token(Token = "0x6001234")]
	[Address(RVA = "0x55329A0", Offset = "0x55319A0", VA = "0x55329A0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001235")]
	[Address(RVA = "0x5532A10", Offset = "0x5531A10", VA = "0x5532A10", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001236")]
	[Address(RVA = "0x5532AC0", Offset = "0x5531AC0", VA = "0x5532AC0")]
	private static void CancellationTokenCanceledEventHandler(object obj)
	{
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x5531C10", Offset = "0x5530C10", VA = "0x5531C10")]
	private void CheckDispose()
	{
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x5531510", Offset = "0x5530510", VA = "0x5531510")]
	private static string GetResourceString(string str)
	{
		return null;
	}
}
