// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Concurrent.ConcurrentQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Collections.Concurrent;

[Serializable]
[Token(Token = "0x20005D6")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IProducerConsumerCollectionDebugView<>))]
public class ConcurrentQueue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Token(Token = "0x20005D7")]
	[DebuggerDisplay("Capacity = {Capacity}")]
	internal sealed class Segment
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x20005D8")]
		[DebuggerDisplay("Item = {Item}, SequenceNumber = {SequenceNumber}")]
		internal struct Slot
		{
			[Token(Token = "0x4001847")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public T Item;

			[Token(Token = "0x4001848")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int SequenceNumber;
		}

		[Token(Token = "0x4001841")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly Slot[] _slots;

		[Token(Token = "0x4001842")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly int _slotsMask;

		[Token(Token = "0x4001843")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal System.Collections.Concurrent.PaddedHeadAndTail _headAndTail;

		[Token(Token = "0x4001844")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _preservedForObservation;

		[Token(Token = "0x4001845")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _frozenForEnqueues;

		[Token(Token = "0x4001846")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Segment _nextSegment;

		[Token(Token = "0x1700073C")]
		internal int Capacity
		{
			[Token(Token = "0x6002D7E")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073D")]
		internal int FreezeOffset
		{
			[Token(Token = "0x6002D7F")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002D7D")]
		public Segment(int boundedLength)
		{
		}

		[Token(Token = "0x6002D80")]
		internal void EnsureFrozenForEnqueues()
		{
		}

		[Token(Token = "0x6002D81")]
		public bool TryDequeue(out T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D82")]
		public bool TryPeek(out T result, bool resultUsed)
		{
			return default(bool);
		}

		[Token(Token = "0x6002D83")]
		public bool TryEnqueue(T item)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20005D9")]
	[CompilerGenerated]
	private sealed class _003CEnumerate_003Ed__28 : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001849")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400184A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x400184B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment head;

		[Token(Token = "0x400184C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment tail;

		[Token(Token = "0x400184D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int tailTail;

		[Token(Token = "0x400184E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int headHead;

		[Token(Token = "0x400184F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ConcurrentQueue<T> _003C_003E4__this;

		[Token(Token = "0x4001850")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CheadTail_003E5__2;

		[Token(Token = "0x4001851")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001852")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Segment _003Cs_003E5__4;

		[Token(Token = "0x4001853")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700073E")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6002D87")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700073F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002D89")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002D84")]
		[DebuggerHidden]
		public _003CEnumerate_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002D85")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002D86")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002D88")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400183E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object _crossSegmentLock;

	[Token(Token = "0x400183F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _tail;

	[Token(Token = "0x4001840")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _head;

	[Token(Token = "0x17000738")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002D6B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000739")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002D6C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073A")]
	public bool IsEmpty
	{
		[Token(Token = "0x6002D6E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700073B")]
	public int Count
	{
		[Token(Token = "0x6002D70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D69")]
	public ConcurrentQueue()
	{
	}

	[Token(Token = "0x6002D6A")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002D6D")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D6F")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002D71")]
	private static int GetCount(Segment s, int head, int tail)
	{
		return default(int);
	}

	[Token(Token = "0x6002D72")]
	private static long GetCount(Segment head, int headHead, Segment tail, int tailTail)
	{
		return default(long);
	}

	[Token(Token = "0x6002D73")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002D74")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D75")]
	private void SnapForObservation(out Segment head, out int headHead, out Segment tail, out int tailTail)
	{
	}

	[Token(Token = "0x6002D76")]
	private T GetItemWhenAvailable(Segment segment, int i)
	{
		return (T)null;
	}

	[Token(Token = "0x6002D77")]
	[IteratorStateMachine(typeof(ConcurrentQueue<>._003CEnumerate_003Ed__28))]
	private IEnumerator<T> Enumerate(Segment head, int headHead, Segment tail, int tailTail)
	{
		return null;
	}

	[Token(Token = "0x6002D78")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x6002D79")]
	private void EnqueueSlow(T item)
	{
	}

	[Token(Token = "0x6002D7A")]
	public bool TryDequeue(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D7B")]
	private bool TryDequeueSlow(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D7C")]
	private bool TryPeek(out T result, bool resultUsed)
	{
		return default(bool);
	}
}
