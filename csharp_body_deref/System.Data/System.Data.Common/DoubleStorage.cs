// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DoubleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C1")]
internal sealed class DoubleStorage : DataStorage
{
	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x50")]
	private double[] _values;

	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4625BF0", Offset = "0x4625BF0", VA = "0x4625BF0")]
	internal DoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x462C930", Offset = "0x462C930", VA = "0x462C930", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x462D3A0", Offset = "0x462D3A0", VA = "0x462D3A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x462D460", Offset = "0x462D460", VA = "0x462D460", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x462D540", Offset = "0x462D540", VA = "0x462D540", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x462D670", Offset = "0x462D670", VA = "0x462D670", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x462D6E0", Offset = "0x462D6E0", VA = "0x462D6E0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x462D760", Offset = "0x462D760", VA = "0x462D760", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x462D8F0", Offset = "0x462D8F0", VA = "0x462D8F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x462DA10", Offset = "0x462DA10", VA = "0x462DA10", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x462DA80", Offset = "0x462DA80", VA = "0x462DA80", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x462DB20", Offset = "0x462DB20", VA = "0x462DB20", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x462DB60", Offset = "0x462DB60", VA = "0x462DB60", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x462DC60", Offset = "0x462DC60", VA = "0x462DC60", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
