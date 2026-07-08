using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CC")]
internal sealed class SqlBytesStorage : DataStorage
{
	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x50")]
	private SqlBytes[] _values;

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x42E8C30", Offset = "0x42E8C30", VA = "0x42E8C30")]
	public SqlBytesStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x4302890", Offset = "0x4302890", VA = "0x4302890", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4302AB0", Offset = "0x4302AB0", VA = "0x4302AB0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4302AC0", Offset = "0x4302AC0", VA = "0x4302AC0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4302AD0", Offset = "0x4302AD0", VA = "0x4302AD0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4302B10", Offset = "0x4302B10", VA = "0x4302B10", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x4302B40", Offset = "0x4302B40", VA = "0x4302B40", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x4302B70", Offset = "0x4302B70", VA = "0x4302B70", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4302CA0", Offset = "0x4302CA0", VA = "0x4302CA0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x4302D50", Offset = "0x4302D50", VA = "0x4302D50", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x4303040", Offset = "0x4303040", VA = "0x4303040", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4303320", Offset = "0x4303320", VA = "0x4303320", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4303360", Offset = "0x4303360", VA = "0x4303360", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4303480", Offset = "0x4303480", VA = "0x4303480", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
