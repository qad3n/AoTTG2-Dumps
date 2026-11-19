// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.Queue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200060E")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.QueueDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
public class Queue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x200060F")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40018C2")]
		[FieldOffset(Offset = "0x0")]
		private readonly Queue<T> _q;

		[Token(Token = "0x40018C3")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x40018C4")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x40018C5")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x170007C9")]
		public T Current
		{
			[Token(Token = "0x6002F92")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170007CA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F94")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F8F")]
		internal Enumerator(Queue<T> q)
		{
		}

		[Token(Token = "0x6002F90")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6002F91")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F93")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x6002F95")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40018BC")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x40018BD")]
	[FieldOffset(Offset = "0x0")]
	private int _head;

	[Token(Token = "0x40018BE")]
	[FieldOffset(Offset = "0x0")]
	private int _tail;

	[Token(Token = "0x40018BF")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x40018C0")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x40018C1")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x170007C6")]
	public int Count
	{
		[Token(Token = "0x6002F7E")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007C7")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F7F")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007C8")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6002F7B")]
	public Queue()
	{
	}

	[Token(Token = "0x6002F7C")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6002F7D")]
	public Queue(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6002F81")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F82")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F83")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x6002F84")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6002F85")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F86")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F87")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6002F88")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6002F89")]
	public bool TryPeek(out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F8A")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6002F8B")]
	private void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6002F8C")]
	private void MoveNext(ref int index)
	{
	}

	[Token(Token = "0x6002F8D")]
	private void ThrowForEmptyQueue()
	{
	}

	[Token(Token = "0x6002F8E")]
	public void TrimExcess()
	{
	}
}
