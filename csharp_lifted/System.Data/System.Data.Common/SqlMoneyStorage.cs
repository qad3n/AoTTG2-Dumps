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
	[Address(RVA = "0x5F4C460", Offset = "0x5F4B460", VA = "0x5F4C460")]
	public SqlMoneyStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x5F4C580", Offset = "0x5F4B580", VA = "0x5F4C580", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x5F4D720", Offset = "0x5F4C720", VA = "0x5F4D720", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x5F4D7C0", Offset = "0x5F4C7C0", VA = "0x5F4D7C0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x5F4D870", Offset = "0x5F4C870", VA = "0x5F4D870", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x5F4D8E0", Offset = "0x5F4C8E0", VA = "0x5F4D8E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x5F4D930", Offset = "0x5F4C930", VA = "0x5F4D930", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x5F4D9B0", Offset = "0x5F4C9B0", VA = "0x5F4D9B0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x5F4DA20", Offset = "0x5F4CA20", VA = "0x5F4DA20", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x5F4DA60", Offset = "0x5F4CA60", VA = "0x5F4DA60", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x5F4DB10", Offset = "0x5F4CB10", VA = "0x5F4DB10", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x5F4DDA0", Offset = "0x5F4CDA0", VA = "0x5F4DDA0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x5F4E000", Offset = "0x5F4D000", VA = "0x5F4E000", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x5F4E040", Offset = "0x5F4D040", VA = "0x5F4E040", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x5F4E160", Offset = "0x5F4D160", VA = "0x5F4E160", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
