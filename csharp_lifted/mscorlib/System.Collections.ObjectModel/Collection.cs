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
[Token(Token = "0x20005E3")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
[DebuggerDisplay("Count = {Count}")]
public class Collection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x400186D")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> items;

	[Token(Token = "0x17000755")]
	public int Count
	{
		[Token(Token = "0x6002DDE")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000756")]
	protected IList<T> Items
	{
		[Token(Token = "0x6002DDF")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000757")]
	public T this[int index]
	{
		[Token(Token = "0x6002DE0")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6002DE1")]
		set
		{
		}
	}

	[Token(Token = "0x17000758")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6002DEF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000759")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002DF1")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700075A")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002DF2")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x1700075B")]
	[Token(Token = "0x6002DF4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002DF5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x1700075C")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002DF6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700075D")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002DF7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002DDC")]
	public Collection()
	{
	}

	[Token(Token = "0x6002DDD")]
	public Collection(IList<T> list)
	{
	}

	[Token(Token = "0x6002DE2")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6002DE3")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002DE4")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x6002DE5")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DE6")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DE7")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x6002DE8")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x6002DE9")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DEA")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002DEB")]
	protected virtual void ClearItems()
	{
	}

	[Token(Token = "0x6002DEC")]
	protected virtual void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6002DED")]
	protected virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6002DEE")]
	protected virtual void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6002DF0")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002DF3")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002DF8")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002DF9")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002DFA")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002DFB")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002DFC")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002DFD")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}
}
