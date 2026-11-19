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

[Token(Token = "0x20000C7")]
internal sealed class ByteStorage : DataStorage
{
	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _values;

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x5F29640", Offset = "0x5F28640", VA = "0x5F29640")]
	internal ByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x5F29760", Offset = "0x5F28760", VA = "0x5F29760", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x5F29FE0", Offset = "0x5F28FE0", VA = "0x5F29FE0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x5F2A080", Offset = "0x5F29080", VA = "0x5F2A080", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5F2A140", Offset = "0x5F29140", VA = "0x5F2A140", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x5F2A280", Offset = "0x5F29280", VA = "0x5F2A280", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x5F2A2F0", Offset = "0x5F292F0", VA = "0x5F2A2F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x5F2A360", Offset = "0x5F29360", VA = "0x5F2A360", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x5F2A4F0", Offset = "0x5F294F0", VA = "0x5F2A4F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x5F2A610", Offset = "0x5F29610", VA = "0x5F2A610", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x5F2A680", Offset = "0x5F29680", VA = "0x5F2A680", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x5F2A710", Offset = "0x5F29710", VA = "0x5F2A710", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x5F2A750", Offset = "0x5F29750", VA = "0x5F2A750", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x5F2A850", Offset = "0x5F29850", VA = "0x5F2A850", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
