// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt64Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000EA")]
internal sealed class UInt64Storage : DataStorage
{
	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ulong s_defaultValue;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0x50")]
	private ulong[] _values;

	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x25B0A60", Offset = "0x25AF060", VA = "0x1825B0A60")]
	public UInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x25AF990", Offset = "0x25ADF90", VA = "0x1825AF990", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x25B0290", Offset = "0x25AE890", VA = "0x1825B0290", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x25B0170", Offset = "0x25AE770", VA = "0x1825B0170", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x25B0440", Offset = "0x25AEA40", VA = "0x1825B0440", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x25AD0F0", Offset = "0x25AB6F0", VA = "0x1825AD0F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x25B06C0", Offset = "0x25AECC0", VA = "0x1825B06C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x25B0920", Offset = "0x25AEF20", VA = "0x1825B0920", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x25B0780", Offset = "0x25AED80", VA = "0x1825B0780", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x25B0520", Offset = "0x25AEB20", VA = "0x1825B0520", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x25B03C0", Offset = "0x25AE9C0", VA = "0x1825B03C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x25B0680", Offset = "0x25AEC80", VA = "0x1825B0680", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x25B0580", Offset = "0x25AEB80", VA = "0x1825B0580", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x25B0860", Offset = "0x25AEE60", VA = "0x1825B0860", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
