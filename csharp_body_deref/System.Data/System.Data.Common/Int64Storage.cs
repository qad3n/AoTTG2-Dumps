using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C4")]
internal sealed class Int64Storage : DataStorage
{
	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x50")]
	private long[] _values;

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x42E8370", Offset = "0x42E8370", VA = "0x42E8370")]
	internal Int64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x42F3020", Offset = "0x42F3020", VA = "0x42F3020", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x42F3CA0", Offset = "0x42F3CA0", VA = "0x42F3CA0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x42F3D40", Offset = "0x42F3D40", VA = "0x42F3D40", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x42F3E10", Offset = "0x42F3E10", VA = "0x42F3E10", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x42F3F40", Offset = "0x42F3F40", VA = "0x42F3F40", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x42F3FB0", Offset = "0x42F3FB0", VA = "0x42F3FB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x42F4020", Offset = "0x42F4020", VA = "0x42F4020", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x42F41B0", Offset = "0x42F41B0", VA = "0x42F41B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x42F42D0", Offset = "0x42F42D0", VA = "0x42F42D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x42F4340", Offset = "0x42F4340", VA = "0x42F4340", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x42F43D0", Offset = "0x42F43D0", VA = "0x42F43D0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x42F4410", Offset = "0x42F4410", VA = "0x42F4410", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x42F4510", Offset = "0x42F4510", VA = "0x42F4510", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
