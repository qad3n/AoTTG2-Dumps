using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D7")]
internal sealed class SqlStringStorage : DataStorage
{
	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private SqlString[] _values;

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x43161B0", Offset = "0x43161B0", VA = "0x43161B0")]
	public SqlStringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x43162E0", Offset = "0x43162E0", VA = "0x43162E0", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x4316830", Offset = "0x4316830", VA = "0x4316830", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x43168C0", Offset = "0x43168C0", VA = "0x43168C0")]
	public int Compare(SqlString valueNo1, SqlString valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x43169E0", Offset = "0x43169E0", VA = "0x43169E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4316AA0", Offset = "0x4316AA0", VA = "0x4316AA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x4316B20", Offset = "0x4316B20", VA = "0x4316B20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x4316B90", Offset = "0x4316B90", VA = "0x4316B90", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4316C10", Offset = "0x4316C10", VA = "0x4316C10", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4316CD0", Offset = "0x4316CD0", VA = "0x4316CD0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x4316D40", Offset = "0x4316D40", VA = "0x4316D40", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4316DD0", Offset = "0x4316DD0", VA = "0x4316DD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x4316E80", Offset = "0x4316E80", VA = "0x4316E80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x4317180", Offset = "0x4317180", VA = "0x4317180", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x4317450", Offset = "0x4317450", VA = "0x4317450", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x4317490", Offset = "0x4317490", VA = "0x4317490", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x43175E0", Offset = "0x43175E0", VA = "0x43175E0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
