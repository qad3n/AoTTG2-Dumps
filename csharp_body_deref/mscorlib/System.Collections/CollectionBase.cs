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
[Token(Token = "0x20005DE")]
public abstract class CollectionBase : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4001880")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x170006CF")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002C1A")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D0")]
	protected IList List
	{
		[Token(Token = "0x6002C1B")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D1")]
	public int Count
	{
		[Token(Token = "0x6002C1C")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D2")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002C1F")]
		[Address(RVA = "0x1AB8970", Offset = "0x1AB6F70", VA = "0x181AB8970", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D3")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002C20")]
		[Address(RVA = "0x1AB8940", Offset = "0x1AB6F40", VA = "0x181AB8940", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D4")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002C21")]
		[Address(RVA = "0x1A1F360", Offset = "0x1A1D960", VA = "0x181A1F360", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D5")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002C22")]
		[Address(RVA = "0x1AB84F0", Offset = "0x1AB6AF0", VA = "0x181AB84F0", Slot = "17")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170006D6")]
	[Token(Token = "0x6002C24")]
	[Address(RVA = "0x1AB89A0", Offset = "0x1AB6FA0", VA = "0x181AB89A0", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C25")]
	[Address(RVA = "0x1AB8A60", Offset = "0x1AB7060", VA = "0x181AB8A60", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002C19")]
	[Address(RVA = "0x1AB8C10", Offset = "0x1AB7210", VA = "0x181AB8C10")]
	protected CollectionBase()
	{
	}

	[Token(Token = "0x6002C1D")]
	[Address(RVA = "0x1AB8280", Offset = "0x1AB6880", VA = "0x181AB8280", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002C1E")]
	[Address(RVA = "0x1AB8340", Offset = "0x1AB6940", VA = "0x181AB8340", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002C23")]
	[Address(RVA = "0x1AB84C0", Offset = "0x1AB6AC0", VA = "0x181AB84C0", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C26")]
	[Address(RVA = "0x1AB8620", Offset = "0x1AB6C20", VA = "0x181AB8620", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C27")]
	[Address(RVA = "0x1AB8520", Offset = "0x1AB6B20", VA = "0x181AB8520", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C28")]
	[Address(RVA = "0x1AB87F0", Offset = "0x1AB6DF0", VA = "0x181AB87F0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002C29")]
	[Address(RVA = "0x1AB8650", Offset = "0x1AB6C50", VA = "0x181AB8650", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C2A")]
	[Address(RVA = "0x1AB8680", Offset = "0x1AB6C80", VA = "0x181AB8680", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002C2B")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C2C")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	protected virtual void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002C2D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "21")]
	protected virtual void OnInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002C2E")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
	protected virtual void OnClear()
	{
	}

	[Token(Token = "0x6002C2F")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "23")]
	protected virtual void OnRemove(int index, object value)
	{
	}

	[Token(Token = "0x6002C30")]
	[Address(RVA = "0x1AB82E0", Offset = "0x1AB68E0", VA = "0x181AB82E0", Slot = "24")]
	protected virtual void OnValidate(object value)
	{
	}

	[Token(Token = "0x6002C31")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "25")]
	protected virtual void OnSetComplete(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002C32")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "26")]
	protected virtual void OnInsertComplete(int index, object value)
	{
	}

	[Token(Token = "0x6002C33")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "27")]
	protected virtual void OnClearComplete()
	{
	}

	[Token(Token = "0x6002C34")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "28")]
	protected virtual void OnRemoveComplete(int index, object value)
	{
	}
}
