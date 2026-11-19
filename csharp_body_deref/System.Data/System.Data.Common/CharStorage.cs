// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.CharStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C8")]
internal sealed class CharStorage : DataStorage
{
	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x50")]
	private char[] _values;

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x5F2A900", Offset = "0x5F29900", VA = "0x5F2A900")]
	internal CharStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x5F2AA20", Offset = "0x5F29A20", VA = "0x5F2AA20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x5F2AD70", Offset = "0x5F29D70", VA = "0x5F2AD70", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x5F2AE40", Offset = "0x5F29E40", VA = "0x5F2AE40", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x5F2AF20", Offset = "0x5F29F20", VA = "0x5F2AF20", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x5F2B060", Offset = "0x5F2A060", VA = "0x5F2B060", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x5F2B0D0", Offset = "0x5F2A0D0", VA = "0x5F2B0D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x5F2B140", Offset = "0x5F2A140", VA = "0x5F2B140", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x5F2B320", Offset = "0x5F2A320", VA = "0x5F2B320", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x5F2B440", Offset = "0x5F2A440", VA = "0x5F2B440", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x5F2B4B0", Offset = "0x5F2A4B0", VA = "0x5F2B4B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x5F2B540", Offset = "0x5F2A540", VA = "0x5F2B540", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x5F2B580", Offset = "0x5F2A580", VA = "0x5F2B580", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x5F2B680", Offset = "0x5F2A680", VA = "0x5F2B680", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
