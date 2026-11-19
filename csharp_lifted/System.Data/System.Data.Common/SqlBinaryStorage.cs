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
	[Address(RVA = "0x5F2CBB0", Offset = "0x5F2BBB0", VA = "0x5F2CBB0")]
	public SqlBinaryStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x5F3DFE0", Offset = "0x5F3CFE0", VA = "0x5F3DFE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x5F3E1F0", Offset = "0x5F3D1F0", VA = "0x5F3E1F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x5F3E280", Offset = "0x5F3D280", VA = "0x5F3E280", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x5F3E330", Offset = "0x5F3D330", VA = "0x5F3E330", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x5F3E390", Offset = "0x5F3D390", VA = "0x5F3E390", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x5F3E3D0", Offset = "0x5F3D3D0", VA = "0x5F3E3D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x5F3E440", Offset = "0x5F3D440", VA = "0x5F3E440", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x5F3E4B0", Offset = "0x5F3D4B0", VA = "0x5F3E4B0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x5F3E500", Offset = "0x5F3D500", VA = "0x5F3E500", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x5F3E5B0", Offset = "0x5F3D5B0", VA = "0x5F3E5B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x5F3E840", Offset = "0x5F3D840", VA = "0x5F3E840", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x5F3EAA0", Offset = "0x5F3DAA0", VA = "0x5F3EAA0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x5F3EAE0", Offset = "0x5F3DAE0", VA = "0x5F3EAE0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x5F3EBF0", Offset = "0x5F3DBF0", VA = "0x5F3EBF0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
