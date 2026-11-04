// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int64Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D1")]
internal sealed class Int64Storage : DataStorage
{
	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x50")]
	private long[] _values;

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x258EEB0", Offset = "0x258D4B0", VA = "0x18258EEB0")]
	internal Int64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x258DF70", Offset = "0x258C570", VA = "0x18258DF70", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x258E7C0", Offset = "0x258CDC0", VA = "0x18258E7C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x258E6F0", Offset = "0x258CCF0", VA = "0x18258E6F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x258E8C0", Offset = "0x258CEC0", VA = "0x18258E8C0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x2589060", Offset = "0x2587660", VA = "0x182589060", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x258EB60", Offset = "0x258D160", VA = "0x18258EB60", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x258ED70", Offset = "0x258D370", VA = "0x18258ED70", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x258EBD0", Offset = "0x258D1D0", VA = "0x18258EBD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x258E9B0", Offset = "0x258CFB0", VA = "0x18258E9B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x258E840", Offset = "0x258CE40", VA = "0x18258E840", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x258EB20", Offset = "0x258D120", VA = "0x18258EB20", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x258EA10", Offset = "0x258D010", VA = "0x18258EA10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x258ECB0", Offset = "0x258D2B0", VA = "0x18258ECB0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
