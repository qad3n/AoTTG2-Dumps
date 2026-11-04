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
	[Address(RVA = "0x2581F80", Offset = "0x2580580", VA = "0x182581F80")]
	internal BooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x2581450", Offset = "0x257FA50", VA = "0x182581450", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x25817E0", Offset = "0x257FDE0", VA = "0x1825817E0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x25816F0", Offset = "0x257FCF0", VA = "0x1825816F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x2581910", Offset = "0x257FF10", VA = "0x182581910", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x2581B70", Offset = "0x2580170", VA = "0x182581B70", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x2581C40", Offset = "0x2580240", VA = "0x182581C40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x2581E50", Offset = "0x2580450", VA = "0x182581E50", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x2581CB0", Offset = "0x25802B0", VA = "0x182581CB0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x2581A00", Offset = "0x2580000", VA = "0x182581A00", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x2581890", Offset = "0x257FE90", VA = "0x182581890", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x2581C00", Offset = "0x2580200", VA = "0x182581C00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x2581A60", Offset = "0x2580060", VA = "0x182581A60", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x2581D90", Offset = "0x2580390", VA = "0x182581D90", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
