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

[Token(Token = "0x20000DF")]
internal sealed class UInt32Storage : DataStorage
{
	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint s_defaultValue;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x50")]
	private uint[] _values;

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x465C9A0", Offset = "0x465C9A0", VA = "0x465C9A0")]
	public UInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x465CA80", Offset = "0x465CA80", VA = "0x465CA80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x465D5C0", Offset = "0x465D5C0", VA = "0x465D5C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x465D670", Offset = "0x465D670", VA = "0x465D670", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x465D760", Offset = "0x465D760", VA = "0x465D760", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x465D890", Offset = "0x465D890", VA = "0x465D890", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x465D8E0", Offset = "0x465D8E0", VA = "0x465D8E0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x465D990", Offset = "0x465D990", VA = "0x465D990", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x465DB00", Offset = "0x465DB00", VA = "0x465DB00", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x465DBC0", Offset = "0x465DBC0", VA = "0x465DBC0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x465DC30", Offset = "0x465DC30", VA = "0x465DC30", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x465DCC0", Offset = "0x465DCC0", VA = "0x465DCC0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x465DD00", Offset = "0x465DD00", VA = "0x465DD00", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x465DDF0", Offset = "0x465DDF0", VA = "0x465DDF0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
