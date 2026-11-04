// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.Generic.LinkedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Collections.Generic;

[Serializable]
[Token(Token = "0x2000258")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class LinkedList<T> : ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Serializable]
	[Token(Token = "0x2000259")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x400085B")]
		[FieldOffset(Offset = "0x0")]
		private LinkedList<T> _list;

		[Token(Token = "0x400085C")]
		[FieldOffset(Offset = "0x0")]
		private LinkedListNode<T> _node;

		[Token(Token = "0x400085D")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400085E")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x400085F")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x17000344")]
		public T Current
		{
			[Token(Token = "0x600105B")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000345")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600105C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001059")]
		internal Enumerator(LinkedList<T> list)
		{
		}

		[Token(Token = "0x600105A")]
		private Enumerator(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600105D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600105E")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600105F")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001060")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001061")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}
	}

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> head;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x0")]
	internal int count;

	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x0")]
	internal int version;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000858")]
	private const string VersionName = "Version";

	[Token(Token = "0x4000859")]
	private const string CountName = "Count";

	[Token(Token = "0x400085A")]
	private const string ValuesName = "Data";

	[Token(Token = "0x1700033E")]
	public int Count
	{
		[Token(Token = "0x600103A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700033F")]
	public LinkedListNode<T> First
	{
		[Token(Token = "0x600103B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000340")]
	public LinkedListNode<T> Last
	{
		[Token(Token = "0x600103C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000341")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x600103D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000342")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001055")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000343")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001056")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001038")]
	public LinkedList()
	{
	}

	[Token(Token = "0x6001039")]
	protected LinkedList(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600103E")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x600103F")]
	public LinkedListNode<T> AddBefore(LinkedListNode<T> node, T value)
	{
		return null;
	}

	[Token(Token = "0x6001040")]
	public LinkedListNode<T> AddFirst(T value)
	{
		return null;
	}

	[Token(Token = "0x6001041")]
	public void AddFirst(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001042")]
	public LinkedListNode<T> AddLast(T value)
	{
		return null;
	}

	[Token(Token = "0x6001043")]
	public void AddLast(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001044")]
	public void Clear()
	{
	}

	[Token(Token = "0x6001045")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001046")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6001047")]
	public LinkedListNode<T> Find(T value)
	{
		return null;
	}

	[Token(Token = "0x6001048")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6001049")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x600104A")]
	public bool Remove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x600104B")]
	public void Remove(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x600104C")]
	public void RemoveFirst()
	{
	}

	[Token(Token = "0x600104D")]
	public void RemoveLast()
	{
	}

	[Token(Token = "0x600104E")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600104F")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001050")]
	private void InternalInsertNodeBefore(LinkedListNode<T> node, LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x6001051")]
	private void InternalInsertNodeToEmptyList(LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x6001052")]
	internal void InternalRemoveNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001053")]
	internal void ValidateNewNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001054")]
	internal void ValidateNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001057")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001058")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
