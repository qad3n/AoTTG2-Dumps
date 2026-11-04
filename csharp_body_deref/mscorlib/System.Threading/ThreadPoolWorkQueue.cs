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

[Token(Token = "0x200023C")]
internal sealed class ThreadPoolWorkQueue
{
	[Token(Token = "0x200023D")]
	internal class SparseArray<T> where T : class
	{
		[Token(Token = "0x4000A45")]
		[FieldOffset(Offset = "0x0")]
		private T[] m_array;

		[Token(Token = "0x170001D1")]
		internal T[] Current
		{
			[Token(Token = "0x600134E")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600134D")]
		internal SparseArray(int initialSize)
		{
		}

		[Token(Token = "0x600134F")]
		internal int Add(T e)
		{
			return default(int);
		}

		[Token(Token = "0x6001350")]
		internal void Remove(T e)
		{
		}
	}

	[Token(Token = "0x200023E")]
	internal class WorkStealingQueue
	{
		[Token(Token = "0x4000A46")]
		[FieldOffset(Offset = "0x10")]
		internal System.Threading.IThreadPoolWorkItem[] m_array;

		[Token(Token = "0x4000A47")]
		[FieldOffset(Offset = "0x18")]
		private int m_mask;

		[Token(Token = "0x4000A48")]
		[FieldOffset(Offset = "0x1C")]
		private int m_headIndex;

		[Token(Token = "0x4000A49")]
		[FieldOffset(Offset = "0x20")]
		private int m_tailIndex;

		[Token(Token = "0x4000A4A")]
		[FieldOffset(Offset = "0x24")]
		private SpinLock m_foreignLock;

		[Token(Token = "0x6001351")]
		[Address(RVA = "0x1BC7070", Offset = "0x1BC5670", VA = "0x181BC7070")]
		public void LocalPush(System.Threading.IThreadPoolWorkItem obj)
		{
		}

		[Token(Token = "0x6001352")]
		[Address(RVA = "0x1BC69F0", Offset = "0x1BC4FF0", VA = "0x181BC69F0")]
		public bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6001353")]
		[Address(RVA = "0x1BC6D10", Offset = "0x1BC5310", VA = "0x181BC6D10")]
		public bool LocalPop(out System.Threading.IThreadPoolWorkItem obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6001354")]
		[Address(RVA = "0x1BC7870", Offset = "0x1BC5E70", VA = "0x181BC7870")]
		public bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal)
		{
			return default(bool);
		}

		[Token(Token = "0x6001355")]
		[Address(RVA = "0x1BC75C0", Offset = "0x1BC5BC0", VA = "0x181BC75C0")]
		private bool TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref bool missedSteal, int millisecondsTimeout)
		{
			return default(bool);
		}

		[Token(Token = "0x6001356")]
		[Address(RVA = "0x1BC7890", Offset = "0x1BC5E90", VA = "0x181BC7890")]
		public WorkStealingQueue()
		{
		}
	}

	[Token(Token = "0x200023F")]
	internal class QueueSegment
	{
		[Token(Token = "0x4000A4B")]
		[FieldOffset(Offset = "0x10")]
		internal readonly System.Threading.IThreadPoolWorkItem[] nodes;

		[Token(Token = "0x4000A4C")]
		[FieldOffset(Offset = "0x18")]
		private int indexes;

		[Token(Token = "0x4000A4D")]
		[FieldOffset(Offset = "0x20")]
		public QueueSegment Next;

		[Token(Token = "0x6001357")]
		[Address(RVA = "0x1BB1450", Offset = "0x1BAFA50", VA = "0x181BB1450")]
		private void GetIndexes(out int upper, out int lower)
		{
		}

		[Token(Token = "0x6001358")]
		[Address(RVA = "0x1BB13F0", Offset = "0x1BAF9F0", VA = "0x181BB13F0")]
		private bool CompareExchangeIndexes(ref int prevUpper, int newUpper, ref int prevLower, int newLower)
		{
			return default(bool);
		}

		[Token(Token = "0x6001359")]
		[Address(RVA = "0x1BB1710", Offset = "0x1BAFD10", VA = "0x181BB1710")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		public QueueSegment()
		{
		}

		[Token(Token = "0x600135A")]
		[Address(RVA = "0x1BB1490", Offset = "0x1BAFA90", VA = "0x181BB1490")]
		public bool IsUsedUp()
		{
			return default(bool);
		}

		[Token(Token = "0x600135B")]
		[Address(RVA = "0x1BB1640", Offset = "0x1BAFC40", VA = "0x181BB1640")]
		public bool TryEnqueue(System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}

		[Token(Token = "0x600135C")]
		[Address(RVA = "0x1BB14F0", Offset = "0x1BAFAF0", VA = "0x181BB14F0")]
		public bool TryDequeue(out System.Threading.IThreadPoolWorkItem node)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000A41")]
	[FieldOffset(Offset = "0x10")]
	internal QueueSegment queueHead;

	[Token(Token = "0x4000A42")]
	[FieldOffset(Offset = "0x18")]
	internal QueueSegment queueTail;

	[Token(Token = "0x4000A43")]
	[FieldOffset(Offset = "0x0")]
	internal static SparseArray<WorkStealingQueue> allThreadQueues;

	[Token(Token = "0x4000A44")]
	[FieldOffset(Offset = "0x20")]
	private int numOutstandingThreadRequests;

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x1BC17E0", Offset = "0x1BBFDE0", VA = "0x181BC17E0")]
	public ThreadPoolWorkQueue()
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x1BC1560", Offset = "0x1BBFB60", VA = "0x181BC1560")]
	public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
	{
		return null;
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x1BC1600", Offset = "0x1BBFC00", VA = "0x181BC1600")]
	internal void EnsureThreadRequested()
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x1BC1700", Offset = "0x1BBFD00", VA = "0x181BC1700")]
	internal void MarkThreadRequestSatisfied()
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x1BC1350", Offset = "0x1BBF950", VA = "0x181BC1350")]
	public void Enqueue(System.Threading.IThreadPoolWorkItem callback, bool forceGlobal)
	{
	}

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x1BC16A0", Offset = "0x1BBFCA0", VA = "0x181BC16A0")]
	internal bool LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
	{
		return default(bool);
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x1BC0B80", Offset = "0x1BBF180", VA = "0x181BC0B80")]
	public void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out bool missedSteal)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x1BC0ED0", Offset = "0x1BBF4D0", VA = "0x181BC0ED0")]
	internal static bool Dispatch()
	{
		return default(bool);
	}
}
