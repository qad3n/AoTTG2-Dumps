using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D5")]
internal sealed class SqlMoneyStorage : DataStorage
{
	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x50")]
	private SqlMoney[] _values;

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x4311910", Offset = "0x4311910", VA = "0x4311910")]
	public SqlMoneyStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x4311A30", Offset = "0x4311A30", VA = "0x4311A30", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x43133C0", Offset = "0x43133C0", VA = "0x43133C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4313460", Offset = "0x4313460", VA = "0x4313460", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4313510", Offset = "0x4313510", VA = "0x4313510", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4313580", Offset = "0x4313580", VA = "0x4313580", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x43135E0", Offset = "0x43135E0", VA = "0x43135E0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4313670", Offset = "0x4313670", VA = "0x4313670", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x43136E0", Offset = "0x43136E0", VA = "0x43136E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4313730", Offset = "0x4313730", VA = "0x4313730", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x43137E0", Offset = "0x43137E0", VA = "0x43137E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4313AB0", Offset = "0x4313AB0", VA = "0x4313AB0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x4313D80", Offset = "0x4313D80", VA = "0x4313D80", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4313DC0", Offset = "0x4313DC0", VA = "0x4313DC0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4313EF0", Offset = "0x4313EF0", VA = "0x4313EF0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
