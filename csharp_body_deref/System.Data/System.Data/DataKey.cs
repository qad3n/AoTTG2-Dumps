// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000024")]
internal readonly struct DataKey
{
	[Token(Token = "0x4000062")]
	[FieldOffset(Offset = "0x0")]
	private readonly DataColumn[] _columns;

	[Token(Token = "0x17000055")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x4550F10", Offset = "0x4550F10", VA = "0x4550F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	internal bool HasValue
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x4550F20", Offset = "0x4550F20", VA = "0x4550F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000057")]
	internal DataTable Table
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x4537BC0", Offset = "0x4537BC0", VA = "0x4537BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x4550C50", Offset = "0x4550C50", VA = "0x4550C50")]
	internal DataKey(DataColumn[] columns, bool copyColumns)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4550E80", Offset = "0x4550E80", VA = "0x4550E80")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x4550F30", Offset = "0x4550F30", VA = "0x4550F30")]
	internal bool ColumnsEqual(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x4550F40", Offset = "0x4550F40", VA = "0x4550F40")]
	internal static bool ColumnsEqual(DataColumn[] column1, DataColumn[] column2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x45414B0", Offset = "0x45414B0", VA = "0x45414B0")]
	internal bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x4551020", Offset = "0x4551020", VA = "0x4551020", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4551070", Offset = "0x4551070", VA = "0x4551070", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x4551150", Offset = "0x4551150", VA = "0x4551150")]
	internal bool Equals(DataKey value)
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x45511E0", Offset = "0x45511E0", VA = "0x45511E0")]
	internal string[] GetColumnNames()
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x45512B0", Offset = "0x45512B0", VA = "0x45512B0")]
	internal IndexField[] GetIndexDesc()
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x45513D0", Offset = "0x45513D0", VA = "0x45513D0")]
	internal object[] GetKeyValues(int record)
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4551520", Offset = "0x4551520", VA = "0x4551520")]
	internal Index GetSortIndex()
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4551570", Offset = "0x4551570", VA = "0x4551570")]
	internal Index GetSortIndex(DataViewRowState recordStates)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x45515C0", Offset = "0x45515C0", VA = "0x45515C0")]
	internal bool RecordsEqual(int record1, int record2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4551650", Offset = "0x4551650", VA = "0x4551650")]
	internal DataColumn[] ToArray()
	{
		return null;
	}
}
