// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBinaryStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D4")]
internal sealed class SqlBinaryStorage : DataStorage
{
	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x50")]
	private SqlBinary[] _values;

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x2590AB0", Offset = "0x258F0B0", VA = "0x182590AB0")]
	public SqlBinaryStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x258FF60", Offset = "0x258E560", VA = "0x18258FF60", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x25901C0", Offset = "0x258E7C0", VA = "0x1825901C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x2590100", Offset = "0x258E700", VA = "0x182590100", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x2590400", Offset = "0x258EA00", VA = "0x182590400", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x2590770", Offset = "0x258ED70", VA = "0x182590770", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x2590800", Offset = "0x258EE00", VA = "0x182590800", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x2590870", Offset = "0x258EE70", VA = "0x182590870", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x2590A60", Offset = "0x258F060", VA = "0x182590A60", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x25908F0", Offset = "0x258EEF0", VA = "0x1825908F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x2590470", Offset = "0x258EA70", VA = "0x182590470", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x2590250", Offset = "0x258E850", VA = "0x182590250", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x25907C0", Offset = "0x258EDC0", VA = "0x1825907C0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x2590650", Offset = "0x258EC50", VA = "0x182590650", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x25909C0", Offset = "0x258EFC0", VA = "0x1825909C0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
