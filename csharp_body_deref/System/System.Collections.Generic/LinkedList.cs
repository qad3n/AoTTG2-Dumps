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
[Token(Token = "0x200034D")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class LinkedList<T> : ICollection<T>, IEnumerable<T>, IEnumerable, ICollection, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	[Serializable]
	[Token(Token = "0x200034E")]
	public struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x4000F24")]
		[FieldOffset(Offset = "0x0")]
		private LinkedList<T> _list;

		[Token(Token = "0x4000F25")]
		[FieldOffset(Offset = "0x0")]
		private LinkedListNode<T> _node;

		[Token(Token = "0x4000F26")]
		[FieldOffset(Offset = "0x0")]
		private int _version;

		[Token(Token = "0x4000F27")]
		[FieldOffset(Offset = "0x0")]
		private T _current;

		[Token(Token = "0x4000F28")]
		[FieldOffset(Offset = "0x0")]
		private int _index;

		[Token(Token = "0x170004D5")]
		public T Current
		{
			[Token(Token = "0x6001614")]
			get
			{
				return (T)null;
			}
		}

		[Token(Token = "0x170004D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001615")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001612")]
		internal Enumerator(LinkedList<T> list)
		{
		}

		[Token(Token = "0x6001613")]
		private Enumerator(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6001616")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001617")]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001618")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6001619")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600161A")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}
	}

	[Token(Token = "0x4000F1C")]
	[FieldOffset(Offset = "0x0")]
	internal LinkedListNode<T> head;

	[Token(Token = "0x4000F1D")]
	[FieldOffset(Offset = "0x0")]
	internal int count;

	[Token(Token = "0x4000F1E")]
	[FieldOffset(Offset = "0x0")]
	internal int version;

	[Token(Token = "0x4000F1F")]
	[FieldOffset(Offset = "0x0")]
	private object _syncRoot;

	[Token(Token = "0x4000F20")]
	[FieldOffset(Offset = "0x0")]
	private SerializationInfo _siInfo;

	[Token(Token = "0x4000F21")]
	private const string VersionName = "Version";

	[Token(Token = "0x4000F22")]
	private const string CountName = "Count";

	[Token(Token = "0x4000F23")]
	private const string ValuesName = "Data";

	[Token(Token = "0x170004CF")]
	public int Count
	{
		[Token(Token = "0x60015F3")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004D0")]
	public LinkedListNode<T> First
	{
		[Token(Token = "0x60015F4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D1")]
	public LinkedListNode<T> Last
	{
		[Token(Token = "0x60015F5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x60015F6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x600160E")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004D4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x600160F")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015F1")]
	public LinkedList()
	{
	}

	[Token(Token = "0x60015F2")]
	protected LinkedList(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60015F7")]
	private void System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EAdd(T value)
	{
	}

	[Token(Token = "0x60015F8")]
	public LinkedListNode<T> AddBefore(LinkedListNode<T> node, T value)
	{
		return null;
	}

	[Token(Token = "0x60015F9")]
	public LinkedListNode<T> AddFirst(T value)
	{
		return null;
	}

	[Token(Token = "0x60015FA")]
	public void AddFirst(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x60015FB")]
	public LinkedListNode<T> AddLast(T value)
	{
		return null;
	}

	[Token(Token = "0x60015FC")]
	public void AddLast(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x60015FD")]
	public void Clear()
	{
	}

	[Token(Token = "0x60015FE")]
	public bool Contains(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x60015FF")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6001600")]
	public LinkedListNode<T> Find(T value)
	{
		return null;
	}

	[Token(Token = "0x6001601")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6001602")]
	private IEnumerator<T> System_002ECollections_002EGeneric_002EIEnumerable_003CT_003E_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6001603")]
	public bool Remove(T value)
	{
		return default(bool);
	}

	[Token(Token = "0x6001604")]
	public void Remove(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001605")]
	public void RemoveFirst()
	{
	}

	[Token(Token = "0x6001606")]
	public void RemoveLast()
	{
	}

	[Token(Token = "0x6001607")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001608")]
	public virtual void OnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6001609")]
	private void InternalInsertNodeBefore(LinkedListNode<T> node, LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x600160A")]
	private void InternalInsertNodeToEmptyList(LinkedListNode<T> newNode)
	{
	}

	[Token(Token = "0x600160B")]
	internal void InternalRemoveNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x600160C")]
	internal void ValidateNewNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x600160D")]
	internal void ValidateNode(LinkedListNode<T> node)
	{
	}

	[Token(Token = "0x6001610")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001611")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
