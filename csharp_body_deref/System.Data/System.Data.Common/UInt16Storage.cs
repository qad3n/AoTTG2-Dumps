// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E8")]
internal sealed class UInt16Storage : DataStorage
{
	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ushort s_defaultValue;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x50")]
	private ushort[] _values;

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x25AE810", Offset = "0x25ACE10", VA = "0x1825AE810")]
	public UInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x25AD7A0", Offset = "0x25ABDA0", VA = "0x1825AD7A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x25AE040", Offset = "0x25AC640", VA = "0x1825AE040", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x25ADF20", Offset = "0x25AC520", VA = "0x1825ADF20", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x25AE180", Offset = "0x25AC780", VA = "0x1825AE180", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x25AE3C0", Offset = "0x25AC9C0", VA = "0x1825AE3C0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x25AE470", Offset = "0x25ACA70", VA = "0x1825AE470", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x25AE6D0", Offset = "0x25ACCD0", VA = "0x1825AE6D0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x25AE530", Offset = "0x25ACB30", VA = "0x1825AE530", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x25AE260", Offset = "0x25AC860", VA = "0x1825AE260", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x25AE100", Offset = "0x25AC700", VA = "0x1825AE100", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x25AE430", Offset = "0x25ACA30", VA = "0x1825AE430", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x25AE2C0", Offset = "0x25AC8C0", VA = "0x1825AE2C0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x25AE610", Offset = "0x25ACC10", VA = "0x1825AE610", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
