// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.TimeSpanStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4659560", Offset = "0x4659560", VA = "0x4659560")]
	public TimeSpanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4659660", Offset = "0x4659660", VA = "0x4659660", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x465A930", Offset = "0x465A930", VA = "0x465A930", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x465AAA0", Offset = "0x465AAA0", VA = "0x465AAA0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x465AC10", Offset = "0x465AC10", VA = "0x465AC10")]
	private static TimeSpan ConvertToTimeSpan(object value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x465ADC0", Offset = "0x465ADC0", VA = "0x465ADC0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x465AE50", Offset = "0x465AE50", VA = "0x465AE50", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x465AEA0", Offset = "0x465AEA0", VA = "0x465AEA0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x465AF90", Offset = "0x465AF90", VA = "0x465AF90", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x465B050", Offset = "0x465B050", VA = "0x465B050", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x465B110", Offset = "0x465B110", VA = "0x465B110", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x465B190", Offset = "0x465B190", VA = "0x465B190", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x465B230", Offset = "0x465B230", VA = "0x465B230", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x465B270", Offset = "0x465B270", VA = "0x465B270", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x465B370", Offset = "0x465B370", VA = "0x465B370", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
