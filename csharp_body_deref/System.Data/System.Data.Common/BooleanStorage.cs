using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000B9")]
internal sealed class BooleanStorage : DataStorage
{
	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x50")]
	private bool[] _values;

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x42E3DE0", Offset = "0x42E3DE0", VA = "0x42E3DE0")]
	internal BooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x42E3F90", Offset = "0x42E3F90", VA = "0x42E3F90", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x42E4470", Offset = "0x42E4470", VA = "0x42E4470", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x42E45A0", Offset = "0x42E45A0", VA = "0x42E45A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x42E4680", Offset = "0x42E4680", VA = "0x42E4680", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x42E47E0", Offset = "0x42E47E0", VA = "0x42E47E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x42E4890", Offset = "0x42E4890", VA = "0x42E4890", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x42E4930", Offset = "0x42E4930", VA = "0x42E4930", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x42E4AE0", Offset = "0x42E4AE0", VA = "0x42E4AE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x42E4C80", Offset = "0x42E4C80", VA = "0x42E4C80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x42E4CF0", Offset = "0x42E4CF0", VA = "0x42E4CF0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x42E4D80", Offset = "0x42E4D80", VA = "0x42E4D80", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x42E4DC0", Offset = "0x42E4DC0", VA = "0x42E4DC0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x42E4EC0", Offset = "0x42E4EC0", VA = "0x42E4EC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
