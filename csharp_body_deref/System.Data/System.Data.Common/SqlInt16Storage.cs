// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlInt16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DC")]
internal sealed class SqlInt16Storage : DataStorage
{
	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt16[] _values;

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x25A2CF0", Offset = "0x25A12F0", VA = "0x1825A2CF0")]
	public SqlInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x25A16A0", Offset = "0x259FCA0", VA = "0x1825A16A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x25A2440", Offset = "0x25A0A40", VA = "0x1825A2440", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x25A2380", Offset = "0x25A0980", VA = "0x1825A2380", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x25A2670", Offset = "0x25A0C70", VA = "0x1825A2670", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x25A29D0", Offset = "0x25A0FD0", VA = "0x1825A29D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x25A2A50", Offset = "0x25A1050", VA = "0x1825A2A50", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x25A2AC0", Offset = "0x25A10C0", VA = "0x1825A2AC0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x25A2CB0", Offset = "0x25A12B0", VA = "0x1825A2CB0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x25A2B40", Offset = "0x25A1140", VA = "0x1825A2B40", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x25A26E0", Offset = "0x25A0CE0", VA = "0x1825A26E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x25A24C0", Offset = "0x25A0AC0", VA = "0x1825A24C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x25A2A10", Offset = "0x25A1010", VA = "0x1825A2A10", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x25A28C0", Offset = "0x25A0EC0", VA = "0x1825A28C0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x25A2C10", Offset = "0x25A1210", VA = "0x1825A2C10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
