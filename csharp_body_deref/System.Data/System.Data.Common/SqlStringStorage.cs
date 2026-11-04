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
	[Address(RVA = "0x25A9DD0", Offset = "0x25A83D0", VA = "0x1825A9DD0")]
	public SqlStringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x25A8DD0", Offset = "0x25A73D0", VA = "0x1825A8DD0", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x25A91E0", Offset = "0x25A77E0", VA = "0x1825A91E0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x25A9260", Offset = "0x25A7860", VA = "0x1825A9260")]
	public int Compare(SqlString valueNo1, SqlString valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x25A90E0", Offset = "0x25A76E0", VA = "0x1825A90E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x25A9570", Offset = "0x25A7B70", VA = "0x1825A9570", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x25A9950", Offset = "0x25A7F50", VA = "0x1825A9950", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x25A9AE0", Offset = "0x25A80E0", VA = "0x1825A9AE0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x25A9A00", Offset = "0x25A8000", VA = "0x1825A9A00", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x25A9B60", Offset = "0x25A8160", VA = "0x1825A9B60", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x25A9D50", Offset = "0x25A8350", VA = "0x1825A9D50", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x25A9BE0", Offset = "0x25A81E0", VA = "0x1825A9BE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x25A95F0", Offset = "0x25A7BF0", VA = "0x1825A95F0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x25A93C0", Offset = "0x25A79C0", VA = "0x1825A93C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x25A99C0", Offset = "0x25A7FC0", VA = "0x1825A99C0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x25A9800", Offset = "0x25A7E00", VA = "0x1825A9800", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x25A9CB0", Offset = "0x25A82B0", VA = "0x1825A9CB0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
