// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.BooleanStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C6")]
internal sealed class BooleanStorage : DataStorage
{
	[Token(Token = "0x4000445")]
	[FieldOffset(Offset = "0x50")]
	private bool[] _values;

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x5F28880", Offset = "0x5F27880", VA = "0x5F28880")]
	internal BooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x5F289A0", Offset = "0x5F279A0", VA = "0x5F289A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x5F28CE0", Offset = "0x5F27CE0", VA = "0x5F28CE0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x5F28DA0", Offset = "0x5F27DA0", VA = "0x5F28DA0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x5F28E80", Offset = "0x5F27E80", VA = "0x5F28E80", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x5F28FC0", Offset = "0x5F27FC0", VA = "0x5F28FC0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x5F29030", Offset = "0x5F28030", VA = "0x5F29030", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x5F290A0", Offset = "0x5F280A0", VA = "0x5F290A0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x5F29230", Offset = "0x5F28230", VA = "0x5F29230", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x5F29350", Offset = "0x5F28350", VA = "0x5F29350", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x5F293C0", Offset = "0x5F283C0", VA = "0x5F293C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x5F29450", Offset = "0x5F28450", VA = "0x5F29450", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x5F29490", Offset = "0x5F28490", VA = "0x5F29490", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x5F29590", Offset = "0x5F28590", VA = "0x5F29590", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
