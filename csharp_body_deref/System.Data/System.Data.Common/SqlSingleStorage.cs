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
	[Address(RVA = "0x5F4E200", Offset = "0x5F4D200", VA = "0x5F4E200")]
	public SqlSingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x5F4E320", Offset = "0x5F4D320", VA = "0x5F4E320", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x5F4F1A0", Offset = "0x5F4E1A0", VA = "0x5F4F1A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x5F4F230", Offset = "0x5F4E230", VA = "0x5F4F230", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x5F4F2E0", Offset = "0x5F4E2E0", VA = "0x5F4F2E0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x5F4F340", Offset = "0x5F4E340", VA = "0x5F4F340", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x5F4F380", Offset = "0x5F4E380", VA = "0x5F4F380", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x5F4F3F0", Offset = "0x5F4E3F0", VA = "0x5F4F3F0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x5F4F460", Offset = "0x5F4E460", VA = "0x5F4F460", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x5F4F4A0", Offset = "0x5F4E4A0", VA = "0x5F4F4A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x5F4F550", Offset = "0x5F4E550", VA = "0x5F4F550", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x5F4F7E0", Offset = "0x5F4E7E0", VA = "0x5F4F7E0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x5F4FA40", Offset = "0x5F4EA40", VA = "0x5F4FA40", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x5F4FA80", Offset = "0x5F4EA80", VA = "0x5F4FA80", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x5F4FB80", Offset = "0x5F4EB80", VA = "0x5F4FB80", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
