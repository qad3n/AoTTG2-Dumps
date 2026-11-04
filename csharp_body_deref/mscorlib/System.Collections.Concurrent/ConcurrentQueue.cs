// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Concurrent.ConcurrentQueue
// Update status: CHANGED in this game update
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
[Token(Token = "0x20005FB")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IProducerConsumerCollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class ConcurrentQueue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Token(Token = "0x20005FC")]
	[DebuggerDisplay("Capacity = {Capacity}")]
	internal sealed class Segment
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x20005FD")]
		[DebuggerDisplay("Item = {Item}, SequenceNumber = {SequenceNumber}")]
		internal struct Slot
		{
			[Token(Token = "0x40018E0")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public T Item;

			[Token(Token = "0x40018E1")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int SequenceNumber;
		}

		[Token(Token = "0x40018DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly Slot[] _slots;

		[Token(Token = "0x40018DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly int _slotsMask;

		[Token(Token = "0x40018DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal System.Collections.Concurrent.PaddedHeadAndTail _headAndTail;

		[Token(Token = "0x40018DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _preservedForObservation;

		[Token(Token = "0x40018DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _frozenForEnqueues;

		[Token(Token = "0x40018DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Segment _nextSegment;

		[Token(Token = "0x1700073D")]
		internal int Capacity
		{
			[Token(Token = "0x6002DA3")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700073E")]
		internal int FreezeOffset
		{
			[Token(Token = "0x6002DA4")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x6002DA2")]
		public Segment(int boundedLength)
		{
		}

		[Token(Token = "0x6002DA5")]
		internal void EnsureFrozenForEnqueues()
		{
		}

		[Token(Token = "0x6002DA6")]
		public bool TryDequeue(out T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6002DA7")]
		public bool TryPeek(out T result, bool resultUsed)
		{
			return default(bool);
		}

		[Token(Token = "0x6002DA8")]
		public bool TryEnqueue(T item)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x20005FE")]
	[CompilerGenerated]
	private sealed class _003CEnumerate_003Ed__28 : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40018E2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x40018E3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x40018E4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment head;

		[Token(Token = "0x40018E5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment tail;

		[Token(Token = "0x40018E6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int tailTail;

		[Token(Token = "0x40018E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int headHead;

		[Token(Token = "0x40018E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ConcurrentQueue<T> _003C_003E4__this;

		[Token(Token = "0x40018E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CheadTail_003E5__2;

		[Token(Token = "0x40018EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x40018EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Segment _003Cs_003E5__4;

		[Token(Token = "0x40018EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700073F")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6002DAC")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000740")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002DAE")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002DA9")]
		[DebuggerHidden]
		public _003CEnumerate_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002DAA")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002DAB")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002DAD")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40018D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object _crossSegmentLock;

	[Token(Token = "0x40018D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _tail;

	[Token(Token = "0x40018D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _head;

	[Token(Token = "0x17000739")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700073A")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002D91")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700073B")]
	public bool IsEmpty
	{
		[Token(Token = "0x6002D93")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700073C")]
	public int Count
	{
		[Token(Token = "0x6002D95")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6002D8E")]
	public ConcurrentQueue()
	{
	}

	[Token(Token = "0x6002D8F")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002D92")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D94")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002D96")]
	private static int GetCount(Segment s, int head, int tail)
	{
		return default(int);
	}

	[Token(Token = "0x6002D97")]
	private static long GetCount(Segment head, int headHead, Segment tail, int tailTail)
	{
		return default(long);
	}

	[Token(Token = "0x6002D98")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002D99")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002D9A")]
	private void SnapForObservation(out Segment head, out int headHead, out Segment tail, out int tailTail)
	{
	}

	[Token(Token = "0x6002D9B")]
	private T GetItemWhenAvailable(Segment segment, int i)
	{
		return (T)null;
	}

	[Token(Token = "0x6002D9C")]
	[IteratorStateMachine(typeof(ConcurrentQueue<>._003CEnumerate_003Ed__28))]
	private IEnumerator<T> Enumerate(Segment head, int headHead, Segment tail, int tailTail)
	{
		return null;
	}

	[Token(Token = "0x6002D9D")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x6002D9E")]
	private void EnqueueSlow(T item)
	{
	}

	[Token(Token = "0x6002D9F")]
	public bool TryDequeue(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DA0")]
	private bool TryDequeueSlow(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DA1")]
	private bool TryPeek(out T result, bool resultUsed)
	{
		return default(bool);
	}
}
