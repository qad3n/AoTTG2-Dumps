// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ListSortDescriptionCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C4")]
public class ListSortDescriptionCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x40006D0")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _sorts;

	[Token(Token = "0x17000240")]
	public ListSortDescription this[int index]
	{
		[Token(Token = "0x6000B5D")]
		[Address(RVA = "0x28A1D80", Offset = "0x28A0380", VA = "0x1828A1D80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000B5E")]
		[Address(RVA = "0x28A1FA0", Offset = "0x28A05A0", VA = "0x1828A1FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000241")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6000B5F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000242")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6000B60")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000243")]
	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x28A1D80", Offset = "0x28A0380", VA = "0x1828A1D80", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x28A1E20", Offset = "0x28A0420", VA = "0x1828A1E20", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x17000244")]
	public int Count
	{
		[Token(Token = "0x6000B6A")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000245")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6000B6B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000246")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6000B6C")]
		[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x28A1F30", Offset = "0x28A0530", VA = "0x1828A1F30")]
	public ListSortDescriptionCollection()
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x28A1E70", Offset = "0x28A0470", VA = "0x1828A1E70")]
	public ListSortDescriptionCollection(ListSortDescription[] sorts)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x28A1BF0", Offset = "0x28A01F0", VA = "0x1828A1BF0", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x28A1C40", Offset = "0x28A0240", VA = "0x1828A1C40", Slot = "8")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x28A1A50", Offset = "0x28A0050", VA = "0x1828A1A50", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x28A1B20", Offset = "0x28A0120", VA = "0x1828A1B20", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x28A1C90", Offset = "0x28A0290", VA = "0x1828A1C90", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x28A1D30", Offset = "0x28A0330", VA = "0x1828A1D30", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x28A1CE0", Offset = "0x28A02E0", VA = "0x1828A1CE0", Slot = "14")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x1AB84C0", Offset = "0x1AB6AC0", VA = "0x181AB84C0", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x19244D0", Offset = "0x1922AD0", VA = "0x1819244D0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
