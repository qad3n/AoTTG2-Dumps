using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C2")]
internal sealed class Int16Storage : DataStorage
{
	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x50")]
	private short[] _values;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x42E8130", Offset = "0x42E8130", VA = "0x42E8130")]
	internal Int16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x42F05B0", Offset = "0x42F05B0", VA = "0x42F05B0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x42F11D0", Offset = "0x42F11D0", VA = "0x42F11D0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x42F1270", Offset = "0x42F1270", VA = "0x42F1270", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x42F1340", Offset = "0x42F1340", VA = "0x42F1340", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x42F1480", Offset = "0x42F1480", VA = "0x42F1480", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x42F14F0", Offset = "0x42F14F0", VA = "0x42F14F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x42F1560", Offset = "0x42F1560", VA = "0x42F1560", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x42F16F0", Offset = "0x42F16F0", VA = "0x42F16F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x42F1810", Offset = "0x42F1810", VA = "0x42F1810", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x42F1880", Offset = "0x42F1880", VA = "0x42F1880", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x42F1910", Offset = "0x42F1910", VA = "0x42F1910", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x42F1950", Offset = "0x42F1950", VA = "0x42F1950", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x42F1A50", Offset = "0x42F1A50", VA = "0x42F1A50", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
