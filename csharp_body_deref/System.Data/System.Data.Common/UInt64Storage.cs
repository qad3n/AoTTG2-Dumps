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
	[Address(RVA = "0x5F58DE0", Offset = "0x5F57DE0", VA = "0x5F58DE0")]
	public UInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x5F58EC0", Offset = "0x5F57EC0", VA = "0x5F58EC0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x5F59710", Offset = "0x5F58710", VA = "0x5F59710", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x5F59800", Offset = "0x5F58800", VA = "0x5F59800", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x5F598F0", Offset = "0x5F588F0", VA = "0x5F598F0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x5F59A20", Offset = "0x5F58A20", VA = "0x5F59A20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x5F59A70", Offset = "0x5F58A70", VA = "0x5F59A70", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x5F59B20", Offset = "0x5F58B20", VA = "0x5F59B20", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x5F59CB0", Offset = "0x5F58CB0", VA = "0x5F59CB0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x5F59D70", Offset = "0x5F58D70", VA = "0x5F59D70", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x5F59DE0", Offset = "0x5F58DE0", VA = "0x5F59DE0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x5F59E70", Offset = "0x5F58E70", VA = "0x5F59E70", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x5F59EB0", Offset = "0x5F58EB0", VA = "0x5F59EB0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x5F59FA0", Offset = "0x5F58FA0", VA = "0x5F59FA0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
