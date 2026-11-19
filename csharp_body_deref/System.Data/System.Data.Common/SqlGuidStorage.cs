// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlGuidStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DB")]
internal sealed class SqlGuidStorage : DataStorage
{
	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x50")]
	private SqlGuid[] _values;

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x5F46510", Offset = "0x5F45510", VA = "0x5F46510")]
	public SqlGuidStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x5F46630", Offset = "0x5F45630", VA = "0x5F46630", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x5F46840", Offset = "0x5F45840", VA = "0x5F46840", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x5F468D0", Offset = "0x5F458D0", VA = "0x5F468D0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x5F46980", Offset = "0x5F45980", VA = "0x5F46980", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x5F469E0", Offset = "0x5F459E0", VA = "0x5F469E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x5F46A20", Offset = "0x5F45A20", VA = "0x5F46A20", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x5F46A90", Offset = "0x5F45A90", VA = "0x5F46A90", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x5F46B00", Offset = "0x5F45B00", VA = "0x5F46B00", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x5F46B50", Offset = "0x5F45B50", VA = "0x5F46B50", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x5F46C00", Offset = "0x5F45C00", VA = "0x5F46C00", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x5F46E90", Offset = "0x5F45E90", VA = "0x5F46E90", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x5F470F0", Offset = "0x5F460F0", VA = "0x5F470F0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x5F47130", Offset = "0x5F46130", VA = "0x5F47130", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x5F47240", Offset = "0x5F46240", VA = "0x5F47240", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
