// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CD")]
internal sealed class DecimalStorage : DataStorage
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x0")]
	private static readonly decimal s_defaultValue;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private decimal[] _values;

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x258AEC0", Offset = "0x25894C0", VA = "0x18258AEC0")]
	internal DecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x2589A20", Offset = "0x2588020", VA = "0x182589A20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x258A580", Offset = "0x2588B80", VA = "0x18258A580", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x258A3E0", Offset = "0x25889E0", VA = "0x18258A3E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x258A7C0", Offset = "0x2588DC0", VA = "0x18258A7C0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x2587F20", Offset = "0x2586520", VA = "0x182587F20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x258AAA0", Offset = "0x25890A0", VA = "0x18258AAA0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x258ACE0", Offset = "0x25892E0", VA = "0x18258ACE0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x258AB40", Offset = "0x2589140", VA = "0x18258AB40", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x258A8D0", Offset = "0x2588ED0", VA = "0x18258A8D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x258A730", Offset = "0x2588D30", VA = "0x18258A730", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x258AA60", Offset = "0x2589060", VA = "0x18258AA60", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x258A950", Offset = "0x2588F50", VA = "0x18258A950", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x258AC20", Offset = "0x2589220", VA = "0x18258AC20", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
