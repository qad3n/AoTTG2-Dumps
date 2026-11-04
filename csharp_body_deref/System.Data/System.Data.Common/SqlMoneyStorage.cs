// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlMoneyStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DF")]
internal sealed class SqlMoneyStorage : DataStorage
{
	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x50")]
	private SqlMoney[] _values;

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x25A7570", Offset = "0x25A5B70", VA = "0x1825A7570")]
	public SqlMoneyStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x25A5E10", Offset = "0x25A4410", VA = "0x1825A5E10", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x25A6C90", Offset = "0x25A5290", VA = "0x1825A6C90", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x25A6BD0", Offset = "0x25A51D0", VA = "0x1825A6BD0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x25A6EE0", Offset = "0x25A54E0", VA = "0x1825A6EE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x25A05F0", Offset = "0x259EBF0", VA = "0x1825A05F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x25A72A0", Offset = "0x25A58A0", VA = "0x1825A72A0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x25A7320", Offset = "0x25A5920", VA = "0x1825A7320", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x25A7510", Offset = "0x25A5B10", VA = "0x1825A7510", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x25A73A0", Offset = "0x25A59A0", VA = "0x1825A73A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x25A6F60", Offset = "0x25A5560", VA = "0x1825A6F60", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x25A6D30", Offset = "0x25A5330", VA = "0x1825A6D30", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x25A7260", Offset = "0x25A5860", VA = "0x1825A7260", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x25A7150", Offset = "0x25A5750", VA = "0x1825A7150", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x25A7470", Offset = "0x25A5A70", VA = "0x1825A7470", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
