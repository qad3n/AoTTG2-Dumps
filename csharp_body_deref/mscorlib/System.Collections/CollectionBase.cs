// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.CollectionBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3C7F390", Offset = "0x3C7F390", VA = "0x3C7F390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000741")]
	protected IList List
	{
		[Token(Token = "0x6002F0A")]
		[Address(RVA = "0x3C7F3A0", Offset = "0x3C7F3A0", VA = "0x3C7F3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000742")]
	public int Count
	{
		[Token(Token = "0x6002F0B")]
		[Address(RVA = "0x3C7F3B0", Offset = "0x3C7F3B0", VA = "0x3C7F3B0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000743")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002F0E")]
		[Address(RVA = "0x3C7F600", Offset = "0x3C7F600", VA = "0x3C7F600", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000744")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002F0F")]
		[Address(RVA = "0x3C7F630", Offset = "0x3C7F630", VA = "0x3C7F630", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000745")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002F10")]
		[Address(RVA = "0x3C7F660", Offset = "0x3C7F660", VA = "0x3C7F660", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000746")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002F11")]
		[Address(RVA = "0x3C7F690", Offset = "0x3C7F690", VA = "0x3C7F690", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000747")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6002F13")]
		[Address(RVA = "0x3C7F6F0", Offset = "0x3C7F6F0", VA = "0x3C7F6F0", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002F14")]
		[Address(RVA = "0x3C7F7B0", Offset = "0x3C7F7B0", VA = "0x3C7F7B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x6002F08")]
	[Address(RVA = "0x3C7F240", Offset = "0x3C7F240", VA = "0x3C7F240")]
	protected CollectionBase()
	{
	}

	[Token(Token = "0x6002F0C")]
	[Address(RVA = "0x3C7F3E0", Offset = "0x3C7F3E0", VA = "0x3C7F3E0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002F0D")]
	[Address(RVA = "0x3C7F430", Offset = "0x3C7F430", VA = "0x3C7F430", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002F12")]
	[Address(RVA = "0x3C7F6C0", Offset = "0x3C7F6C0", VA = "0x3C7F6C0", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002F15")]
	[Address(RVA = "0x3C7F990", Offset = "0x3C7F990", VA = "0x3C7F990", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F16")]
	[Address(RVA = "0x3C7F9C0", Offset = "0x3C7F9C0", VA = "0x3C7F9C0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F17")]
	[Address(RVA = "0x3C7FB00", Offset = "0x3C7FB00", VA = "0x3C7FB00", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002F18")]
	[Address(RVA = "0x3C7FC80", Offset = "0x3C7FC80", VA = "0x3C7FC80", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002F19")]
	[Address(RVA = "0x3C7FCB0", Offset = "0x3C7FCB0", VA = "0x3C7FCB0", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002F1A")]
	[Address(RVA = "0x3C7FE60", Offset = "0x3C7FE60", VA = "0x3C7FE60", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002F1B")]
	[Address(RVA = "0x3C7FE90", Offset = "0x3C7FE90", VA = "0x3C7FE90", Slot = "20")]
	protected virtual void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002F1C")]
	[Address(RVA = "0x3C7FEA0", Offset = "0x3C7FEA0", VA = "0x3C7FEA0", Slot = "21")]
	protected virtual void OnInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002F1D")]
	[Address(RVA = "0x3C7FEB0", Offset = "0x3C7FEB0", VA = "0x3C7FEB0", Slot = "22")]
	protected virtual void OnClear()
	{
	}

	[Token(Token = "0x6002F1E")]
	[Address(RVA = "0x3C7FEC0", Offset = "0x3C7FEC0", VA = "0x3C7FEC0", Slot = "23")]
	protected virtual void OnRemove(int index, object value)
	{
	}

	[Token(Token = "0x6002F1F")]
	[Address(RVA = "0x3C7FED0", Offset = "0x3C7FED0", VA = "0x3C7FED0", Slot = "24")]
	protected virtual void OnValidate(object value)
	{
	}

	[Token(Token = "0x6002F20")]
	[Address(RVA = "0x3C7FF20", Offset = "0x3C7FF20", VA = "0x3C7FF20", Slot = "25")]
	protected virtual void OnSetComplete(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002F21")]
	[Address(RVA = "0x3C7FF30", Offset = "0x3C7FF30", VA = "0x3C7FF30", Slot = "26")]
	protected virtual void OnInsertComplete(int index, object value)
	{
	}

	[Token(Token = "0x6002F22")]
	[Address(RVA = "0x3C7FF40", Offset = "0x3C7FF40", VA = "0x3C7FF40", Slot = "27")]
	protected virtual void OnClearComplete()
	{
	}

	[Token(Token = "0x6002F23")]
	[Address(RVA = "0x3C7FF50", Offset = "0x3C7FF50", VA = "0x3C7FF50", Slot = "28")]
	protected virtual void OnRemoveComplete(int index, object value)
	{
	}
}
