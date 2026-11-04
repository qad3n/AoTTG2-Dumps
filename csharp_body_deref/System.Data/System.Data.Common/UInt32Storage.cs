// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt32Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E9")]
internal sealed class UInt32Storage : DataStorage
{
	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_defaultValue;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x50")]
	private uint[] _values;

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x25AF8C0", Offset = "0x25ADEC0", VA = "0x1825AF8C0")]
	public UInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x25AE8E0", Offset = "0x25ACEE0", VA = "0x1825AE8E0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x25AF160", Offset = "0x25AD760", VA = "0x1825AF160", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x25AF040", Offset = "0x25AD640", VA = "0x1825AF040", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x25AF2B0", Offset = "0x25AD8B0", VA = "0x1825AF2B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x259E050", Offset = "0x259C650", VA = "0x18259E050", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x25AF530", Offset = "0x25ADB30", VA = "0x1825AF530", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x25AF790", Offset = "0x25ADD90", VA = "0x1825AF790", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x25AF5F0", Offset = "0x25ADBF0", VA = "0x1825AF5F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x25AF390", Offset = "0x25AD990", VA = "0x1825AF390", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x25AF230", Offset = "0x25AD830", VA = "0x1825AF230", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x25AF4F0", Offset = "0x25ADAF0", VA = "0x1825AF4F0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x25AF3F0", Offset = "0x25AD9F0", VA = "0x1825AF3F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x25AF6D0", Offset = "0x25ADCD0", VA = "0x1825AF6D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
