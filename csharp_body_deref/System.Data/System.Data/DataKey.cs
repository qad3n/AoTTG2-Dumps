// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.DataKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000035")]
internal readonly struct DataKey
{
	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	private readonly DataColumn[] _columns;

	[Token(Token = "0x17000096")]
	internal DataColumn[] ColumnsReference
	{
		[Token(Token = "0x60003DF")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000097")]
	internal bool HasValue
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000098")]
	internal DataTable Table
	{
		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x24EF270", Offset = "0x24ED870", VA = "0x1824EF270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x24EEFC0", Offset = "0x24ED5C0", VA = "0x1824EEFC0")]
	internal DataKey(DataColumn[] columns, bool copyColumns)
	{
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x24EE620", Offset = "0x24ECC20", VA = "0x1824EE620")]
	internal void CheckState()
	{
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x24EE7D0", Offset = "0x24ECDD0", VA = "0x1824EE7D0")]
	internal bool ColumnsEqual(DataKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x24EE720", Offset = "0x24ECD20", VA = "0x1824EE720")]
	internal static bool ColumnsEqual(DataColumn[] column1, DataColumn[] column2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x24EE880", Offset = "0x24ECE80", VA = "0x1824EE880")]
	internal bool ContainsColumn(DataColumn column)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x24EEAD0", Offset = "0x24ED0D0", VA = "0x1824EEAD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x24EE970", Offset = "0x24ECF70", VA = "0x1824EE970", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x24EE8D0", Offset = "0x24ECED0", VA = "0x1824EE8D0")]
	internal bool Equals(DataKey value)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x24EE9F0", Offset = "0x24ECFF0", VA = "0x1824EE9F0")]
	internal string[] GetColumnNames()
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x24EEB20", Offset = "0x24ED120", VA = "0x1824EEB20")]
	internal IndexField[] GetIndexDesc()
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x24EEC20", Offset = "0x24ED220", VA = "0x1824EEC20")]
	internal object[] GetKeyValues(int record)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x24EEDC0", Offset = "0x24ED3C0", VA = "0x1824EEDC0")]
	internal Index GetSortIndex()
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x24EED50", Offset = "0x24ED350", VA = "0x1824EED50")]
	internal Index GetSortIndex(DataViewRowState recordStates)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x24EEE20", Offset = "0x24ED420", VA = "0x1824EEE20")]
	internal bool RecordsEqual(int record1, int record2)
	{
		return default(bool);
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x24EEEB0", Offset = "0x24ED4B0", VA = "0x1824EEEB0")]
	internal DataColumn[] ToArray()
	{
		return null;
	}
}
