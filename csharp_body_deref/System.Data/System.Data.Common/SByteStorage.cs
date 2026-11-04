// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D2")]
internal sealed class SByteStorage : DataStorage
{
	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x50")]
	private sbyte[] _values;

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x258FEB0", Offset = "0x258E4B0", VA = "0x18258FEB0")]
	public SByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x258EF70", Offset = "0x258D570", VA = "0x18258EF70", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x258F760", Offset = "0x258DD60", VA = "0x18258F760", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x258F690", Offset = "0x258DC90", VA = "0x18258F690", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x258F8A0", Offset = "0x258DEA0", VA = "0x18258F8A0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x2582B80", Offset = "0x2581180", VA = "0x182582B80", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x258FB40", Offset = "0x258E140", VA = "0x18258FB40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x258FD80", Offset = "0x258E380", VA = "0x18258FD80", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x258FBE0", Offset = "0x258E1E0", VA = "0x18258FBE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x258F990", Offset = "0x258DF90", VA = "0x18258F990", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x258F820", Offset = "0x258DE20", VA = "0x18258F820", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x258FB00", Offset = "0x258E100", VA = "0x18258FB00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x258F9F0", Offset = "0x258DFF0", VA = "0x18258F9F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x258FCC0", Offset = "0x258E2C0", VA = "0x18258FCC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
