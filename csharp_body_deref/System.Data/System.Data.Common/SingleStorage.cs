// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SingleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D9")]
internal sealed class SingleStorage : DataStorage
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x50")]
	private float[] _values;

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x4656020", Offset = "0x4656020", VA = "0x4656020")]
	public SingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x46560E0", Offset = "0x46560E0", VA = "0x46560E0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x4656B50", Offset = "0x4656B50", VA = "0x4656B50", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x4656BD0", Offset = "0x4656BD0", VA = "0x4656BD0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x4656CA0", Offset = "0x4656CA0", VA = "0x4656CA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x4656DD0", Offset = "0x4656DD0", VA = "0x4656DD0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4656E20", Offset = "0x4656E20", VA = "0x4656E20", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4656E80", Offset = "0x4656E80", VA = "0x4656E80", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4656FD0", Offset = "0x4656FD0", VA = "0x4656FD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4657090", Offset = "0x4657090", VA = "0x4657090", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4657100", Offset = "0x4657100", VA = "0x4657100", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4657190", Offset = "0x4657190", VA = "0x4657190", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x46571D0", Offset = "0x46571D0", VA = "0x46571D0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x46572D0", Offset = "0x46572D0", VA = "0x46572D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
