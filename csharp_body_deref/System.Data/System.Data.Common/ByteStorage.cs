// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.ByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BA")]
internal sealed class ByteStorage : DataStorage
{
	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _values;

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x46226D0", Offset = "0x46226D0", VA = "0x46226D0")]
	internal ByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x46227F0", Offset = "0x46227F0", VA = "0x46227F0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4623290", Offset = "0x4623290", VA = "0x4623290", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4623340", Offset = "0x4623340", VA = "0x4623340", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4623400", Offset = "0x4623400", VA = "0x4623400", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4623540", Offset = "0x4623540", VA = "0x4623540", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x46235B0", Offset = "0x46235B0", VA = "0x46235B0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4623620", Offset = "0x4623620", VA = "0x4623620", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x46237B0", Offset = "0x46237B0", VA = "0x46237B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x46238D0", Offset = "0x46238D0", VA = "0x46238D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4623940", Offset = "0x4623940", VA = "0x4623940", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x46239D0", Offset = "0x46239D0", VA = "0x46239D0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4623A10", Offset = "0x4623A10", VA = "0x4623A10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4623B10", Offset = "0x4623B10", VA = "0x4623B10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
