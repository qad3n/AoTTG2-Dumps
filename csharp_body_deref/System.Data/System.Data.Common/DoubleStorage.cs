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

[Token(Token = "0x20000CE")]
internal sealed class DoubleStorage : DataStorage
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x50")]
	private double[] _values;

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x258BE10", Offset = "0x258A410", VA = "0x18258BE10")]
	internal DoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x258AFB0", Offset = "0x25895B0", VA = "0x18258AFB0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x258B6F0", Offset = "0x2589CF0", VA = "0x18258B6F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x258B610", Offset = "0x2589C10", VA = "0x18258B610", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x258B800", Offset = "0x2589E00", VA = "0x18258B800", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x2589060", Offset = "0x2587660", VA = "0x182589060", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x258BAB0", Offset = "0x258A0B0", VA = "0x18258BAB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x258BCD0", Offset = "0x258A2D0", VA = "0x18258BCD0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x258BB30", Offset = "0x258A130", VA = "0x18258BB30", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x258B8F0", Offset = "0x2589EF0", VA = "0x18258B8F0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x258B780", Offset = "0x2589D80", VA = "0x18258B780", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x258BA70", Offset = "0x258A070", VA = "0x18258BA70", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x258B960", Offset = "0x2589F60", VA = "0x18258B960", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x258BC10", Offset = "0x258A210", VA = "0x18258BC10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
