// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C8")]
internal sealed class SByteStorage : DataStorage
{
	[Token(Token = "0x4000477")]
	[FieldOffset(Offset = "0x50")]
	private sbyte[] _values;

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x4625770", Offset = "0x4625770", VA = "0x4625770")]
	public SByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x4637260", Offset = "0x4637260", VA = "0x4637260", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x4637D20", Offset = "0x4637D20", VA = "0x4637D20", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x4637E00", Offset = "0x4637E00", VA = "0x4637E00", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x4637EC0", Offset = "0x4637EC0", VA = "0x4637EC0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x4638000", Offset = "0x4638000", VA = "0x4638000", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x4638070", Offset = "0x4638070", VA = "0x4638070", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x4638100", Offset = "0x4638100", VA = "0x4638100", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4638290", Offset = "0x4638290", VA = "0x4638290", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x46383B0", Offset = "0x46383B0", VA = "0x46383B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x4638420", Offset = "0x4638420", VA = "0x4638420", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x46384B0", Offset = "0x46384B0", VA = "0x46384B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x46384F0", Offset = "0x46384F0", VA = "0x46384F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x46385F0", Offset = "0x46385F0", VA = "0x46385F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
