// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.ObjectModel.Collection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x2000608")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class Collection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x4001906")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> items;

	[Token(Token = "0x17000756")]
	public int Count
	{
		[Token(Token = "0x6002E03")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000757")]
	protected IList<T> Items
	{
		[Token(Token = "0x6002E04")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000758")]
	public T this[int index]
	{
		[Token(Token = "0x6002E05")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002E06")]
		set
		{
		}
	}

	[Token(Token = "0x17000759")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002E14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700075A")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002E16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700075B")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002E17")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700075C")]
	[Token(Token = "0x6002E19")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002E1A")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700075D")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002E1B")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700075E")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002E1C")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002E01")]
	public Collection()
	{
	}

	[Token(Token = "0x6002E02")]
	public Collection(IList<T> list)
	{
	}

	[Token(Token = "0x6002E07")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6002E08")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002E09")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002E0A")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E0B")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E0C")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002E0D")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002E0E")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E0F")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002E10")]
	protected virtual void ClearItems()
	{
	}

	[Token(Token = "0x6002E11")]
	protected virtual void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6002E12")]
	protected virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6002E13")]
	protected virtual void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6002E15")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002E18")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002E1D")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E1E")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002E1F")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002E20")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002E21")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002E22")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}
}
