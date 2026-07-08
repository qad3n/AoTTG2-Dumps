using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x200065F")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.QueueDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
[TypeForwardedFrom("System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089")]
public class Queue<T> : IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>
{
	[Serializable]
	[Token(Token = "0x2000660")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		[Token(Token = "0x4001B57")]
		[FieldOffset(Offset = "0x0")]
		private readonly Queue<T> _q;

		[Token(Token = "0x4001B58")]
		[FieldOffset(Offset = "0x0")]
		private readonly int _version;

		[Token(Token = "0x4001B59")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x4001B5A")]
		[FieldOffset(Offset = "0x0")]
		private T _currentElement;

		[Token(Token = "0x1700083B")]
		public T Current
		{
			[Token(Token = "0x6003299")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x1700083C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600329B")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003296")]
		internal Enumerator(Queue<T> q)
		{
		}

		[Token(Token = "0x6003297")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6003298")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600329A")]
		private void ThrowEnumerationNotStartedOrEnded()
		{
		}

		[Token(Token = "0x600329C")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001B4F")]
	[FieldOffset(Offset = "0x0")]
	private T[] _array;

	[Token(Token = "0x4001B50")]
	[FieldOffset(Offset = "0x0")]
	private int _head;

	[Token(Token = "0x4001B51")]
	[FieldOffset(Offset = "0x0")]
	private int _tail;

	[Token(Token = "0x4001B52")]
	[FieldOffset(Offset = "0x0")]
	private int _size;

	[Token(Token = "0x4001B53")]
	[FieldOffset(Offset = "0x0")]
	private int _version;

	[NonSerialized]
	[Token(Token = "0x4001B54")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4001B55")]
	private const int MinimumGrow = 4;

	[Token(Token = "0x4001B56")]
	private const int GrowFactor = 200;

	[Token(Token = "0x17000838")]
	public int Count
	{
		[Token(Token = "0x6003286")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000839")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6003287")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700083A")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6003288")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003284")]
	public Queue()
	{
	}

	[Token(Token = "0x6003285")]
	public Queue(int capacity)
	{
	}

	[Token(Token = "0x6003289")]
	public void Clear()
	{
	}

	[Token(Token = "0x600328A")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600328B")]
	public void Enqueue(T item)
	{
	}

	[Token(Token = "0x600328C")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600328D")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600328E")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600328F")]
	public T Dequeue()
	{
		return (T)null;
	}

	[Token(Token = "0x6003290")]
	public T Peek()
	{
		return (T)null;
	}

	[Token(Token = "0x6003291")]
	public T[] ToArray()
	{
		return null;
	}

	[Token(Token = "0x6003292")]
	private void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6003293")]
	private void MoveNext(ref int index)
	{
	}

	[Token(Token = "0x6003294")]
	private void ThrowForEmptyQueue()
	{
	}

	[Token(Token = "0x6003295")]
	public void TrimExcess()
	{
	}
}
