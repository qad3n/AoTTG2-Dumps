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
	[Address(RVA = "0x5EC27B0", Offset = "0x5EC17B0", VA = "0x5EC27B0")]
	internal Merger(DataSet dataSet, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x5EC2800", Offset = "0x5EC1800", VA = "0x5EC2800")]
	internal Merger(DataTable dataTable, bool preserveChanges, MissingSchemaAction missingSchemaAction)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x5EC2850", Offset = "0x5EC1850", VA = "0x5EC2850")]
	internal void MergeDataSet(DataSet source)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x5EC4820", Offset = "0x5EC3820", VA = "0x5EC4820")]
	internal void MergeTable(DataTable src)
	{
	}

	[Token(Token = "0x60006EA")]
	[Address(RVA = "0x5EC4A90", Offset = "0x5EC3A90", VA = "0x5EC4A90")]
	private void MergeTable(DataTable src, DataTable dst)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x5EC5180", Offset = "0x5EC4180", VA = "0x5EC5180")]
	private DataTable MergeSchema(DataTable table)
	{
		return null;
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x5EC3A40", Offset = "0x5EC2A40", VA = "0x5EC3A40")]
	private void MergeTableData(DataTable src)
	{
	}

	[Token(Token = "0x60006ED")]
	[Address(RVA = "0x5EC3AE0", Offset = "0x5EC2AE0", VA = "0x5EC3AE0")]
	private void MergeConstraints(DataSet source)
	{
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x5EC59D0", Offset = "0x5EC49D0", VA = "0x5EC59D0")]
	private void MergeConstraints(DataTable table)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x5EC3B50", Offset = "0x5EC2B50", VA = "0x5EC3B50")]
	private void MergeRelation(DataRelation relation)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x5EC4590", Offset = "0x5EC3590", VA = "0x5EC4590")]
	private void MergeExtendedProperties(PropertyCollection src, PropertyCollection dst)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x5EC4FF0", Offset = "0x5EC3FF0", VA = "0x5EC4FF0")]
	private DataKey GetSrcKey(DataTable src, DataTable dst)
	{
		return default(DataKey);
	}
}
