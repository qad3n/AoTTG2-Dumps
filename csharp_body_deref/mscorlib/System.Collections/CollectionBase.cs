using Il2CppDummyDll;

namespace System.Collections;

[Serializable]
[Token(Token = "0x200060A")]
public abstract class CollectionBase : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4001A65")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x17000740")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002F09")]
		[Address(RVA = "0x4F99870", Offset = "0x4F99870", VA = "0x4F99870")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000741")]
	protected IList List
	{
		[Token(Token = "0x6002F0A")]
		[Address(RVA = "0x4F99880", Offset = "0x4F99880", VA = "0x4F99880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000742")]
	public int Count
	{
		[Token(Token = "0x6002F0B")]
		[Address(RVA = "0x4F99890", Offset = "0x4F99890", VA = "0x4F99890", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000743")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002F0E")]
		[Address(RVA = "0x4F99AE0", Offset = "0x4F99AE0", VA = "0x4F99AE0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000744")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002F0F")]
		[Address(RVA = "0x4F99B10", Offset = "0x4F99B10", VA = "0x4F99B10", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000745")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F10")]
		[Address(RVA = "0x4F99B40", Offset = "0x4F99B40", VA = "0x4F99B40", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000746")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F11")]
		[Address(RVA = "0x4F99B70", Offset = "0x4F99B70", VA = "0x4F99B70", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000747")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6002F13")]
		[Address(RVA = "0x4F99BD0", Offset = "0x4F99BD0", VA = "0x4F99BD0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F14")]
		[Address(RVA = "0x4F99C90", Offset = "0x4F99C90", VA = "0x4F99C90", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6002F08")]
	[Address(RVA = "0x4F99720", Offset = "0x4F99720", VA = "0x4F99720")]
	protected CollectionBase()
	{
	}

	[Token(Token = "0x6002F0C")]
	[Address(RVA = "0x4F998C0", Offset = "0x4F998C0", VA = "0x4F998C0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F0D")]
	[Address(RVA = "0x4F99910", Offset = "0x4F99910", VA = "0x4F99910", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x4F99BA0", Offset = "0x4F99BA0", VA = "0x4F99BA0", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x4F99E70", Offset = "0x4F99E70", VA = "0x4F99E70", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x4F99EA0", Offset = "0x4F99EA0", VA = "0x4F99EA0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x4F99FE0", Offset = "0x4F99FE0", VA = "0x4F99FE0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002F18")]
	[Address(RVA = "0x4F9A160", Offset = "0x4F9A160", VA = "0x4F9A160", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F19")]
	[Address(RVA = "0x4F9A190", Offset = "0x4F9A190", VA = "0x4F9A190", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002F1A")]
	[Address(RVA = "0x4F9A340", Offset = "0x4F9A340", VA = "0x4F9A340", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F1B")]
	[Address(RVA = "0x4F9A370", Offset = "0x4F9A370", VA = "0x4F9A370", Slot = "20")]
	protected virtual void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x4F9A380", Offset = "0x4F9A380", VA = "0x4F9A380", Slot = "21")]
	protected virtual void OnInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x4F9A390", Offset = "0x4F9A390", VA = "0x4F9A390", Slot = "22")]
	protected virtual void OnClear()
	{
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x4F9A3A0", Offset = "0x4F9A3A0", VA = "0x4F9A3A0", Slot = "23")]
	protected virtual void OnRemove(int index, object value)
	{
	}

	[Token(Token = "0x6002F1F")]
	[Address(RVA = "0x4F9A3B0", Offset = "0x4F9A3B0", VA = "0x4F9A3B0", Slot = "24")]
	protected virtual void OnValidate(object value)
	{
	}

	[Token(Token = "0x6002F20")]
	[Address(RVA = "0x4F9A400", Offset = "0x4F9A400", VA = "0x4F9A400", Slot = "25")]
	protected virtual void OnSetComplete(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002F21")]
	[Address(RVA = "0x4F9A410", Offset = "0x4F9A410", VA = "0x4F9A410", Slot = "26")]
	protected virtual void OnInsertComplete(int index, object value)
	{
	}

	[Token(Token = "0x6002F22")]
	[Address(RVA = "0x4F9A420", Offset = "0x4F9A420", VA = "0x4F9A420", Slot = "27")]
	protected virtual void OnClearComplete()
	{
	}

	[Token(Token = "0x6002F23")]
	[Address(RVA = "0x4F9A430", Offset = "0x4F9A430", VA = "0x4F9A430", Slot = "28")]
	protected virtual void OnRemoveComplete(int index, object value)
	{
	}
}
