// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlGuidStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DB")]
internal sealed class SqlGuidStorage : DataStorage
{
	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x50")]
	private SqlGuid[] _values;

	[Token(Token = "0x6000C9C")]
	[Address(RVA = "0x25A1570", Offset = "0x259FB70", VA = "0x1825A1570")]
	public SqlGuidStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x25A0A70", Offset = "0x259F070", VA = "0x1825A0A70", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x25A0CD0", Offset = "0x259F2D0", VA = "0x1825A0CD0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x25A0C10", Offset = "0x259F210", VA = "0x1825A0C10", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x25A0F10", Offset = "0x259F510", VA = "0x1825A0F10", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x2590770", Offset = "0x258ED70", VA = "0x182590770", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x25A12C0", Offset = "0x259F8C0", VA = "0x1825A12C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x25A1330", Offset = "0x259F930", VA = "0x1825A1330", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA4")]
	[Address(RVA = "0x25A1520", Offset = "0x259FB20", VA = "0x1825A1520", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x25A13B0", Offset = "0x259F9B0", VA = "0x1825A13B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x25A0F80", Offset = "0x259F580", VA = "0x1825A0F80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x25A0D60", Offset = "0x259F360", VA = "0x1825A0D60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x25A1280", Offset = "0x259F880", VA = "0x1825A1280", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x25A1160", Offset = "0x259F760", VA = "0x1825A1160", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x25A1480", Offset = "0x259FA80", VA = "0x1825A1480", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
