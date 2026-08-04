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

[Token(Token = "0x20000D2")]
internal sealed class SqlInt16Storage : DataStorage
{
	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt16[] _values;

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x4648580", Offset = "0x4648580", VA = "0x4648580")]
	public SqlInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x46486A0", Offset = "0x46486A0", VA = "0x46486A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x4649CA0", Offset = "0x4649CA0", VA = "0x4649CA0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x4649D30", Offset = "0x4649D30", VA = "0x4649D30", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x4649DD0", Offset = "0x4649DD0", VA = "0x4649DD0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x4649E40", Offset = "0x4649E40", VA = "0x4649E40", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x4649E70", Offset = "0x4649E70", VA = "0x4649E70", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x4649EE0", Offset = "0x4649EE0", VA = "0x4649EE0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x4649F50", Offset = "0x4649F50", VA = "0x4649F50", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x4649F90", Offset = "0x4649F90", VA = "0x4649F90", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x464A040", Offset = "0x464A040", VA = "0x464A040", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x464A320", Offset = "0x464A320", VA = "0x464A320", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x464A5F0", Offset = "0x464A5F0", VA = "0x464A5F0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x464A630", Offset = "0x464A630", VA = "0x464A630", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x464A730", Offset = "0x464A730", VA = "0x464A730", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
