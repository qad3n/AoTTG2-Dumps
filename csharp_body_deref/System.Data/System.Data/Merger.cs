// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Merger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000076")]
internal sealed class Merger
{
	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _dataTable;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x20")]
	private bool _preserveChanges;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x24")]
	private MissingSchemaAction _missingSchemaAction;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x28")]
	private bool _isStandAlonetable;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x29")]
	private bool _IgnoreNSforTableLookup;

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x2521FB0", Offset = "0x25205B0", VA = "0x182521FB0")]
	internal Merger(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x2521F60", Offset = "0x2520560", VA = "0x182521F60")]
	internal Merger(DataTable dataTable, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x251F740", Offset = "0x251DD40", VA = "0x18251F740")]
	internal void MergeDataSet(DataSet source)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x2521760", Offset = "0x251FD60", VA = "0x182521760")]
	internal void MergeTable(DataTable src)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x25219D0", Offset = "0x251FFD0", VA = "0x1825219D0")]
	private void MergeTable(DataTable src, DataTable dst)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x2520D30", Offset = "0x251F330", VA = "0x182520D30")]
	private DataTable MergeSchema(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x25216B0", Offset = "0x251FCB0", VA = "0x1825216B0")]
	private void MergeTableData(DataTable src)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x251F410", Offset = "0x251DA10", VA = "0x18251F410")]
	private void MergeConstraints(DataSet source)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x251F490", Offset = "0x251DA90", VA = "0x18251F490")]
	private void MergeConstraints(DataTable table)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x2520500", Offset = "0x251EB00", VA = "0x182520500")]
	private void MergeRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x2520350", Offset = "0x251E950", VA = "0x182520350")]
	private void MergeExtendedProperties(PropertyCollection src, PropertyCollection dst)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x251F290", Offset = "0x251D890", VA = "0x18251F290")]
	private DataKey GetSrcKey(DataTable src, DataTable dst)
	{
		return default(DataKey);
	}
}
