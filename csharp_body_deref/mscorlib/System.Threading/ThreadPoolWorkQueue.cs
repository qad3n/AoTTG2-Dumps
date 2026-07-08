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
		[Address(RVA = "0x5051D50", Offset = "0x5051D50", VA = "0x5051D50")]
		public void LocalPush(System.Threading.IThreadPoolWorkItem obj)
		{
		}

		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x50525C0", Offset = "0x50525C0", VA = "0x50525C0")]
		public bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x5052B90", Offset = "0x5052B90", VA = "0x5052B90")]
		public bool LocalPop(out System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x5053120", Offset = "0x5053120", VA = "0x5053120")]
		public bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x5053800", Offset = "0x5053800", VA = "0x5053800")]
		private bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal, int millisecondsTimeout)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x5053B90", Offset = "0x5053B90", VA = "0x5053B90")]
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
		[Address(RVA = "0x5053C20", Offset = "0x5053C20", VA = "0x5053C20")]
		private void GetIndexes(out int upper, out int lower)
		{
		}

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x5053C50", Offset = "0x5053C50", VA = "0x5053C50")]
		private bool CompareExchangeIndexes(ref int prevUpper, int newUpper, ref int prevLower, int newLower)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x5051820", Offset = "0x5051820", VA = "0x5051820")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		public QueueSegment()
		{
		}

		[Token(Token = "0x60012E9")]
		[Address(RVA = "0x50530E0", Offset = "0x50530E0", VA = "0x50530E0")]
		public bool IsUsedUp()
		{
			return default(bool);
		}

		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x50524B0", Offset = "0x50524B0", VA = "0x50524B0")]
		public bool TryEnqueue(System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}

		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x5052F70", Offset = "0x5052F70", VA = "0x5052F70")]
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
	[Address(RVA = "0x5051760", Offset = "0x5051760", VA = "0x5051760")]
	public ThreadPoolWorkQueue()
	{
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x5051880", Offset = "0x5051880", VA = "0x5051880")]
	public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
	{
		return null;
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x5051A30", Offset = "0x5051A30", VA = "0x5051A30")]
	internal void EnsureThreadRequested()
	{
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x5051AE0", Offset = "0x5051AE0", VA = "0x5051AE0")]
	internal void MarkThreadRequestSatisfied()
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x5051B30", Offset = "0x5051B30", VA = "0x5051B30")]
	public void Enqueue(System.Threading.IThreadPoolWorkItem callback, bool forceGlobal)
	{
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x5052570", Offset = "0x5052570", VA = "0x5052570")]
	internal bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
	{
		return default(bool);
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x50529A0", Offset = "0x50529A0", VA = "0x50529A0")]
	public void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out bool missedSteal)
	{
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x5053130", Offset = "0x5053130", VA = "0x5053130")]
	internal static bool Dispatch()
	{
		return default(bool);
	}
}
