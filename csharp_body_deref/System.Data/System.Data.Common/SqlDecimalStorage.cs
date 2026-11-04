// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D9")]
internal sealed class SqlDecimalStorage : DataStorage
{
	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x50")]
	private SqlDecimal[] _values;

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x259D180", Offset = "0x259B780", VA = "0x18259D180")]
	public SqlDecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x259B9C0", Offset = "0x2599FC0", VA = "0x18259B9C0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x259C800", Offset = "0x259AE00", VA = "0x18259C800", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x259C730", Offset = "0x259AD30", VA = "0x18259C730", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x259CA60", Offset = "0x259B060", VA = "0x18259CA60", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x259CE20", Offset = "0x259B420", VA = "0x18259CE20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x259CEB0", Offset = "0x259B4B0", VA = "0x18259CEB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x259CF30", Offset = "0x259B530", VA = "0x18259CF30", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x259D120", Offset = "0x259B720", VA = "0x18259D120", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x259CFB0", Offset = "0x259B5B0", VA = "0x18259CFB0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x259CAE0", Offset = "0x259B0E0", VA = "0x18259CAE0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x259C8B0", Offset = "0x259AEB0", VA = "0x18259C8B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x259CE70", Offset = "0x259B470", VA = "0x18259CE70", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x259CCF0", Offset = "0x259B2F0", VA = "0x18259CCF0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x259D080", Offset = "0x259B680", VA = "0x18259D080", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
