using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DD")]
internal sealed class TimeSpanStorage : DataStorage
{
	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TimeSpan s_defaultValue;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x50")]
	private TimeSpan[] _values;

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x431BE00", Offset = "0x431BE00", VA = "0x431BE00")]
	public TimeSpanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x431BF00", Offset = "0x431BF00", VA = "0x431BF00", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x431D1D0", Offset = "0x431D1D0", VA = "0x431D1D0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x431D340", Offset = "0x431D340", VA = "0x431D340", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x431D4B0", Offset = "0x431D4B0", VA = "0x431D4B0")]
	private static TimeSpan ConvertToTimeSpan(object value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x431D660", Offset = "0x431D660", VA = "0x431D660", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x431D6F0", Offset = "0x431D6F0", VA = "0x431D6F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x431D740", Offset = "0x431D740", VA = "0x431D740", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x431D830", Offset = "0x431D830", VA = "0x431D830", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x431D8F0", Offset = "0x431D8F0", VA = "0x431D8F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x431D9B0", Offset = "0x431D9B0", VA = "0x431D9B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x431DA30", Offset = "0x431DA30", VA = "0x431DA30", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x431DAD0", Offset = "0x431DAD0", VA = "0x431DAD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x431DB10", Offset = "0x431DB10", VA = "0x431DB10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x431DC10", Offset = "0x431DC10", VA = "0x431DC10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
