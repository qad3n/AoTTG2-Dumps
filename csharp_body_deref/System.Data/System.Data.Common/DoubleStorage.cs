using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C1")]
internal sealed class DoubleStorage : DataStorage
{
	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x50")]
	private double[] _values;

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x42E8490", Offset = "0x42E8490", VA = "0x42E8490")]
	internal DoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x42EF1D0", Offset = "0x42EF1D0", VA = "0x42EF1D0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x42EFC40", Offset = "0x42EFC40", VA = "0x42EFC40", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x42EFD00", Offset = "0x42EFD00", VA = "0x42EFD00", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x42EFDE0", Offset = "0x42EFDE0", VA = "0x42EFDE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x42EFF10", Offset = "0x42EFF10", VA = "0x42EFF10", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x42EFF80", Offset = "0x42EFF80", VA = "0x42EFF80", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x42F0000", Offset = "0x42F0000", VA = "0x42F0000", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x42F0190", Offset = "0x42F0190", VA = "0x42F0190", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x42F02B0", Offset = "0x42F02B0", VA = "0x42F02B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x42F0320", Offset = "0x42F0320", VA = "0x42F0320", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x42F03C0", Offset = "0x42F03C0", VA = "0x42F03C0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x42F0400", Offset = "0x42F0400", VA = "0x42F0400", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x42F0500", Offset = "0x42F0500", VA = "0x42F0500", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
