using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D4")]
internal sealed class SqlInt64Storage : DataStorage
{
	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt64[] _values;

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x430F2F0", Offset = "0x430F2F0", VA = "0x430F2F0")]
	public SqlInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x430F410", Offset = "0x430F410", VA = "0x430F410", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4310D40", Offset = "0x4310D40", VA = "0x4310D40", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x4310DE0", Offset = "0x4310DE0", VA = "0x4310DE0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4310E90", Offset = "0x4310E90", VA = "0x4310E90", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4310F00", Offset = "0x4310F00", VA = "0x4310F00", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4310F60", Offset = "0x4310F60", VA = "0x4310F60", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4310FF0", Offset = "0x4310FF0", VA = "0x4310FF0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4311060", Offset = "0x4311060", VA = "0x4311060", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x43110B0", Offset = "0x43110B0", VA = "0x43110B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x4311160", Offset = "0x4311160", VA = "0x4311160", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x4311430", Offset = "0x4311430", VA = "0x4311430", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x4311700", Offset = "0x4311700", VA = "0x4311700", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x4311740", Offset = "0x4311740", VA = "0x4311740", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x4311870", Offset = "0x4311870", VA = "0x4311870", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
