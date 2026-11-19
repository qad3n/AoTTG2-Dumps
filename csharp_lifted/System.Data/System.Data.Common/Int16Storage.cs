// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CF")]
internal sealed class Int16Storage : DataStorage
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x50")]
	private short[] _values;

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x5F2C2F0", Offset = "0x5F2B2F0", VA = "0x5F2C2F0")]
	internal Int16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x5F33C80", Offset = "0x5F32C80", VA = "0x5F33C80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x5F34560", Offset = "0x5F33560", VA = "0x5F34560", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x5F34600", Offset = "0x5F33600", VA = "0x5F34600", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x5F346C0", Offset = "0x5F336C0", VA = "0x5F346C0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x5F34800", Offset = "0x5F33800", VA = "0x5F34800", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x5F34870", Offset = "0x5F33870", VA = "0x5F34870", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x5F348E0", Offset = "0x5F338E0", VA = "0x5F348E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x5F34A70", Offset = "0x5F33A70", VA = "0x5F34A70", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x5F34B90", Offset = "0x5F33B90", VA = "0x5F34B90", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x5F34C00", Offset = "0x5F33C00", VA = "0x5F34C00", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x5F34C90", Offset = "0x5F33C90", VA = "0x5F34C90", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x5F34CD0", Offset = "0x5F33CD0", VA = "0x5F34CD0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x5F34DD0", Offset = "0x5F33DD0", VA = "0x5F34DD0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
