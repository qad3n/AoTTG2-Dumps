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
[Token(Token = "0x2000219")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class LinkedList<T> : ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Serializable]
	[Token(Token = "0x200021A")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x400078C")]
		[FieldOffset(Offset = "0x0")]
		private LinkedList<T> _list;

		[Token(Token = "0x400078D")]
		[FieldOffset(Offset = "0x0")]
		private LinkedListNode<T> _node;

		[Token(Token = "0x400078E")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x400078F")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x4000790")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x17000315")]
		public T Current
		{
			[Token(Token = "0x6000E9B")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x17000316")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E9C")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E99")]
		internal Enumerator(LinkedList<T> list)
		{
		}

		[Token(Token = "0x6000E9A")]
		private Enumerator(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000E9D")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E9E")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000E9F")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000EA0")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000EA1")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}
	}

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> head;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x0")]
	internal int count;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x0")]
	internal int version;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000789")]
	private const string VersionName = "Version";

	[Token(Token = "0x400078A")]
	private const string CountName = "Count";

	[Token(Token = "0x400078B")]
	private const string ValuesName = "Data";

	[Token(Token = "0x1700030F")]
	public int Count
	{
		[Token(Token = "0x6000E7A")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000310")]
	public LinkedListNode<T> First
	{
		[Token(Token = "0x6000E7B")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000311")]
	public LinkedListNode<T> Last
	{
		[Token(Token = "0x6000E7C")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000312")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6000E7D")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000313")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000E95")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000314")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000E96")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E78")]
	public LinkedList()
	{
	}

	[Token(Token = "0x6000E79")]
	protected LinkedList(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E7E")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x6000E7F")]
	public LinkedListNode<T> AddBefore(LinkedListNode<T> node, T value)
	{
		return null;
	}

	[Token(Token = "0x6000E80")]
	public LinkedListNode<T> AddFirst(T value)
	{
		return null;
	}

	[Token(Token = "0x6000E81")]
	public void AddFirst(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E82")]
	public LinkedListNode<T> AddLast(T value)
	{
		return null;
	}

	[Token(Token = "0x6000E83")]
	public void AddLast(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E84")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000E85")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E86")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6000E87")]
	public LinkedListNode<T> Find(T value)
	{
		return null;
	}

	[Token(Token = "0x6000E88")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000E89")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000E8A")]
	public bool Remove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E8B")]
	public void Remove(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E8C")]
	public void RemoveFirst()
	{
	}

	[Token(Token = "0x6000E8D")]
	public void RemoveLast()
	{
	}

	[Token(Token = "0x6000E8E")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E8F")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000E90")]
	private void InternalInsertNodeBefore(LinkedListNode<T> node, LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x6000E91")]
	private void InternalInsertNodeToEmptyList(LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x6000E92")]
	internal void InternalRemoveNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E93")]
	internal void ValidateNewNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E94")]
	internal void ValidateNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6000E97")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000E98")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
