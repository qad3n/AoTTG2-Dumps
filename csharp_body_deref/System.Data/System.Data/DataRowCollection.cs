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
		[Address(RVA = "0x5EA03C0", Offset = "0x5E9F3C0", VA = "0x5EA03C0")]
		internal DataRowTree()
		{
		}

		[Token(Token = "0x60004A7")]
		[Address(RVA = "0x5EA09C0", Offset = "0x5E9F9C0", VA = "0x5EA09C0", Slot = "5")]
		protected override int CompareNode(DataRow record1, DataRow record2)
		{
			return default(int);
		}

		[Token(Token = "0x60004A8")]
		[Address(RVA = "0x5EA09F0", Offset = "0x5E9F9F0", VA = "0x5EA09F0", Slot = "6")]
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
		[Address(RVA = "0x5EA0400", Offset = "0x5E9F400", VA = "0x5EA0400", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public DataRow this[int index]
	{
		[Token(Token = "0x600049A")]
		[Address(RVA = "0x5E92A10", Offset = "0x5E91A10", VA = "0x5E92A10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x5EA02F0", Offset = "0x5E9F2F0", VA = "0x5EA02F0")]
	internal DataRowCollection(DataTable table)
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x5EA0440", Offset = "0x5E9F440", VA = "0x5EA0440")]
	public void Add(DataRow row)
	{
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x5EA0460", Offset = "0x5E9F460", VA = "0x5EA0460")]
	internal void DiffInsertAt(DataRow row, int pos)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x5EA0670", Offset = "0x5E9F670", VA = "0x5EA0670")]
	public int IndexOf(DataRow row)
	{
		return default(int);
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x5EA06F0", Offset = "0x5E9F6F0", VA = "0x5EA06F0")]
	internal DataRow AddWithColumnEvents(params object[] values)
	{
		return null;
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x5EA0750", Offset = "0x5E9F750", VA = "0x5EA0750")]
	internal void ArrayAdd(DataRow row)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x5EA07B0", Offset = "0x5E9F7B0", VA = "0x5EA07B0")]
	internal void ArrayInsert(DataRow row, int pos)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x5EA0810", Offset = "0x5E9F810", VA = "0x5EA0810")]
	internal void ArrayClear()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x5EA0850", Offset = "0x5E9F850", VA = "0x5EA0850")]
	internal void ArrayRemove(DataRow row)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x5EA08E0", Offset = "0x5E9F8E0", VA = "0x5EA08E0", Slot = "10")]
	public override void CopyTo(Array ar, int index)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x5EA0930", Offset = "0x5E9F930", VA = "0x5EA0930")]
	public void CopyTo(DataRow[] array, int index)
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x5EA0980", Offset = "0x5E9F980", VA = "0x5EA0980", Slot = "11")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
