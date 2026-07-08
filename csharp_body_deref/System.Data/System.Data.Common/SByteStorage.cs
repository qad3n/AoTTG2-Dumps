using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C8")]
internal sealed class SByteStorage : DataStorage
{
	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x50")]
	private sbyte[] _values;

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x42E8010", Offset = "0x42E8010", VA = "0x42E8010")]
	public SByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x42F9B00", Offset = "0x42F9B00", VA = "0x42F9B00", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x42FA5C0", Offset = "0x42FA5C0", VA = "0x42FA5C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x42FA6A0", Offset = "0x42FA6A0", VA = "0x42FA6A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x42FA760", Offset = "0x42FA760", VA = "0x42FA760", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x42FA8A0", Offset = "0x42FA8A0", VA = "0x42FA8A0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x42FA910", Offset = "0x42FA910", VA = "0x42FA910", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x42FA9A0", Offset = "0x42FA9A0", VA = "0x42FA9A0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x42FAB30", Offset = "0x42FAB30", VA = "0x42FAB30", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x42FAC50", Offset = "0x42FAC50", VA = "0x42FAC50", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x42FACC0", Offset = "0x42FACC0", VA = "0x42FACC0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x42FAD50", Offset = "0x42FAD50", VA = "0x42FAD50", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x42FAD90", Offset = "0x42FAD90", VA = "0x42FAD90", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x42FAE90", Offset = "0x42FAE90", VA = "0x42FAE90", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
