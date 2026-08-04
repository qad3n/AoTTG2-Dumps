// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataRowCollection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200002F")]
public sealed class DataRowCollection : InternalDataCollectionBase
{
	[Token(Token = "0x2000030")]
	private sealed class DataRowTree : RBTree<DataRow>
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x457DCF0", Offset = "0x457DCF0", VA = "0x457DCF0")]
		internal DataRowTree()
		{
		}

		[Token(Token = "0x6000339")]
		[Address(RVA = "0x457E360", Offset = "0x457E360", VA = "0x457E360", Slot = "5")]
		protected override int CompareNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}

		[Token(Token = "0x600033A")]
		[Address(RVA = "0x457E390", Offset = "0x457E390", VA = "0x457E390", Slot = "6")]
		protected override int CompareSateliteTreeNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataRowTree _list;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x20")]
	internal int _nullInList;

	[Token(Token = "0x17000083")]
	public override int Count
	{
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x457DD30", Offset = "0x457DD30", VA = "0x457DD30", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000084")]
	public DataRow this[int index]
	{
		[Token(Token = "0x600032C")]
		[Address(RVA = "0x457DD70", Offset = "0x457DD70", VA = "0x457DD70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x457DC20", Offset = "0x457DC20", VA = "0x457DC20")]
	internal DataRowCollection(DataTable table)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x457DDC0", Offset = "0x457DDC0", VA = "0x457DDC0")]
	public void Add(DataRow row)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x457DDE0", Offset = "0x457DDE0", VA = "0x457DDE0")]
	internal void DiffInsertAt(DataRow row, int pos)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x457E010", Offset = "0x457E010", VA = "0x457E010")]
	public int IndexOf(DataRow row)
	{
		return default(int);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x457E090", Offset = "0x457E090", VA = "0x457E090")]
	internal DataRow AddWithColumnEvents(params object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x457E0F0", Offset = "0x457E0F0", VA = "0x457E0F0")]
	internal void ArrayAdd(DataRow row)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x457E150", Offset = "0x457E150", VA = "0x457E150")]
	internal void ArrayInsert(DataRow row, int pos)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x457E1B0", Offset = "0x457E1B0", VA = "0x457E1B0")]
	internal void ArrayClear()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x457E1F0", Offset = "0x457E1F0", VA = "0x457E1F0")]
	internal void ArrayRemove(DataRow row)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x457E280", Offset = "0x457E280", VA = "0x457E280", Slot = "10")]
	public override void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x457E2D0", Offset = "0x457E2D0", VA = "0x457E2D0")]
	public void CopyTo(DataRow[] array, int index)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x457E320", Offset = "0x457E320", VA = "0x457E320", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
