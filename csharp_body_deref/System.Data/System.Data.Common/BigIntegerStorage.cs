using System.Collections;
using System.Numerics;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000B8")]
internal sealed class BigIntegerStorage : DataStorage
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x50")]
	private BigInteger[] _values;

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x42E2690", Offset = "0x42E2690", VA = "0x42E2690")]
	internal BigIntegerStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x42E27E0", Offset = "0x42E27E0", VA = "0x42E27E0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x42E2810", Offset = "0x42E2810", VA = "0x42E2810", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x42E2940", Offset = "0x42E2940", VA = "0x42E2940", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x42E2A60", Offset = "0x42E2A60", VA = "0x42E2A60")]
	internal static BigInteger ConvertToBigInteger(object value, IFormatProvider formatProvider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x42E3060", Offset = "0x42E3060", VA = "0x42E3060")]
	internal static object ConvertFromBigInteger(BigInteger value, Type type, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x42E3690", Offset = "0x42E3690", VA = "0x42E3690", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x42E3710", Offset = "0x42E3710", VA = "0x42E3710", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x42E3780", Offset = "0x42E3780", VA = "0x42E3780", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x42E3840", Offset = "0x42E3840", VA = "0x42E3840", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x42E39A0", Offset = "0x42E39A0", VA = "0x42E39A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x42E3A60", Offset = "0x42E3A60", VA = "0x42E3A60", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x42E3B00", Offset = "0x42E3B00", VA = "0x42E3B00", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x42E3BD0", Offset = "0x42E3BD0", VA = "0x42E3BD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x42E3C10", Offset = "0x42E3C10", VA = "0x42E3C10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x42E3D30", Offset = "0x42E3D30", VA = "0x42E3D30", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
