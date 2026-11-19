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
[Token(Token = "0x20005B9")]
public abstract class CollectionBase : IList, ICollection, IEnumerable
{
	[Token(Token = "0x40017E7")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _list;

	[Token(Token = "0x170006CE")]
	protected ArrayList InnerList
	{
		[Token(Token = "0x6002BF7")]
		[Address(RVA = "0x5452480", Offset = "0x5451480", VA = "0x5452480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006CF")]
	protected IList List
	{
		[Token(Token = "0x6002BF8")]
		[Address(RVA = "0x5452490", Offset = "0x5451490", VA = "0x5452490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170006D0")]
	public int Count
	{
		[Token(Token = "0x6002BF9")]
		[Address(RVA = "0x54524A0", Offset = "0x54514A0", VA = "0x54524A0", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170006D1")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6002BFC")]
		[Address(RVA = "0x54526F0", Offset = "0x54516F0", VA = "0x54526F0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D2")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6002BFD")]
		[Address(RVA = "0x5452720", Offset = "0x5451720", VA = "0x5452720", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D3")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6002BFE")]
		[Address(RVA = "0x5452750", Offset = "0x5451750", VA = "0x5452750", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006D4")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6002BFF")]
		[Address(RVA = "0x5452780", Offset = "0x5451780", VA = "0x5452780", Slot = "17")]
		get
		{
			return null;
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x170006D5")]
	[Token(Token = "0x6002C01")]
	[Address(RVA = "0x54527E0", Offset = "0x54517E0", VA = "0x54527E0", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6002C02")]
	[Address(RVA = "0x54528A0", Offset = "0x54518A0", VA = "0x54528A0", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x6002BF6")]
	[Address(RVA = "0x5452410", Offset = "0x5451410", VA = "0x5452410")]
	protected CollectionBase()
	{
	}

	[Token(Token = "0x6002BFA")]
	[Address(RVA = "0x54524D0", Offset = "0x54514D0", VA = "0x54524D0", Slot = "8")]
	public void Clear()
	{
	}

	[Token(Token = "0x6002BFB")]
	[Address(RVA = "0x5452520", Offset = "0x5451520", VA = "0x5452520", Slot = "14")]
	public void RemoveAt(int index)
	{
	}

	[Token(Token = "0x6002C00")]
	[Address(RVA = "0x54527B0", Offset = "0x54517B0", VA = "0x54527B0", Slot = "15")]
	private void System_002ECollections_002EICollection_002ECopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6002C03")]
	[Address(RVA = "0x5452A80", Offset = "0x5451A80", VA = "0x5452A80", Slot = "7")]
	private bool System_002ECollections_002EIList_002EContains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6002C04")]
	[Address(RVA = "0x5452AB0", Offset = "0x5451AB0", VA = "0x5452AB0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C05")]
	[Address(RVA = "0x5452BF0", Offset = "0x5451BF0", VA = "0x5452BF0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6002C06")]
	[Address(RVA = "0x5452D70", Offset = "0x5451D70", VA = "0x5452D70", Slot = "11")]
	private int System_002ECollections_002EIList_002EIndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6002C07")]
	[Address(RVA = "0x5452DA0", Offset = "0x5451DA0", VA = "0x5452DA0", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002C08")]
	[Address(RVA = "0x5452F50", Offset = "0x5451F50", VA = "0x5452F50", Slot = "19")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6002C09")]
	[Address(RVA = "0x5452F80", Offset = "0x5451F80", VA = "0x5452F80", Slot = "20")]
	protected virtual void OnSet(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002C0A")]
	[Address(RVA = "0x5452F90", Offset = "0x5451F90", VA = "0x5452F90", Slot = "21")]
	protected virtual void OnInsert(int index, object value)
	{
	}

	[Token(Token = "0x6002C0B")]
	[Address(RVA = "0x5452FA0", Offset = "0x5451FA0", VA = "0x5452FA0", Slot = "22")]
	protected virtual void OnClear()
	{
	}

	[Token(Token = "0x6002C0C")]
	[Address(RVA = "0x5452FB0", Offset = "0x5451FB0", VA = "0x5452FB0", Slot = "23")]
	protected virtual void OnRemove(int index, object value)
	{
	}

	[Token(Token = "0x6002C0D")]
	[Address(RVA = "0x5452FC0", Offset = "0x5451FC0", VA = "0x5452FC0", Slot = "24")]
	protected virtual void OnValidate(object value)
	{
	}

	[Token(Token = "0x6002C0E")]
	[Address(RVA = "0x5453010", Offset = "0x5452010", VA = "0x5453010", Slot = "25")]
	protected virtual void OnSetComplete(int index, object oldValue, object newValue)
	{
	}

	[Token(Token = "0x6002C0F")]
	[Address(RVA = "0x5453020", Offset = "0x5452020", VA = "0x5453020", Slot = "26")]
	protected virtual void OnInsertComplete(int index, object value)
	{
	}

	[Token(Token = "0x6002C10")]
	[Address(RVA = "0x5453030", Offset = "0x5452030", VA = "0x5453030", Slot = "27")]
	protected virtual void OnClearComplete()
	{
	}

	[Token(Token = "0x6002C11")]
	[Address(RVA = "0x5453040", Offset = "0x5452040", VA = "0x5453040", Slot = "28")]
	protected virtual void OnRemoveComplete(int index, object value)
	{
	}
}
