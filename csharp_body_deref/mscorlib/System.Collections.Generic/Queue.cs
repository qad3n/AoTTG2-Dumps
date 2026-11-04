// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Queue
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000633")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.QueueDebugView<>))]
public class Queue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000634")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x400195B")]
		[FieldOffset(Offset = "0x0")]
		private readonly Queue<T> _q;

		[Token(Token = "0x400195C")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x400195D")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x400195E")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x170007CA")]
		public T Current
		{
			[Token(Token = "0x6002FB3")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007CB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FB5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002FB0")]
		internal Enumerator(Queue<T> q)
		{
		}

		[Token(Token = "0x6002FB1")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002FB2")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FB4")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x6002FB6")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001955")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x4001956")]
	[FieldOffset(Offset = "0x0")]
	private int _head;

	[Token(Token = "0x4001957")]
	[FieldOffset(Offset = "0x0")]
	private int _tail;

	[Token(Token = "0x4001958")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4001959")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x400195A")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170007C7")]
	public int Count
	{
		[Token(Token = "0x6002F9F")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007C8")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007C9")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002FA1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F9C")]
	public Queue()
	{
	}

	[Token(Token = "0x6002F9D")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002F9E")]
	public Queue(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002FA2")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002FA3")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002FA4")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x6002FA5")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002FA6")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FA7")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002FA8")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FA9")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6002FAA")]
	public bool TryPeek(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002FAB")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002FAC")]
	private void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002FAD")]
	private void MoveNext(ref int index)
	{
	}

	[Token(Token = "0x6002FAE")]
	private void ThrowForEmptyQueue()
	{
	}

	[Token(Token = "0x6002FAF")]
	public void TrimExcess()
	{
	}
}
