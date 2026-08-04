// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CB")]
internal sealed class SqlByteStorage : DataStorage
{
	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x50")]
	private SqlByte[] _values;

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x4626270", Offset = "0x4626270", VA = "0x4626270")]
	public SqlByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x463DE60", Offset = "0x463DE60", VA = "0x463DE60", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x463F480", Offset = "0x463F480", VA = "0x463F480", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x463F510", Offset = "0x463F510", VA = "0x463F510", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x463F5C0", Offset = "0x463F5C0", VA = "0x463F5C0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x463F620", Offset = "0x463F620", VA = "0x463F620", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x463F660", Offset = "0x463F660", VA = "0x463F660", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x463F6D0", Offset = "0x463F6D0", VA = "0x463F6D0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x463F740", Offset = "0x463F740", VA = "0x463F740", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x463F780", Offset = "0x463F780", VA = "0x463F780", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x463F830", Offset = "0x463F830", VA = "0x463F830", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x463FB30", Offset = "0x463FB30", VA = "0x463FB30", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x463FE10", Offset = "0x463FE10", VA = "0x463FE10", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x463FE50", Offset = "0x463FE50", VA = "0x463FE50", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x463FF50", Offset = "0x463FF50", VA = "0x463FF50", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
