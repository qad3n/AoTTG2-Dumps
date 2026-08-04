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
[Token(Token = "0x2000627")]
[DebuggerTypeProxy(typeof(System.Collections.Concurrent.IProducerConsumerCollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class ConcurrentQueue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Token(Token = "0x2000628")]
	[DebuggerDisplay("Capacity = {Capacity}")]
	internal sealed class Segment
	{
		[StructLayout((LayoutKind)3)]
		[Token(Token = "0x2000629")]
		[DebuggerDisplay("Item = {Item}, SequenceNumber = {SequenceNumber}")]
		internal struct Slot
		{
			[Token(Token = "0x4001AD4")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public T Item;

			[Token(Token = "0x4001AD5")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public int SequenceNumber;
		}

		[Token(Token = "0x4001ACE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly Slot[] _slots;

		[Token(Token = "0x4001ACF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal readonly int _slotsMask;

		[Token(Token = "0x4001AD0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal System.Collections.Concurrent.PaddedHeadAndTail _headAndTail;

		[Token(Token = "0x4001AD1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _preservedForObservation;

		[Token(Token = "0x4001AD2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal bool _frozenForEnqueues;

		[Token(Token = "0x4001AD3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal Segment _nextSegment;

		[Token(Token = "0x170007AE")]
		internal int Capacity
		{
			[Token(Token = "0x6003090")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x170007AF")]
		internal int FreezeOffset
		{
			[Token(Token = "0x6003091")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x600308F")]
		public Segment(int boundedLength)
		{
		}

		[Token(Token = "0x6003092")]
		internal void EnsureFrozenForEnqueues()
		{
		}

		[Token(Token = "0x6003093")]
		public bool TryDequeue(out T item)
		{
			return default(bool);
		}

		[Token(Token = "0x6003094")]
		public bool TryPeek(out T result, bool resultUsed)
		{
			return default(bool);
		}

		[Token(Token = "0x6003095")]
		public bool TryEnqueue(T item)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x200062A")]
	[CompilerGenerated]
	private sealed class _003CEnumerate_003Ed__28 : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001AD6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001AD7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private T _003C_003E2__current;

		[Token(Token = "0x4001AD8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment head;

		[Token(Token = "0x4001AD9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Segment tail;

		[Token(Token = "0x4001ADA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int tailTail;

		[Token(Token = "0x4001ADB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int headHead;

		[Token(Token = "0x4001ADC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ConcurrentQueue<T> _003C_003E4__this;

		[Token(Token = "0x4001ADD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003CheadTail_003E5__2;

		[Token(Token = "0x4001ADE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4001ADF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Segment _003Cs_003E5__4;

		[Token(Token = "0x4001AE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x170007B0")]
		private T System_002ECollections_002EGeneric_002EIEnumerator_003CT_003E_002ECurrent
		{
			[Token(Token = "0x6003099")]
			[DebuggerHidden]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007B1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600309B")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003096")]
		[DebuggerHidden]
		public _003CEnumerate_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003097")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003098")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600309A")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001AC9")]
	private const int InitialSegmentLength = 32;

	[Token(Token = "0x4001ACA")]
	private const int MaxSegmentLength = 1048576;

	[Token(Token = "0x4001ACB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private object _crossSegmentLock;

	[Token(Token = "0x4001ACC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _tail;

	[Token(Token = "0x4001ACD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Segment _head;

	[Token(Token = "0x170007AA")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600307D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007AB")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600307E")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007AC")]
	public bool IsEmpty
	{
		[Token(Token = "0x6003080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007AD")]
	public int Count
	{
		[Token(Token = "0x6003082")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600307B")]
	public ConcurrentQueue()
	{
	}

	[Token(Token = "0x600307C")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600307F")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003081")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6003083")]
	private static int GetCount(Segment s, int head, int tail)
	{
		return default(int);
	}

	[Token(Token = "0x6003084")]
	private static long GetCount(Segment head, int headHead, Segment tail, int tailTail)
	{
		return default(long);
	}

	[Token(Token = "0x6003085")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6003086")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003087")]
	private void SnapForObservation(out Segment head, out int headHead, out Segment tail, out int tailTail)
	{
	}

	[Token(Token = "0x6003088")]
	private T GetItemWhenAvailable(Segment segment, int i)
	{
		return (T)null;
	}

	[Token(Token = "0x6003089")]
	[IteratorStateMachine(typeof(ConcurrentQueue<>._003CEnumerate_003Ed__28))]
	private IEnumerator<T> Enumerate(Segment head, int headHead, Segment tail, int tailTail)
	{
		return null;
	}

	[Token(Token = "0x600308A")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x600308B")]
	private void EnqueueSlow(T item)
	{
	}

	[Token(Token = "0x600308C")]
	public bool TryDequeue(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x600308D")]
	private bool TryDequeueSlow(out T item)
	{
		return default(bool);
	}

	[Token(Token = "0x600308E")]
	private bool TryPeek(out T result, bool resultUsed)
	{
		return default(bool);
	}
}
