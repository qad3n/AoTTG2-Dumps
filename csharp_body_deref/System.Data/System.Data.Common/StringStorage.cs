using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DC")]
internal sealed class StringStorage : DataStorage
{
	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x50")]
	private string[] _values;

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x431B4F0", Offset = "0x431B4F0", VA = "0x431B4F0")]
	public StringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x431B5A0", Offset = "0x431B5A0", VA = "0x431B5A0", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x431B890", Offset = "0x431B890", VA = "0x431B890", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x431B900", Offset = "0x431B900", VA = "0x431B900", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x431B980", Offset = "0x431B980", VA = "0x431B980", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x431B9B0", Offset = "0x431B9B0", VA = "0x431B9B0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x431B9F0", Offset = "0x431B9F0", VA = "0x431B9F0", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x431BA20", Offset = "0x431BA20", VA = "0x431BA20", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x431BA50", Offset = "0x431BA50", VA = "0x431BA50", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x431BA80", Offset = "0x431BA80", VA = "0x431BA80", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x431BB10", Offset = "0x431BB10", VA = "0x431BB10", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x431BBC0", Offset = "0x431BBC0", VA = "0x431BBC0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x431BBD0", Offset = "0x431BBD0", VA = "0x431BBD0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x431BC00", Offset = "0x431BC00", VA = "0x431BC00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x431BC40", Offset = "0x431BC40", VA = "0x431BC40", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x431BD60", Offset = "0x431BD60", VA = "0x431BD60", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
