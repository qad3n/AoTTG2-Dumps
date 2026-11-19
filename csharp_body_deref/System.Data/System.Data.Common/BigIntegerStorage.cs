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

[Token(Token = "0x20000C5")]
internal sealed class BigIntegerStorage : DataStorage
{
	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x50")]
	private BigInteger[] _values;

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x5F26DC0", Offset = "0x5F25DC0", VA = "0x5F26DC0")]
	internal BigIntegerStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x5F27020", Offset = "0x5F26020", VA = "0x5F27020", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x5F27050", Offset = "0x5F26050", VA = "0x5F27050", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x5F27210", Offset = "0x5F26210", VA = "0x5F27210", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x5F27360", Offset = "0x5F26360", VA = "0x5F27360")]
	internal static BigInteger ConvertToBigInteger(object value, IFormatProvider formatProvider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x5F27910", Offset = "0x5F26910", VA = "0x5F27910")]
	internal static object ConvertFromBigInteger(BigInteger value, Type type, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x5F27F40", Offset = "0x5F26F40", VA = "0x5F27F40", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x5F27FF0", Offset = "0x5F26FF0", VA = "0x5F27FF0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x5F280C0", Offset = "0x5F270C0", VA = "0x5F280C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x5F281C0", Offset = "0x5F271C0", VA = "0x5F281C0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x5F28350", Offset = "0x5F27350", VA = "0x5F28350", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x5F284F0", Offset = "0x5F274F0", VA = "0x5F284F0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x5F28590", Offset = "0x5F27590", VA = "0x5F28590", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x5F28660", Offset = "0x5F27660", VA = "0x5F28660", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x5F286A0", Offset = "0x5F276A0", VA = "0x5F286A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x5F287D0", Offset = "0x5F277D0", VA = "0x5F287D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
