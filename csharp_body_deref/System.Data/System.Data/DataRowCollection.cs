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
		[Address(RVA = "0x4240590", Offset = "0x4240590", VA = "0x4240590")]
		internal DataRowTree()
		{
		}

		[Token(Token = "0x6000339")]
		[Address(RVA = "0x4240C00", Offset = "0x4240C00", VA = "0x4240C00", Slot = "5")]
		protected override int CompareNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}

		[Token(Token = "0x600033A")]
		[Address(RVA = "0x4240C30", Offset = "0x4240C30", VA = "0x4240C30", Slot = "6")]
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
		[Address(RVA = "0x42405D0", Offset = "0x42405D0", VA = "0x42405D0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000084")]
	public DataRow this[int index]
	{
		[Token(Token = "0x600032C")]
		[Address(RVA = "0x4240610", Offset = "0x4240610", VA = "0x4240610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x42404C0", Offset = "0x42404C0", VA = "0x42404C0")]
	internal DataRowCollection(DataTable table)
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4240660", Offset = "0x4240660", VA = "0x4240660")]
	public void Add(DataRow row)
	{
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4240680", Offset = "0x4240680", VA = "0x4240680")]
	internal void DiffInsertAt(DataRow row, int pos)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x42408B0", Offset = "0x42408B0", VA = "0x42408B0")]
	public int IndexOf(DataRow row)
	{
		return default(int);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4240930", Offset = "0x4240930", VA = "0x4240930")]
	internal DataRow AddWithColumnEvents(params object[] values)
	{
		return null;
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4240990", Offset = "0x4240990", VA = "0x4240990")]
	internal void ArrayAdd(DataRow row)
	{
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x42409F0", Offset = "0x42409F0", VA = "0x42409F0")]
	internal void ArrayInsert(DataRow row, int pos)
	{
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4240A50", Offset = "0x4240A50", VA = "0x4240A50")]
	internal void ArrayClear()
	{
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4240A90", Offset = "0x4240A90", VA = "0x4240A90")]
	internal void ArrayRemove(DataRow row)
	{
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4240B20", Offset = "0x4240B20", VA = "0x4240B20", Slot = "10")]
	public override void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4240B70", Offset = "0x4240B70", VA = "0x4240B70")]
	public void CopyTo(DataRow[] array, int index)
	{
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4240BC0", Offset = "0x4240BC0", VA = "0x4240BC0", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
