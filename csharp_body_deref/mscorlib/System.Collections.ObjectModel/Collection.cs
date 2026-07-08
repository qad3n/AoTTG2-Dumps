using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Collections.ObjectModel;

[Serializable]
[Token(Token = "0x2000634")]
[DebuggerDisplay("Count = {Count}")]
[DebuggerTypeProxy(typeof(System.Collections.Generic.ICollectionDebugView<>))]
public class Collection<T> : IList<T>, ICollection<T>, IEnumerable<T>, IEnumerable, IList, ICollection, IReadOnlyList<T>, IReadOnlyCollection<T>
{
	[Token(Token = "0x4001AFA")]
	[FieldOffset(Offset = "0x0")]
	private IList<T> items;

	[Token(Token = "0x170007C7")]
	public int Count
	{
		[Token(Token = "0x60030F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170007C8")]
	protected IList<T> Items
	{
		[Token(Token = "0x60030F1")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007C9")]
	public T this[int index]
	{
		[Token(Token = "0x60030F2")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x60030F3")]
		set
		{
		}
	}

	[Token(Token = "0x170007CA")]
	private bool System_002ECollections_002EGeneric_002EICollection_003CT_003E_002EIsReadOnly
	{
		[Token(Token = "0x6003101")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007CB")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6003103")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007CC")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6003104")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170007CD")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6003106")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003107")]
		set
		{
		}
	}

	[Token(Token = "0x170007CE")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6003108")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170007CF")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6003109")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60030EE")]
	public Collection()
	{
	}

	[Token(Token = "0x60030EF")]
	public Collection(IList<T> list)
	{
	}

	[Token(Token = "0x60030F4")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x60030F5")]
	public void Clear()
	{
	}

	[Token(Token = "0x60030F6")]
	public void CopyTo(T[] array, int index)
	{
	}

	[Token(Token = "0x60030F7")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60030F8")]
	public IEnumerator<T> GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x60030F9")]
	public int IndexOf(T item)
	{
		return default(int);
	}

	[Token(Token = "0x60030FA")]
	public void Insert(int index, T item)
	{
	}

	[Token(Token = "0x60030FB")]
	public bool Remove(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x60030FC")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x60030FD")]
	protected virtual void ClearItems()
	{
	}

	[Token(Token = "0x60030FE")]
	protected virtual void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x60030FF")]
	protected virtual void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6003100")]
	protected virtual void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6003102")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6003105")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x600310A")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600310B")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600310C")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600310D")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x600310E")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x600310F")]
	private static bool IsCompatibleObject(object value)
	{
		return default(bool);
	}
}
