// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlStringStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E1")]
internal sealed class SqlStringStorage : DataStorage
{
	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x50")]
	private SqlString[] _values;

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x5F4FC20", Offset = "0x5F4EC20", VA = "0x5F4FC20")]
	public SqlStringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x5F4FD70", Offset = "0x5F4ED70", VA = "0x5F4FD70", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x5F50180", Offset = "0x5F4F180", VA = "0x5F50180", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x5F50210", Offset = "0x5F4F210", VA = "0x5F50210")]
	public int Compare(SqlString valueNo1, SqlString valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x5F50330", Offset = "0x5F4F330", VA = "0x5F50330", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x5F503F0", Offset = "0x5F4F3F0", VA = "0x5F503F0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x5F50470", Offset = "0x5F4F470", VA = "0x5F50470", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x5F504D0", Offset = "0x5F4F4D0", VA = "0x5F504D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x5F50550", Offset = "0x5F4F550", VA = "0x5F50550", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x5F50600", Offset = "0x5F4F600", VA = "0x5F50600", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x5F50670", Offset = "0x5F4F670", VA = "0x5F50670", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x5F506D0", Offset = "0x5F4F6D0", VA = "0x5F506D0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x5F50780", Offset = "0x5F4F780", VA = "0x5F50780", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x5F50A20", Offset = "0x5F4FA20", VA = "0x5F50A20", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x5F50C80", Offset = "0x5F4FC80", VA = "0x5F50C80", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x5F50CC0", Offset = "0x5F4FCC0", VA = "0x5F50CC0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x5F50DF0", Offset = "0x5F4FDF0", VA = "0x5F50DF0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
