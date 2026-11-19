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

[Token(Token = "0x2000185")]
public class ListSortDescriptionCollection : IList, ICollection, IEnumerable
{
	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _sorts;

	[Token(Token = "0x17000211")]
	public ListSortDescription this[int index]
	{
		[Token(Token = "0x600099D")]
		[Address(RVA = "0x6237970", Offset = "0x6236970", VA = "0x6237970")]
		get
		{
			return null;
		}
		[Token(Token = "0x600099E")]
		[Address(RVA = "0x6237A00", Offset = "0x6236A00", VA = "0x6237A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000212")]
	private bool System_002ECollections_002EIList_002EIsFixedSize
	{
		[Token(Token = "0x600099F")]
		[Address(RVA = "0x6237A50", Offset = "0x6236A50", VA = "0x6237A50", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000213")]
	private bool System_002ECollections_002EIList_002EIsReadOnly
	{
		[Token(Token = "0x60009A0")]
		[Address(RVA = "0x6237A60", Offset = "0x6236A60", VA = "0x6237A60", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	// C# has no syntax for parameterized property 'System.Collections.IList.Item'.
	// Its 'property:' attributes below are ignored by the compiler (CS0657).
	[property: Token(Token = "0x17000214")]
	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x6237A70", Offset = "0x6236A70", VA = "0x6237A70", Slot = "4")]
	private object System_002ECollections_002EIList_002Eget_Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x6237B00", Offset = "0x6236B00", VA = "0x6237B00", Slot = "5")]
	private void System_002ECollections_002EIList_002Eset_Item(int index, object value)
	{
	}

	[Token(Token = "0x17000215")]
	public int Count
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x6237E40", Offset = "0x6236E40", VA = "0x6237E40", Slot = "16")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000216")]
	private bool System_002ECollections_002EICollection_002EIsSynchronized
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x6237E70", Offset = "0x6236E70", VA = "0x6237E70", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000217")]
	private object System_002ECollections_002EICollection_002ESyncRoot
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x6237E80", Offset = "0x6236E80", VA = "0x6237E80", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x6237840", Offset = "0x6236840", VA = "0x6237840")]
	public ListSortDescriptionCollection()
	{
	}

	[Token(Token = "0x600099C")]
	[Address(RVA = "0x62378A0", Offset = "0x62368A0", VA = "0x62378A0")]
	public ListSortDescriptionCollection(ListSortDescription[] sorts)
	{
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x6237B50", Offset = "0x6236B50", VA = "0x6237B50", Slot = "6")]
	private int System_002ECollections_002EIList_002EAdd(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x6237BA0", Offset = "0x6236BA0", VA = "0x6237BA0", Slot = "8")]
	private void System_002ECollections_002EIList_002EClear()
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x6237BF0", Offset = "0x6236BF0", VA = "0x6237BF0", Slot = "7")]
	public bool Contains(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x6237CA0", Offset = "0x6236CA0", VA = "0x6237CA0", Slot = "11")]
	public int IndexOf(object value)
	{
		return default(int);
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x6237D50", Offset = "0x6236D50", VA = "0x6237D50", Slot = "12")]
	private void System_002ECollections_002EIList_002EInsert(int index, object value)
	{
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x6237DA0", Offset = "0x6236DA0", VA = "0x6237DA0", Slot = "13")]
	private void System_002ECollections_002EIList_002ERemove(object value)
	{
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x6237DF0", Offset = "0x6236DF0", VA = "0x6237DF0", Slot = "14")]
	private void System_002ECollections_002EIList_002ERemoveAt(int index)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x6237E90", Offset = "0x6236E90", VA = "0x6237E90", Slot = "15")]
	public void CopyTo(Array array, int index)
	{
	}

	[Token(Token = "0x60009AE")]
	[Address(RVA = "0x6237EC0", Offset = "0x6236EC0", VA = "0x6237EC0", Slot = "19")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}
}
