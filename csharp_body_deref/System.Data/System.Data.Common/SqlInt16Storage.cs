using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D2")]
internal sealed class SqlInt16Storage : DataStorage
{
	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt16[] _values;

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x430AE20", Offset = "0x430AE20", VA = "0x430AE20")]
	public SqlInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x430AF40", Offset = "0x430AF40", VA = "0x430AF40", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x430C540", Offset = "0x430C540", VA = "0x430C540", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x430C5D0", Offset = "0x430C5D0", VA = "0x430C5D0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x430C670", Offset = "0x430C670", VA = "0x430C670", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x430C6E0", Offset = "0x430C6E0", VA = "0x430C6E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x430C710", Offset = "0x430C710", VA = "0x430C710", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x430C780", Offset = "0x430C780", VA = "0x430C780", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x430C7F0", Offset = "0x430C7F0", VA = "0x430C7F0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x430C830", Offset = "0x430C830", VA = "0x430C830", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x430C8E0", Offset = "0x430C8E0", VA = "0x430C8E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x430CBC0", Offset = "0x430CBC0", VA = "0x430CBC0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x430CE90", Offset = "0x430CE90", VA = "0x430CE90", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x430CED0", Offset = "0x430CED0", VA = "0x430CED0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x430CFD0", Offset = "0x430CFD0", VA = "0x430CFD0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
