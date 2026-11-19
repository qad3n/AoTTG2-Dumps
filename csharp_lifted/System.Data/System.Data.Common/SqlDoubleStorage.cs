// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDoubleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DA")]
internal sealed class SqlDoubleStorage : DataStorage
{
	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x50")]
	private SqlDouble[] _values;

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x5F44A10", Offset = "0x5F43A10", VA = "0x5F44A10")]
	public SqlDoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x5F44B40", Offset = "0x5F43B40", VA = "0x5F44B40", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x5F45A20", Offset = "0x5F44A20", VA = "0x5F45A20", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x5F45AD0", Offset = "0x5F44AD0", VA = "0x5F45AD0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x5F45B80", Offset = "0x5F44B80", VA = "0x5F45B80", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x5F45BF0", Offset = "0x5F44BF0", VA = "0x5F45BF0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x5F45C40", Offset = "0x5F44C40", VA = "0x5F45C40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x5F45CC0", Offset = "0x5F44CC0", VA = "0x5F45CC0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x5F45D30", Offset = "0x5F44D30", VA = "0x5F45D30", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x5F45D70", Offset = "0x5F44D70", VA = "0x5F45D70", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x5F45E20", Offset = "0x5F44E20", VA = "0x5F45E20", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x5F460B0", Offset = "0x5F450B0", VA = "0x5F460B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x5F46310", Offset = "0x5F45310", VA = "0x5F46310", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x5F46350", Offset = "0x5F45350", VA = "0x5F46350", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x5F46470", Offset = "0x5F45470", VA = "0x5F46470", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
