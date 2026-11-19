// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt32Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E9")]
internal sealed class UInt32Storage : DataStorage
{
	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_defaultValue;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0x50")]
	private uint[] _values;

	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x5F57B90", Offset = "0x5F56B90", VA = "0x5F57B90")]
	public UInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x5F57C70", Offset = "0x5F56C70", VA = "0x5F57C70", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x5F584F0", Offset = "0x5F574F0", VA = "0x5F584F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x5F585A0", Offset = "0x5F575A0", VA = "0x5F585A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x5F58690", Offset = "0x5F57690", VA = "0x5F58690", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x5F587C0", Offset = "0x5F577C0", VA = "0x5F587C0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x5F58810", Offset = "0x5F57810", VA = "0x5F58810", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x5F588B0", Offset = "0x5F578B0", VA = "0x5F588B0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x5F58A40", Offset = "0x5F57A40", VA = "0x5F58A40", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x5F58B00", Offset = "0x5F57B00", VA = "0x5F58B00", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x5F58B70", Offset = "0x5F57B70", VA = "0x5F58B70", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x5F58C00", Offset = "0x5F57C00", VA = "0x5F58C00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x5F58C40", Offset = "0x5F57C40", VA = "0x5F58C40", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x5F58D30", Offset = "0x5F57D30", VA = "0x5F58D30", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
