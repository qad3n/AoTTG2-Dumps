// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlSingleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E0")]
internal sealed class SqlSingleStorage : DataStorage
{
	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x50")]
	private SqlSingle[] _values;

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x25A8CA0", Offset = "0x25A72A0", VA = "0x1825A8CA0")]
	public SqlSingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x25A7690", Offset = "0x25A5C90", VA = "0x1825A7690", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x25A8410", Offset = "0x25A6A10", VA = "0x1825A8410", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x25A8350", Offset = "0x25A6950", VA = "0x1825A8350", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x25A8650", Offset = "0x25A6C50", VA = "0x1825A8650", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x25A4170", Offset = "0x25A2770", VA = "0x1825A4170", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x25A89F0", Offset = "0x25A6FF0", VA = "0x1825A89F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x25A8A60", Offset = "0x25A7060", VA = "0x1825A8A60", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x25A8C50", Offset = "0x25A7250", VA = "0x1825A8C50", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x25A8AE0", Offset = "0x25A70E0", VA = "0x1825A8AE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x25A86C0", Offset = "0x25A6CC0", VA = "0x1825A86C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x25A84A0", Offset = "0x25A6AA0", VA = "0x1825A84A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x25A89B0", Offset = "0x25A6FB0", VA = "0x1825A89B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x25A88A0", Offset = "0x25A6EA0", VA = "0x1825A88A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x25A8BB0", Offset = "0x25A71B0", VA = "0x1825A8BB0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
