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
		[Address(RVA = "0x42137B0", Offset = "0x42137B0", VA = "0x42137B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	internal bool HasValue
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x42137C0", Offset = "0x42137C0", VA = "0x42137C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000057")]
	internal DataTable Table
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x41FA460", Offset = "0x41FA460", VA = "0x41FA460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x42134F0", Offset = "0x42134F0", VA = "0x42134F0")]
	internal DataKey(DataColumn[] columns, bool copyColumns)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x4213720", Offset = "0x4213720", VA = "0x4213720")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x6000275")]
	[Address(RVA = "0x42137D0", Offset = "0x42137D0", VA = "0x42137D0")]
	internal bool ColumnsEqual(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000276")]
	[Address(RVA = "0x42137E0", Offset = "0x42137E0", VA = "0x42137E0")]
	internal static bool ColumnsEqual(DataColumn[] column1, DataColumn[] column2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000277")]
	[Address(RVA = "0x4203D50", Offset = "0x4203D50", VA = "0x4203D50")]
	internal bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x6000278")]
	[Address(RVA = "0x42138C0", Offset = "0x42138C0", VA = "0x42138C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000279")]
	[Address(RVA = "0x4213910", Offset = "0x4213910", VA = "0x4213910", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x600027A")]
	[Address(RVA = "0x42139F0", Offset = "0x42139F0", VA = "0x42139F0")]
	internal bool Equals(DataKey value)
	{
		return default(bool);
	}

	[Token(Token = "0x600027B")]
	[Address(RVA = "0x4213A80", Offset = "0x4213A80", VA = "0x4213A80")]
	internal string[] GetColumnNames()
	{
		return null;
	}

	[Token(Token = "0x600027C")]
	[Address(RVA = "0x4213B50", Offset = "0x4213B50", VA = "0x4213B50")]
	internal IndexField[] GetIndexDesc()
	{
		return null;
	}

	[Token(Token = "0x600027D")]
	[Address(RVA = "0x4213C70", Offset = "0x4213C70", VA = "0x4213C70")]
	internal object[] GetKeyValues(int record)
	{
		return null;
	}

	[Token(Token = "0x600027E")]
	[Address(RVA = "0x4213DC0", Offset = "0x4213DC0", VA = "0x4213DC0")]
	internal Index GetSortIndex()
	{
		return null;
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x4213E10", Offset = "0x4213E10", VA = "0x4213E10")]
	internal Index GetSortIndex(DataViewRowState recordStates)
	{
		return null;
	}

	[Token(Token = "0x6000280")]
	[Address(RVA = "0x4213E60", Offset = "0x4213E60", VA = "0x4213E60")]
	internal bool RecordsEqual(int record1, int record2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x4213EF0", Offset = "0x4213EF0", VA = "0x4213EF0")]
	internal DataColumn[] ToArray()
	{
		return null;
	}
}
