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

[Token(Token = "0x2000040")]
public sealed class DataRowCollection : InternalDataCollectionBase
{
	[Token(Token = "0x2000041")]
	private sealed class DataRowTree : RBTree<DataRow>
	{
		[Token(Token = "0x60004A6")]
		[Address(RVA = "0x24F4CA0", Offset = "0x24F32A0", VA = "0x1824F4CA0")]
		internal DataRowTree()
		{
		}

		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x24F4C40", Offset = "0x24F3240", VA = "0x1824F4C40", Slot = "5")]
		protected override int CompareNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}

		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x24F4C70", Offset = "0x24F3270", VA = "0x1824F4C70", Slot = "6")]
		protected override int CompareSateliteTreeNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}
	}

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x10")]
	private readonly DataTable _table;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x18")]
	private readonly DataRowTree _list;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x20")]
	internal int _nullInList;

	[Token(Token = "0x170000C4")]
	public override int Count
	{
		[Token(Token = "0x6000499")]
		[Address(RVA = "0x24F4B90", Offset = "0x24F3190", VA = "0x1824F4B90", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public DataRow this[int index]
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x24F4BE0", Offset = "0x24F31E0", VA = "0x1824F4BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x24F4AC0", Offset = "0x24F30C0", VA = "0x1824F4AC0")]
	internal DataRowCollection(DataTable table)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x24F44A0", Offset = "0x24F2AA0", VA = "0x1824F44A0")]
	public void Add(DataRow row)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x24F4790", Offset = "0x24F2D90", VA = "0x1824F4790")]
	internal void DiffInsertAt(DataRow row, int pos)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x24F4A30", Offset = "0x24F3030", VA = "0x1824F4A30")]
	public int IndexOf(DataRow row)
	{
		return default(int);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x24F4420", Offset = "0x24F2A20", VA = "0x1824F4420")]
	internal DataRow AddWithColumnEvents(params object[] values)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x24F44D0", Offset = "0x24F2AD0", VA = "0x1824F44D0")]
	internal void ArrayAdd(DataRow row)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x24F4590", Offset = "0x24F2B90", VA = "0x1824F4590")]
	internal void ArrayInsert(DataRow row, int pos)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x24F4540", Offset = "0x24F2B40", VA = "0x1824F4540")]
	internal void ArrayClear()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x24F4610", Offset = "0x24F2C10", VA = "0x1824F4610")]
	internal void ArrayRemove(DataRow row)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x24F4720", Offset = "0x24F2D20", VA = "0x1824F4720", Slot = "10")]
	public override void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x24F46B0", Offset = "0x24F2CB0", VA = "0x1824F46B0")]
	public void CopyTo(DataRow[] array, int index)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x24F49E0", Offset = "0x24F2FE0", VA = "0x1824F49E0", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
