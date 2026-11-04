// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDateTimeStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D8")]
internal sealed class SqlDateTimeStorage : DataStorage
{
	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x50")]
	private SqlDateTime[] _values;

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x259B880", Offset = "0x2599E80", VA = "0x18259B880")]
	public SqlDateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x259A960", Offset = "0x2598F60", VA = "0x18259A960", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x259AF30", Offset = "0x2599530", VA = "0x18259AF30", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x259AE60", Offset = "0x2599460", VA = "0x18259AE60", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x259B190", Offset = "0x2599790", VA = "0x18259B190", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x259B520", Offset = "0x2599B20", VA = "0x18259B520", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x259B5B0", Offset = "0x2599BB0", VA = "0x18259B5B0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x259B630", Offset = "0x2599C30", VA = "0x18259B630", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x259B820", Offset = "0x2599E20", VA = "0x18259B820", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x259B6B0", Offset = "0x2599CB0", VA = "0x18259B6B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x259B210", Offset = "0x2599810", VA = "0x18259B210", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x259AFE0", Offset = "0x25995E0", VA = "0x18259AFE0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x259B570", Offset = "0x2599B70", VA = "0x18259B570", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x259B3F0", Offset = "0x25999F0", VA = "0x18259B3F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x259B780", Offset = "0x2599D80", VA = "0x18259B780", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
