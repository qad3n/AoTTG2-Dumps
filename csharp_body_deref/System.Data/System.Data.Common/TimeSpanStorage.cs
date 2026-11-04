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

[Token(Token = "0x20000E7")]
internal sealed class TimeSpanStorage : DataStorage
{
	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TimeSpan s_defaultValue;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0x50")]
	private TimeSpan[] _values;

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x25AD570", Offset = "0x25ABB70", VA = "0x1825AD570")]
	public TimeSpanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x25ABE30", Offset = "0x25AA430", VA = "0x1825ABE30", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x25ACAE0", Offset = "0x25AB0E0", VA = "0x1825ACAE0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x25AC950", Offset = "0x25AAF50", VA = "0x1825AC950", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x25ACCF0", Offset = "0x25AB2F0", VA = "0x1825ACCF0")]
	private static TimeSpan ConvertToTimeSpan(object value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x25ACED0", Offset = "0x25AB4D0", VA = "0x1825ACED0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x25AD0F0", Offset = "0x25AB6F0", VA = "0x1825AD0F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x25AD190", Offset = "0x25AB790", VA = "0x1825AD190", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x25AD430", Offset = "0x25ABA30", VA = "0x1825AD430", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x25AD290", Offset = "0x25AB890", VA = "0x1825AD290", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x25ACF70", Offset = "0x25AB570", VA = "0x1825ACF70", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x25ACC60", Offset = "0x25AB260", VA = "0x1825ACC60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x25AD150", Offset = "0x25AB750", VA = "0x1825AD150", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x25ACFE0", Offset = "0x25AB5E0", VA = "0x1825ACFE0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x25AD370", Offset = "0x25AB970", VA = "0x1825AD370", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
