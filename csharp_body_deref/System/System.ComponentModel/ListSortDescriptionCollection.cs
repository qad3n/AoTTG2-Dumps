using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002B9")]
public class ListSortDescriptionCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000D99")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _sorts;

	[Token(Token = "0x170003D1")]
	public ListSortDescription this[int index]
	{
		[Token(Token = "0x6001115")]
		[Address(RVA = "0x4572970", Offset = "0x4572970", VA = "0x4572970")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001116")]
		[Address(RVA = "0x4572A00", Offset = "0x4572A00", VA = "0x4572A00")]
		set
		{
		}
	}

	[Token(Token = "0x170003D2")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x6001117")]
		[Address(RVA = "0x4572A50", Offset = "0x4572A50", VA = "0x4572A50", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D3")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x6001118")]
		[Address(RVA = "0x4572A60", Offset = "0x4572A60", VA = "0x4572A60", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D4")]
	private object System_002ECollections_002EIList_002EItem
	{
		[Token(Token = "0x6001119")]
		[Address(RVA = "0x4572A70", Offset = "0x4572A70", VA = "0x4572A70", Slot = "4")]
		get
		{
			return null;
		}
		[Token(Token = "0x600111A")]
		[Address(RVA = "0x4572B00", Offset = "0x4572B00", VA = "0x4572B00", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170003D5")]
	public int Count
	{
		[Token(Token = "0x6001122")]
		[Address(RVA = "0x4572E40", Offset = "0x4572E40", VA = "0x4572E40", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003D6")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x6001123")]
		[Address(RVA = "0x4572E70", Offset = "0x4572E70", VA = "0x4572E70", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003D7")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x6001124")]
		[Address(RVA = "0x4572E80", Offset = "0x4572E80", VA = "0x4572E80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001113")]
	[Address(RVA = "0x4572840", Offset = "0x4572840", VA = "0x4572840")]
	public ListSortDescriptionCollection()
	{
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x45728A0", Offset = "0x45728A0", VA = "0x45728A0")]
	public ListSortDescriptionCollection(ListSortDescription[] sorts)
	{
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x4572B50", Offset = "0x4572B50", VA = "0x4572B50", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x4572BA0", Offset = "0x4572BA0", VA = "0x4572BA0", Slot = "8")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x4572BF0", Offset = "0x4572BF0", VA = "0x4572BF0", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x4572CA0", Offset = "0x4572CA0", VA = "0x4572CA0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x4572D50", Offset = "0x4572D50", VA = "0x4572D50", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x4572DA0", Offset = "0x4572DA0", VA = "0x4572DA0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x6001121")]
	[Address(RVA = "0x4572DF0", Offset = "0x4572DF0", VA = "0x4572DF0", Slot = "14")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x4572E90", Offset = "0x4572E90", VA = "0x4572E90", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x6001126")]
	[Address(RVA = "0x4572EC0", Offset = "0x4572EC0", VA = "0x4572EC0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
