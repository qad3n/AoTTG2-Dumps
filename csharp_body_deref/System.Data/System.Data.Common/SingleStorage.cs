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
	[Address(RVA = "0x5F51EA0", Offset = "0x5F50EA0", VA = "0x5F51EA0")]
	public SingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x5F51F60", Offset = "0x5F50F60", VA = "0x5F51F60", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x5F52720", Offset = "0x5F51720", VA = "0x5F52720", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x5F52790", Offset = "0x5F51790", VA = "0x5F52790", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x5F52860", Offset = "0x5F51860", VA = "0x5F52860", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x5F52990", Offset = "0x5F51990", VA = "0x5F52990", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x5F529E0", Offset = "0x5F519E0", VA = "0x5F529E0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x5F52A40", Offset = "0x5F51A40", VA = "0x5F52A40", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x5F52BA0", Offset = "0x5F51BA0", VA = "0x5F52BA0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x5F52C60", Offset = "0x5F51C60", VA = "0x5F52C60", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x5F52CD0", Offset = "0x5F51CD0", VA = "0x5F52CD0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x5F52D60", Offset = "0x5F51D60", VA = "0x5F52D60", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x5F52DA0", Offset = "0x5F51DA0", VA = "0x5F52DA0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x5F52EA0", Offset = "0x5F51EA0", VA = "0x5F52EA0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
