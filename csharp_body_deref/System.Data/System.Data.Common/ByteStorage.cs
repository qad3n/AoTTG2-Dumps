using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BA")]
internal sealed class ByteStorage : DataStorage
{
	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _values;

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x42E4F70", Offset = "0x42E4F70", VA = "0x42E4F70")]
	internal ByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x42E5090", Offset = "0x42E5090", VA = "0x42E5090", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x42E5B30", Offset = "0x42E5B30", VA = "0x42E5B30", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x42E5BE0", Offset = "0x42E5BE0", VA = "0x42E5BE0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x42E5CA0", Offset = "0x42E5CA0", VA = "0x42E5CA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x42E5DE0", Offset = "0x42E5DE0", VA = "0x42E5DE0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x42E5E50", Offset = "0x42E5E50", VA = "0x42E5E50", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x42E5EC0", Offset = "0x42E5EC0", VA = "0x42E5EC0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x42E6050", Offset = "0x42E6050", VA = "0x42E6050", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x42E6170", Offset = "0x42E6170", VA = "0x42E6170", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x42E61E0", Offset = "0x42E61E0", VA = "0x42E61E0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x42E6270", Offset = "0x42E6270", VA = "0x42E6270", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x42E62B0", Offset = "0x42E62B0", VA = "0x42E62B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x42E63B0", Offset = "0x42E63B0", VA = "0x42E63B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
