// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.BigIntegerStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Numerics;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000B8")]
internal sealed class BigIntegerStorage : DataStorage
{
	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x50")]
	private BigInteger[] _values;

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x461FDF0", Offset = "0x461FDF0", VA = "0x461FDF0")]
	internal BigIntegerStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x461FF40", Offset = "0x461FF40", VA = "0x461FF40", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x461FF70", Offset = "0x461FF70", VA = "0x461FF70", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x46200A0", Offset = "0x46200A0", VA = "0x46200A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x46201C0", Offset = "0x46201C0", VA = "0x46201C0")]
	internal static BigInteger ConvertToBigInteger(object value, IFormatProvider formatProvider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x46207C0", Offset = "0x46207C0", VA = "0x46207C0")]
	internal static object ConvertFromBigInteger(BigInteger value, Type type, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x4620DF0", Offset = "0x4620DF0", VA = "0x4620DF0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x4620E70", Offset = "0x4620E70", VA = "0x4620E70", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4620EE0", Offset = "0x4620EE0", VA = "0x4620EE0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x4620FA0", Offset = "0x4620FA0", VA = "0x4620FA0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x4621100", Offset = "0x4621100", VA = "0x4621100", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x46211C0", Offset = "0x46211C0", VA = "0x46211C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x4621260", Offset = "0x4621260", VA = "0x4621260", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4621330", Offset = "0x4621330", VA = "0x4621330", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4621370", Offset = "0x4621370", VA = "0x4621370", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4621490", Offset = "0x4621490", VA = "0x4621490", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
