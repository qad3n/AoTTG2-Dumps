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

[Token(Token = "0x2000214")]
internal sealed class ThreadPoolWorkQueue
{
	[Token(Token = "0x2000215")]
	internal class SparseArray<T> where T : class
	{
		[Token(Token = "0x40009A3")]
		[FieldOffset(Offset = "0x0")]
		private T[] m_array;

		[Token(Token = "0x170001D0")]
		internal T[] Current
		{
			[Token(Token = "0x6001325")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001324")]
		internal SparseArray(int initialSize)
		{
		}

		[Token(Token = "0x6001326")]
		internal int Add(T e)
		{
			return default(int);
		}

		[Token(Token = "0x6001327")]
		internal void Remove(T e)
		{
		}
	}

	[Token(Token = "0x2000216")]
	internal class WorkStealingQueue
	{
		[Token(Token = "0x40009A4")]
		[FieldOffset(Offset = "0x10")]
		internal System.Threading.IThreadPoolWorkItem[] m_array;

		[Token(Token = "0x40009A5")]
		[FieldOffset(Offset = "0x18")]
		private int m_mask;

		[Token(Token = "0x40009A6")]
		[FieldOffset(Offset = "0x1C")]
		private int m_headIndex;

		[Token(Token = "0x40009A7")]
		[FieldOffset(Offset = "0x20")]
		private int m_tailIndex;

		[Token(Token = "0x40009A8")]
		[FieldOffset(Offset = "0x24")]
		private SpinLock m_foreignLock;

		[Token(Token = "0x6001328")]
		[Address(RVA = "0x553A690", Offset = "0x5539690", VA = "0x553A690")]
		public void LocalPush(System.Threading.IThreadPoolWorkItem obj)
		{
		}

		[Token(Token = "0x6001329")]
		[Address(RVA = "0x553AD80", Offset = "0x5539D80", VA = "0x553AD80")]
		public bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600132A")]
		[Address(RVA = "0x553B2E0", Offset = "0x553A2E0", VA = "0x553B2E0")]
		public bool LocalPop(out System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600132B")]
		[Address(RVA = "0x553B830", Offset = "0x553A830", VA = "0x553B830")]
		public bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal)
		{
			return default(bool);
		}

		[Token(Token = "0x600132C")]
		[Address(RVA = "0x553BDE0", Offset = "0x553ADE0", VA = "0x553BDE0")]
		private bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal, int millisecondsTimeout)
		{
			return default(bool);
		}

		[Token(Token = "0x600132D")]
		[Address(RVA = "0x553C0D0", Offset = "0x553B0D0", VA = "0x553C0D0")]
		public WorkStealingQueue()
		{
		}
	}

	[Token(Token = "0x2000217")]
	internal class QueueSegment
	{
		[Token(Token = "0x40009A9")]
		[FieldOffset(Offset = "0x10")]
		internal readonly System.Threading.IThreadPoolWorkItem[] nodes;

		[Token(Token = "0x40009AA")]
		[FieldOffset(Offset = "0x18")]
		private int indexes;

		[Token(Token = "0x40009AB")]
		[FieldOffset(Offset = "0x20")]
		public QueueSegment Next;

		[Token(Token = "0x600132E")]
		[Address(RVA = "0x553C160", Offset = "0x553B160", VA = "0x553C160")]
		private void GetIndexes(out int upper, out int lower)
		{
		}

		[Token(Token = "0x600132F")]
		[Address(RVA = "0x553C190", Offset = "0x553B190", VA = "0x553C190")]
		private bool CompareExchangeIndexes(ref int prevUpper, int newUpper, ref int prevLower, int newLower)
		{
			return default(bool);
		}

		[Token(Token = "0x6001330")]
		[Address(RVA = "0x553A160", Offset = "0x5539160", VA = "0x553A160")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		public QueueSegment()
		{
		}

		[Token(Token = "0x6001331")]
		[Address(RVA = "0x553B7F0", Offset = "0x553A7F0", VA = "0x553B7F0")]
		public bool IsUsedUp()
		{
			return default(bool);
		}

		[Token(Token = "0x6001332")]
		[Address(RVA = "0x553AC40", Offset = "0x5539C40", VA = "0x553AC40")]
		public bool TryEnqueue(System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}

		[Token(Token = "0x6001333")]
		[Address(RVA = "0x553B670", Offset = "0x553A670", VA = "0x553B670")]
		public bool TryDequeue(out System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x10")]
	internal QueueSegment queueHead;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x18")]
	internal QueueSegment queueTail;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x0")]
	internal static SparseArray<WorkStealingQueue> allThreadQueues;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x20")]
	private int numOutstandingThreadRequests;

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x553A0A0", Offset = "0x55390A0", VA = "0x553A0A0")]
	public ThreadPoolWorkQueue()
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x553A1C0", Offset = "0x55391C0", VA = "0x553A1C0")]
	public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
	{
		return null;
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x553A370", Offset = "0x5539370", VA = "0x553A370")]
	internal void EnsureThreadRequested()
	{
	}

	[Token(Token = "0x600131E")]
	[Address(RVA = "0x553A420", Offset = "0x5539420", VA = "0x553A420")]
	internal void MarkThreadRequestSatisfied()
	{
	}

	[Token(Token = "0x600131F")]
	[Address(RVA = "0x553A470", Offset = "0x5539470", VA = "0x553A470")]
	public void Enqueue(System.Threading.IThreadPoolWorkItem callback, bool forceGlobal)
	{
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x553AD20", Offset = "0x5539D20", VA = "0x553AD20")]
	internal bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
	{
		return default(bool);
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x553B0E0", Offset = "0x553A0E0", VA = "0x553B0E0")]
	public void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out bool missedSteal)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x553B840", Offset = "0x553A840", VA = "0x553B840")]
	internal static bool Dispatch()
	{
		return default(bool);
	}
}
