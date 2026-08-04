// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CF")]
internal sealed class SqlDecimalStorage : DataStorage
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x50")]
	private SqlDecimal[] _values;

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x4642CE0", Offset = "0x4642CE0", VA = "0x4642CE0")]
	public SqlDecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x4642E20", Offset = "0x4642E20", VA = "0x4642E20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x46446B0", Offset = "0x46446B0", VA = "0x46446B0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x4644760", Offset = "0x4644760", VA = "0x4644760", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x4644830", Offset = "0x4644830", VA = "0x4644830", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x46448B0", Offset = "0x46448B0", VA = "0x46448B0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4644910", Offset = "0x4644910", VA = "0x4644910", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4644990", Offset = "0x4644990", VA = "0x4644990", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4644A00", Offset = "0x4644A00", VA = "0x4644A00", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x4644A70", Offset = "0x4644A70", VA = "0x4644A70", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x4644B20", Offset = "0x4644B20", VA = "0x4644B20", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x4644E20", Offset = "0x4644E20", VA = "0x4644E20", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x46450F0", Offset = "0x46450F0", VA = "0x46450F0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x4645130", Offset = "0x4645130", VA = "0x4645130", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x4645260", Offset = "0x4645260", VA = "0x4645260", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
