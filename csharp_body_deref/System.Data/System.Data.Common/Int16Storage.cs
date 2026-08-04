// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C2")]
internal sealed class Int16Storage : DataStorage
{
	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x50")]
	private short[] _values;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4625890", Offset = "0x4625890", VA = "0x4625890")]
	internal Int16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x462DD10", Offset = "0x462DD10", VA = "0x462DD10", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x462E930", Offset = "0x462E930", VA = "0x462E930", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x462E9D0", Offset = "0x462E9D0", VA = "0x462E9D0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x462EAA0", Offset = "0x462EAA0", VA = "0x462EAA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x462EBE0", Offset = "0x462EBE0", VA = "0x462EBE0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x462EC50", Offset = "0x462EC50", VA = "0x462EC50", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x462ECC0", Offset = "0x462ECC0", VA = "0x462ECC0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x462EE50", Offset = "0x462EE50", VA = "0x462EE50", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x462EF70", Offset = "0x462EF70", VA = "0x462EF70", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x462EFE0", Offset = "0x462EFE0", VA = "0x462EFE0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x462F070", Offset = "0x462F070", VA = "0x462F070", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x462F0B0", Offset = "0x462F0B0", VA = "0x462F0B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x462F1B0", Offset = "0x462F1B0", VA = "0x462F1B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
