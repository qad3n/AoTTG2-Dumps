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
	[Address(RVA = "0x42E8DD0", Offset = "0x42E8DD0", VA = "0x42E8DD0")]
	public SqlDateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x43041D0", Offset = "0x43041D0", VA = "0x43041D0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x43049A0", Offset = "0x43049A0", VA = "0x43049A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x4304A40", Offset = "0x4304A40", VA = "0x4304A40", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x4304AF0", Offset = "0x4304AF0", VA = "0x4304AF0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x4304B60", Offset = "0x4304B60", VA = "0x4304B60", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x4304BB0", Offset = "0x4304BB0", VA = "0x4304BB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x4304C30", Offset = "0x4304C30", VA = "0x4304C30", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x4304CA0", Offset = "0x4304CA0", VA = "0x4304CA0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x4304CE0", Offset = "0x4304CE0", VA = "0x4304CE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4304D90", Offset = "0x4304D90", VA = "0x4304D90", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x4305090", Offset = "0x4305090", VA = "0x4305090", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x4305370", Offset = "0x4305370", VA = "0x4305370", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x43053B0", Offset = "0x43053B0", VA = "0x43053B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x43054D0", Offset = "0x43054D0", VA = "0x43054D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
