using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BB")]
internal sealed class CharStorage : DataStorage
{
	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x50")]
	private char[] _values;

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x42E6460", Offset = "0x42E6460", VA = "0x42E6460")]
	internal CharStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x42E6580", Offset = "0x42E6580", VA = "0x42E6580", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x42E69D0", Offset = "0x42E69D0", VA = "0x42E69D0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x42E6AA0", Offset = "0x42E6AA0", VA = "0x42E6AA0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x42E6B90", Offset = "0x42E6B90", VA = "0x42E6B90", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x42E6CD0", Offset = "0x42E6CD0", VA = "0x42E6CD0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x42E6D40", Offset = "0x42E6D40", VA = "0x42E6D40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x42E6DB0", Offset = "0x42E6DB0", VA = "0x42E6DB0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x42E6F90", Offset = "0x42E6F90", VA = "0x42E6F90", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x42E70B0", Offset = "0x42E70B0", VA = "0x42E70B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x42E7120", Offset = "0x42E7120", VA = "0x42E7120", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x42E71B0", Offset = "0x42E71B0", VA = "0x42E71B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x42E71F0", Offset = "0x42E71F0", VA = "0x42E71F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x42E72F0", Offset = "0x42E72F0", VA = "0x42E72F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
