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
	[Address(RVA = "0x427BC90", Offset = "0x427BC90", VA = "0x427BC90")]
	internal Merger(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x427BCF0", Offset = "0x427BCF0", VA = "0x427BCF0")]
	internal Merger(DataTable dataTable, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x427BD50", Offset = "0x427BD50", VA = "0x427BD50")]
	internal void MergeDataSet(DataSet source)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x427DFD0", Offset = "0x427DFD0", VA = "0x427DFD0")]
	internal void MergeTable(DataTable src)
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x427E240", Offset = "0x427E240", VA = "0x427E240")]
	private void MergeTable(DataTable src, DataTable dst)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x427EB60", Offset = "0x427EB60", VA = "0x427EB60")]
	private DataTable MergeSchema(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x427D350", Offset = "0x427D350", VA = "0x427D350")]
	private void MergeTableData(DataTable src)
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x427D3F0", Offset = "0x427D3F0", VA = "0x427D3F0")]
	private void MergeConstraints(DataSet source)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x427F420", Offset = "0x427F420", VA = "0x427F420")]
	private void MergeConstraints(DataTable table)
	{
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x427D460", Offset = "0x427D460", VA = "0x427D460")]
	private void MergeRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60006D1")]
	[Address(RVA = "0x427DD30", Offset = "0x427DD30", VA = "0x427DD30")]
	private void MergeExtendedProperties(PropertyCollection src, PropertyCollection dst)
	{
	}

	[Token(Token = "0x60006D2")]
	[Address(RVA = "0x427E9D0", Offset = "0x427E9D0", VA = "0x427E9D0")]
	private DataKey GetSrcKey(DataTable src, DataTable dst)
	{
		return default(DataKey);
	}
}
