// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeOffsetStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CB")]
internal sealed class DateTimeOffsetStorage : DataStorage
{
	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTimeOffset s_defaultValue;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x50")]
	private DateTimeOffset[] _values;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x2588460", Offset = "0x2586A60", VA = "0x182588460")]
	internal DateTimeOffsetStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x2587480", Offset = "0x2585A80", VA = "0x182587480", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x2587A90", Offset = "0x2586090", VA = "0x182587A90", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x25878F0", Offset = "0x2585EF0", VA = "0x1825878F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x2587D00", Offset = "0x2586300", VA = "0x182587D00", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x2587F20", Offset = "0x2586520", VA = "0x182587F20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x2587FF0", Offset = "0x25865F0", VA = "0x182587FF0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x25882D0", Offset = "0x25868D0", VA = "0x1825882D0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2588130", Offset = "0x2586730", VA = "0x182588130", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x2587D90", Offset = "0x2586390", VA = "0x182587D90", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x2587C70", Offset = "0x2586270", VA = "0x182587C70", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x2587FB0", Offset = "0x25865B0", VA = "0x182587FB0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x2587E10", Offset = "0x2586410", VA = "0x182587E10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x2588210", Offset = "0x2586810", VA = "0x182588210", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
