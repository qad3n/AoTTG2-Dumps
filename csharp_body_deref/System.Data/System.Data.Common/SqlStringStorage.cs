// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlStringStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D7")]
internal sealed class SqlStringStorage : DataStorage
{
	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private SqlString[] _values;

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x4653910", Offset = "0x4653910", VA = "0x4653910")]
	public SqlStringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x4653A40", Offset = "0x4653A40", VA = "0x4653A40", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x4653F90", Offset = "0x4653F90", VA = "0x4653F90", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x4654020", Offset = "0x4654020", VA = "0x4654020")]
	public int Compare(SqlString valueNo1, SqlString valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x4654140", Offset = "0x4654140", VA = "0x4654140", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4654200", Offset = "0x4654200", VA = "0x4654200", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4654280", Offset = "0x4654280", VA = "0x4654280", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x46542F0", Offset = "0x46542F0", VA = "0x46542F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4654370", Offset = "0x4654370", VA = "0x4654370", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4654430", Offset = "0x4654430", VA = "0x4654430", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x46544A0", Offset = "0x46544A0", VA = "0x46544A0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4654530", Offset = "0x4654530", VA = "0x4654530", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x46545E0", Offset = "0x46545E0", VA = "0x46545E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x46548E0", Offset = "0x46548E0", VA = "0x46548E0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x4654BB0", Offset = "0x4654BB0", VA = "0x4654BB0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x4654BF0", Offset = "0x4654BF0", VA = "0x4654BF0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x4654D40", Offset = "0x4654D40", VA = "0x4654D40", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
