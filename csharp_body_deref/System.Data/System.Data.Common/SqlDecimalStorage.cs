using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CF")]
internal sealed class SqlDecimalStorage : DataStorage
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x50")]
	private SqlDecimal[] _values;

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4305580", Offset = "0x4305580", VA = "0x4305580")]
	public SqlDecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x43056C0", Offset = "0x43056C0", VA = "0x43056C0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x4306F50", Offset = "0x4306F50", VA = "0x4306F50", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4307000", Offset = "0x4307000", VA = "0x4307000", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x43070D0", Offset = "0x43070D0", VA = "0x43070D0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x4307150", Offset = "0x4307150", VA = "0x4307150", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x43071B0", Offset = "0x43071B0", VA = "0x43071B0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4307230", Offset = "0x4307230", VA = "0x4307230", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x43072A0", Offset = "0x43072A0", VA = "0x43072A0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4307310", Offset = "0x4307310", VA = "0x4307310", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x43073C0", Offset = "0x43073C0", VA = "0x43073C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x43076C0", Offset = "0x43076C0", VA = "0x43076C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4307990", Offset = "0x4307990", VA = "0x4307990", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x43079D0", Offset = "0x43079D0", VA = "0x43079D0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x4307B00", Offset = "0x4307B00", VA = "0x4307B00", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
