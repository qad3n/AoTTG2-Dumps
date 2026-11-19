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
	[Address(RVA = "0x5F55020", Offset = "0x5F54020", VA = "0x5F55020")]
	public TimeSpanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x5F55120", Offset = "0x5F54120", VA = "0x5F55120", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x5F55E20", Offset = "0x5F54E20", VA = "0x5F55E20", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x5F55F90", Offset = "0x5F54F90", VA = "0x5F55F90", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x5F560F0", Offset = "0x5F550F0", VA = "0x5F560F0")]
	private static TimeSpan ConvertToTimeSpan(object value)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x5F56290", Offset = "0x5F55290", VA = "0x5F56290", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x5F56320", Offset = "0x5F55320", VA = "0x5F56320", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x5F56370", Offset = "0x5F55370", VA = "0x5F56370", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x5F56460", Offset = "0x5F55460", VA = "0x5F56460", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x5F56520", Offset = "0x5F55520", VA = "0x5F56520", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x5F565E0", Offset = "0x5F555E0", VA = "0x5F565E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x5F56660", Offset = "0x5F55660", VA = "0x5F56660", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x5F56700", Offset = "0x5F55700", VA = "0x5F56700", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x5F56740", Offset = "0x5F55740", VA = "0x5F56740", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x5F56840", Offset = "0x5F55840", VA = "0x5F56840", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
