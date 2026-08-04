// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBooleanStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D8")]
internal sealed class SqlBooleanStorage : DataStorage
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x50")]
	private SqlBoolean[] _values;

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4654DE0", Offset = "0x4654DE0", VA = "0x4654DE0")]
	public SqlBooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x4654F00", Offset = "0x4654F00", VA = "0x4654F00", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4655500", Offset = "0x4655500", VA = "0x4655500", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4655590", Offset = "0x4655590", VA = "0x4655590", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4655640", Offset = "0x4655640", VA = "0x4655640", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x46556A0", Offset = "0x46556A0", VA = "0x46556A0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x46556D0", Offset = "0x46556D0", VA = "0x46556D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4655740", Offset = "0x4655740", VA = "0x4655740", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x46557B0", Offset = "0x46557B0", VA = "0x46557B0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x46557F0", Offset = "0x46557F0", VA = "0x46557F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x46558A0", Offset = "0x46558A0", VA = "0x46558A0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4655B70", Offset = "0x4655B70", VA = "0x4655B70", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x4655E40", Offset = "0x4655E40", VA = "0x4655E40", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x4655E80", Offset = "0x4655E80", VA = "0x4655E80", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x4655F80", Offset = "0x4655F80", VA = "0x4655F80", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
