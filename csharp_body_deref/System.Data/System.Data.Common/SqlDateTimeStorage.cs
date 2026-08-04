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

[Token(Token = "0x20000CE")]
internal sealed class SqlDateTimeStorage : DataStorage
{
	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x50")]
	private SqlDateTime[] _values;

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x4626530", Offset = "0x4626530", VA = "0x4626530")]
	public SqlDateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x4641930", Offset = "0x4641930", VA = "0x4641930", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x4642100", Offset = "0x4642100", VA = "0x4642100", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x46421A0", Offset = "0x46421A0", VA = "0x46421A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4642250", Offset = "0x4642250", VA = "0x4642250", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x46422C0", Offset = "0x46422C0", VA = "0x46422C0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4642310", Offset = "0x4642310", VA = "0x4642310", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4642390", Offset = "0x4642390", VA = "0x4642390", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4642400", Offset = "0x4642400", VA = "0x4642400", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4642440", Offset = "0x4642440", VA = "0x4642440", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x46424F0", Offset = "0x46424F0", VA = "0x46424F0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x46427F0", Offset = "0x46427F0", VA = "0x46427F0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4642AD0", Offset = "0x4642AD0", VA = "0x4642AD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x4642B10", Offset = "0x4642B10", VA = "0x4642B10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x4642C30", Offset = "0x4642C30", VA = "0x4642C30", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
