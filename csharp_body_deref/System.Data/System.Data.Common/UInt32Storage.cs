using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DF")]
internal sealed class UInt32Storage : DataStorage
{
	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_defaultValue;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x50")]
	private uint[] _values;

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x431F240", Offset = "0x431F240", VA = "0x431F240")]
	public UInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x431F320", Offset = "0x431F320", VA = "0x431F320", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x431FE60", Offset = "0x431FE60", VA = "0x431FE60", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x431FF10", Offset = "0x431FF10", VA = "0x431FF10", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x4320000", Offset = "0x4320000", VA = "0x4320000", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x4320130", Offset = "0x4320130", VA = "0x4320130", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x4320180", Offset = "0x4320180", VA = "0x4320180", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x4320230", Offset = "0x4320230", VA = "0x4320230", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x43203A0", Offset = "0x43203A0", VA = "0x43203A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4320460", Offset = "0x4320460", VA = "0x4320460", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x43204D0", Offset = "0x43204D0", VA = "0x43204D0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x4320560", Offset = "0x4320560", VA = "0x4320560", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x43205A0", Offset = "0x43205A0", VA = "0x43205A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4320690", Offset = "0x4320690", VA = "0x4320690", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
