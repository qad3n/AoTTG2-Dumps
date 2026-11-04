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

[Token(Token = "0x20000E3")]
internal sealed class SingleStorage : DataStorage
{
	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x50")]
	private float[] _values;

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x259E410", Offset = "0x259CA10", VA = "0x18259E410")]
	public SingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x259D540", Offset = "0x259BB40", VA = "0x18259D540", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x259DCD0", Offset = "0x259C2D0", VA = "0x18259DCD0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x259DBF0", Offset = "0x259C1F0", VA = "0x18259DBF0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x259DDE0", Offset = "0x259C3E0", VA = "0x18259DDE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x259E050", Offset = "0x259C650", VA = "0x18259E050", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x259E0F0", Offset = "0x259C6F0", VA = "0x18259E0F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x259E2F0", Offset = "0x259C8F0", VA = "0x18259E2F0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x259E150", Offset = "0x259C750", VA = "0x18259E150", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x259DED0", Offset = "0x259C4D0", VA = "0x18259DED0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x259DD60", Offset = "0x259C360", VA = "0x18259DD60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x259E0B0", Offset = "0x259C6B0", VA = "0x18259E0B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x259DF40", Offset = "0x259C540", VA = "0x18259DF40", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x259E230", Offset = "0x259C830", VA = "0x18259E230", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
