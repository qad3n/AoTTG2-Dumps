// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CC")]
internal sealed class DateTimeStorage : DataStorage
{
	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_defaultValue;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x50")]
	private DateTime[] _values;

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x2589920", Offset = "0x2587F20", VA = "0x182589920")]
	internal DateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x2588560", Offset = "0x2586B60", VA = "0x182588560", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x2588AE0", Offset = "0x25870E0", VA = "0x182588AE0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x2588960", Offset = "0x2586F60", VA = "0x182588960", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x2588D50", Offset = "0x2587350", VA = "0x182588D50", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x2589060", Offset = "0x2587660", VA = "0x182589060", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x2589130", Offset = "0x2587730", VA = "0x182589130", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2589560", Offset = "0x2587B60", VA = "0x182589560", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2589240", Offset = "0x2587840", VA = "0x182589240", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x2588E50", Offset = "0x2587450", VA = "0x182588E50", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x2588C60", Offset = "0x2587260", VA = "0x182588C60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x25890F0", Offset = "0x25876F0", VA = "0x1825890F0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x2588F00", Offset = "0x2587500", VA = "0x182588F00", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x2589320", Offset = "0x2587920", VA = "0x182589320", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
