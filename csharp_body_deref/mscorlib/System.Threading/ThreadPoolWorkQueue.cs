// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ThreadPoolWorkQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200020B")]
internal sealed class ThreadPoolWorkQueue
{
	[Token(Token = "0x200020C")]
	internal class SparseArray<T> where T : class
	{
		[Token(Token = "0x40009E7")]
		[FieldOffset(Offset = "0x0")]
		private T[] m_array;

		[Token(Token = "0x170001CD")]
		internal T[] Current
		{
			[Token(Token = "0x60012DD")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60012DC")]
		internal SparseArray(int initialSize)
		{
		}

		[Token(Token = "0x60012DE")]
		internal int Add(T e)
		{
			return default(int);
		}

		[Token(Token = "0x60012DF")]
		internal void Remove(T e)
		{
		}
	}

	[Token(Token = "0x200020D")]
	internal class WorkStealingQueue
	{
		[Token(Token = "0x40009E8")]
		[FieldOffset(Offset = "0x10")]
		internal System.Threading.IThreadPoolWorkItem[] m_array;

		[Token(Token = "0x40009E9")]
		[FieldOffset(Offset = "0x18")]
		private int m_mask;

		[Token(Token = "0x40009EA")]
		[FieldOffset(Offset = "0x1C")]
		private int m_headIndex;

		[Token(Token = "0x40009EB")]
		[FieldOffset(Offset = "0x20")]
		private int m_tailIndex;

		[Token(Token = "0x40009EC")]
		[FieldOffset(Offset = "0x24")]
		private SpinLock m_foreignLock;

		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x3D37870", Offset = "0x3D37870", VA = "0x3D37870")]
		public void LocalPush(System.Threading.IThreadPoolWorkItem obj)
		{
		}

		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x3D380E0", Offset = "0x3D380E0", VA = "0x3D380E0")]
		public bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x3D386B0", Offset = "0x3D386B0", VA = "0x3D386B0")]
		public bool LocalPop(out System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x3D38C40", Offset = "0x3D38C40", VA = "0x3D38C40")]
		public bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x3D39320", Offset = "0x3D39320", VA = "0x3D39320")]
		private bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal, int millisecondsTimeout)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x3D396B0", Offset = "0x3D396B0", VA = "0x3D396B0")]
		public WorkStealingQueue()
		{
		}
	}

	[Token(Token = "0x200020E")]
	internal class QueueSegment
	{
		[Token(Token = "0x40009ED")]
		[FieldOffset(Offset = "0x10")]
		internal readonly System.Threading.IThreadPoolWorkItem[] nodes;

		[Token(Token = "0x40009EE")]
		[FieldOffset(Offset = "0x18")]
		private int indexes;

		[Token(Token = "0x40009EF")]
		[FieldOffset(Offset = "0x20")]
		public QueueSegment Next;

		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x3D39740", Offset = "0x3D39740", VA = "0x3D39740")]
		private void GetIndexes(out int upper, out int lower)
		{
		}

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x3D39770", Offset = "0x3D39770", VA = "0x3D39770")]
		private bool CompareExchangeIndexes(ref int prevUpper, int newUpper, ref int prevLower, int newLower)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x3D37340", Offset = "0x3D37340", VA = "0x3D37340")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		public QueueSegment()
		{
		}

		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x3D38C00", Offset = "0x3D38C00", VA = "0x3D38C00")]
		public bool IsUsedUp()
		{
			return default(bool);
		}

		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x3D37FD0", Offset = "0x3D37FD0", VA = "0x3D37FD0")]
		public bool TryEnqueue(System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}

		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x3D38A90", Offset = "0x3D38A90", VA = "0x3D38A90")]
		public bool TryDequeue(out System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40009E3")]
	[FieldOffset(Offset = "0x10")]
	internal QueueSegment queueHead;

	[Token(Token = "0x40009E4")]
	[FieldOffset(Offset = "0x18")]
	internal QueueSegment queueTail;

	[Token(Token = "0x40009E5")]
	[FieldOffset(Offset = "0x0")]
	internal static SparseArray<WorkStealingQueue> allThreadQueues;

	[Token(Token = "0x40009E6")]
	[FieldOffset(Offset = "0x20")]
	private int numOutstandingThreadRequests;

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x3D37280", Offset = "0x3D37280", VA = "0x3D37280")]
	public ThreadPoolWorkQueue()
	{
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x3D373A0", Offset = "0x3D373A0", VA = "0x3D373A0")]
	public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
	{
		return null;
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x3D37550", Offset = "0x3D37550", VA = "0x3D37550")]
	internal void EnsureThreadRequested()
	{
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x3D37600", Offset = "0x3D37600", VA = "0x3D37600")]
	internal void MarkThreadRequestSatisfied()
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x3D37650", Offset = "0x3D37650", VA = "0x3D37650")]
	public void Enqueue(System.Threading.IThreadPoolWorkItem callback, bool forceGlobal)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x3D38090", Offset = "0x3D38090", VA = "0x3D38090")]
	internal bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x3D384C0", Offset = "0x3D384C0", VA = "0x3D384C0")]
	public void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out bool missedSteal)
	{
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x3D38C50", Offset = "0x3D38C50", VA = "0x3D38C50")]
	internal static bool Dispatch()
	{
		return default(bool);
	}
}
