using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D6")]
internal sealed class SqlSingleStorage : DataStorage
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x50")]
	private SqlSingle[] _values;

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x4313F90", Offset = "0x4313F90", VA = "0x4313F90")]
	public SqlSingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x43140B0", Offset = "0x43140B0", VA = "0x43140B0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4315650", Offset = "0x4315650", VA = "0x4315650", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x43156E0", Offset = "0x43156E0", VA = "0x43156E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4315790", Offset = "0x4315790", VA = "0x4315790", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x43157F0", Offset = "0x43157F0", VA = "0x43157F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4315830", Offset = "0x4315830", VA = "0x4315830", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x43158A0", Offset = "0x43158A0", VA = "0x43158A0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4315910", Offset = "0x4315910", VA = "0x4315910", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x4315950", Offset = "0x4315950", VA = "0x4315950", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4315A00", Offset = "0x4315A00", VA = "0x4315A00", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4315D00", Offset = "0x4315D00", VA = "0x4315D00", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4315FD0", Offset = "0x4315FD0", VA = "0x4315FD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4316010", Offset = "0x4316010", VA = "0x4316010", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4316110", Offset = "0x4316110", VA = "0x4316110", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
