// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Merger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006C")]
internal sealed class Merger
{
	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x10")]
	private DataSet _dataSet;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x18")]
	private DataTable _dataTable;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x20")]
	private bool _preserveChanges;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x24")]
	private MissingSchemaAction _missingSchemaAction;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x28")]
	private bool _isStandAlonetable;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x29")]
	private bool _IgnoreNSforTableLookup;

	[Token(Token = "0x60006C7")]
	[Address(RVA = "0x45B93F0", Offset = "0x45B93F0", VA = "0x45B93F0")]
	internal Merger(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x45B9450", Offset = "0x45B9450", VA = "0x45B9450")]
	internal Merger(DataTable dataTable, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x45B94B0", Offset = "0x45B94B0", VA = "0x45B94B0")]
	internal void MergeDataSet(DataSet source)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x45BB730", Offset = "0x45BB730", VA = "0x45BB730")]
	internal void MergeTable(DataTable src)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x45BB9A0", Offset = "0x45BB9A0", VA = "0x45BB9A0")]
	private void MergeTable(DataTable src, DataTable dst)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x45BC2C0", Offset = "0x45BC2C0", VA = "0x45BC2C0")]
	private DataTable MergeSchema(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x45BAAB0", Offset = "0x45BAAB0", VA = "0x45BAAB0")]
	private void MergeTableData(DataTable src)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x45BAB50", Offset = "0x45BAB50", VA = "0x45BAB50")]
	private void MergeConstraints(DataSet source)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x45BCB80", Offset = "0x45BCB80", VA = "0x45BCB80")]
	private void MergeConstraints(DataTable table)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x45BABC0", Offset = "0x45BABC0", VA = "0x45BABC0")]
	private void MergeRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x45BB490", Offset = "0x45BB490", VA = "0x45BB490")]
	private void MergeExtendedProperties(PropertyCollection src, PropertyCollection dst)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x45BC130", Offset = "0x45BC130", VA = "0x45BC130")]
	private DataKey GetSrcKey(DataTable src, DataTable dst)
	{
		return default(DataKey);
	}
}
