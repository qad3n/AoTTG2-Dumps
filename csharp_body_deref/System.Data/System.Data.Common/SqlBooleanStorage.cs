// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBooleanStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E2")]
internal sealed class SqlBooleanStorage : DataStorage
{
	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x50")]
	private SqlBoolean[] _values;

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x259F1D0", Offset = "0x259D7D0", VA = "0x18259F1D0")]
	public SqlBooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x259E4D0", Offset = "0x259CAD0", VA = "0x18259E4D0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x259E920", Offset = "0x259CF20", VA = "0x18259E920", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x259E870", Offset = "0x259CE70", VA = "0x18259E870", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x259EB60", Offset = "0x259D160", VA = "0x18259EB60", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x259EEB0", Offset = "0x259D4B0", VA = "0x18259EEB0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x259EF30", Offset = "0x259D530", VA = "0x18259EF30", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x259EFA0", Offset = "0x259D5A0", VA = "0x18259EFA0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x259F190", Offset = "0x259D790", VA = "0x18259F190", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x259F020", Offset = "0x259D620", VA = "0x18259F020", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x259EBD0", Offset = "0x259D1D0", VA = "0x18259EBD0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x259E9B0", Offset = "0x259CFB0", VA = "0x18259E9B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x259EEF0", Offset = "0x259D4F0", VA = "0x18259EEF0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x259EDA0", Offset = "0x259D3A0", VA = "0x18259EDA0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x259F0F0", Offset = "0x259D6F0", VA = "0x18259F0F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
