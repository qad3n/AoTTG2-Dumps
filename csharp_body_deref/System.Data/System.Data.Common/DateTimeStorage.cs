using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BF")]
internal sealed class DateTimeStorage : DataStorage
{
	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_defaultValue;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x50")]
	private DateTime[] _values;

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x42E8710", Offset = "0x42E8710", VA = "0x42E8710")]
	internal DateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x42EBE90", Offset = "0x42EBE90", VA = "0x42EBE90", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x42EC550", Offset = "0x42EC550", VA = "0x42EC550", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x42EC6E0", Offset = "0x42EC6E0", VA = "0x42EC6E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x42EC840", Offset = "0x42EC840", VA = "0x42EC840", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x42EC980", Offset = "0x42EC980", VA = "0x42EC980", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x42EC9F0", Offset = "0x42EC9F0", VA = "0x42EC9F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x42ECAE0", Offset = "0x42ECAE0", VA = "0x42ECAE0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x42ECEA0", Offset = "0x42ECEA0", VA = "0x42ECEA0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x42ECFC0", Offset = "0x42ECFC0", VA = "0x42ECFC0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x42ED060", Offset = "0x42ED060", VA = "0x42ED060", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x42ED110", Offset = "0x42ED110", VA = "0x42ED110", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x42ED150", Offset = "0x42ED150", VA = "0x42ED150", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x42ED2C0", Offset = "0x42ED2C0", VA = "0x42ED2C0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
