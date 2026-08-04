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

[Token(Token = "0x20000B9")]
internal sealed class BooleanStorage : DataStorage
{
	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x50")]
	private bool[] _values;

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4621540", Offset = "0x4621540", VA = "0x4621540")]
	internal BooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x46216F0", Offset = "0x46216F0", VA = "0x46216F0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4621BD0", Offset = "0x4621BD0", VA = "0x4621BD0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4621D00", Offset = "0x4621D00", VA = "0x4621D00", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x4621DE0", Offset = "0x4621DE0", VA = "0x4621DE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x4621F40", Offset = "0x4621F40", VA = "0x4621F40", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x4621FF0", Offset = "0x4621FF0", VA = "0x4621FF0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x4622090", Offset = "0x4622090", VA = "0x4622090", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4622240", Offset = "0x4622240", VA = "0x4622240", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x46223E0", Offset = "0x46223E0", VA = "0x46223E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4622450", Offset = "0x4622450", VA = "0x4622450", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x46224E0", Offset = "0x46224E0", VA = "0x46224E0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x4622520", Offset = "0x4622520", VA = "0x4622520", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4622620", Offset = "0x4622620", VA = "0x4622620", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
