// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlInt32Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DD")]
internal sealed class SqlInt32Storage : DataStorage
{
	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt32[] _values;

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x5F48D00", Offset = "0x5F47D00", VA = "0x5F48D00")]
	public SqlInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x5F48E20", Offset = "0x5F47E20", VA = "0x5F48E20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x5F49CD0", Offset = "0x5F48CD0", VA = "0x5F49CD0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x5F49D60", Offset = "0x5F48D60", VA = "0x5F49D60", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x5F49E10", Offset = "0x5F48E10", VA = "0x5F49E10", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x5F49E70", Offset = "0x5F48E70", VA = "0x5F49E70", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x5F49EB0", Offset = "0x5F48EB0", VA = "0x5F49EB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x5F49F20", Offset = "0x5F48F20", VA = "0x5F49F20", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x5F49F90", Offset = "0x5F48F90", VA = "0x5F49F90", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x5F49FD0", Offset = "0x5F48FD0", VA = "0x5F49FD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x5F4A080", Offset = "0x5F49080", VA = "0x5F4A080", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x5F4A310", Offset = "0x5F49310", VA = "0x5F4A310", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x5F4A570", Offset = "0x5F49570", VA = "0x5F4A570", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x5F4A5B0", Offset = "0x5F495B0", VA = "0x5F4A5B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x5F4A6B0", Offset = "0x5F496B0", VA = "0x5F4A6B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
