using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C3")]
internal sealed class Int32Storage : DataStorage
{
	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x50")]
	private int[] _values;

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x42E8250", Offset = "0x42E8250", VA = "0x42E8250")]
	internal Int32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x42F1B00", Offset = "0x42F1B00", VA = "0x42F1B00", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x42F2700", Offset = "0x42F2700", VA = "0x42F2700", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x42F27A0", Offset = "0x42F27A0", VA = "0x42F27A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x42F2860", Offset = "0x42F2860", VA = "0x42F2860", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x42F29A0", Offset = "0x42F29A0", VA = "0x42F29A0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x42F2A10", Offset = "0x42F2A10", VA = "0x42F2A10", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x42F2A80", Offset = "0x42F2A80", VA = "0x42F2A80", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x42F2C10", Offset = "0x42F2C10", VA = "0x42F2C10", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x42F2D30", Offset = "0x42F2D30", VA = "0x42F2D30", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x42F2DA0", Offset = "0x42F2DA0", VA = "0x42F2DA0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x42F2E30", Offset = "0x42F2E30", VA = "0x42F2E30", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x42F2E70", Offset = "0x42F2E70", VA = "0x42F2E70", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x42F2F70", Offset = "0x42F2F70", VA = "0x42F2F70", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
