// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlInt64Storage
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
internal sealed class SqlInt64Storage : DataStorage
{
	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt64[] _values;

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x464CA50", Offset = "0x464CA50", VA = "0x464CA50")]
	public SqlInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x464CB70", Offset = "0x464CB70", VA = "0x464CB70", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x464E4A0", Offset = "0x464E4A0", VA = "0x464E4A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x464E540", Offset = "0x464E540", VA = "0x464E540", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x464E5F0", Offset = "0x464E5F0", VA = "0x464E5F0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x464E660", Offset = "0x464E660", VA = "0x464E660", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x464E6C0", Offset = "0x464E6C0", VA = "0x464E6C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x464E750", Offset = "0x464E750", VA = "0x464E750", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x464E7C0", Offset = "0x464E7C0", VA = "0x464E7C0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x464E810", Offset = "0x464E810", VA = "0x464E810", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CB4")]
	[Address(RVA = "0x464E8C0", Offset = "0x464E8C0", VA = "0x464E8C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CB5")]
	[Address(RVA = "0x464EB90", Offset = "0x464EB90", VA = "0x464EB90", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CB6")]
	[Address(RVA = "0x464EE60", Offset = "0x464EE60", VA = "0x464EE60", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x464EEA0", Offset = "0x464EEA0", VA = "0x464EEA0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x464EFD0", Offset = "0x464EFD0", VA = "0x464EFD0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
