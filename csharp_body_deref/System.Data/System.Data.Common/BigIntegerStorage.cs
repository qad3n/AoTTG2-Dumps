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
	[Address(RVA = "0x2581330", Offset = "0x257F930", VA = "0x182581330")]
	internal BigIntegerStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x257FA80", Offset = "0x257E080", VA = "0x18257FA80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x257FC30", Offset = "0x257E230", VA = "0x18257FC30", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x257FAC0", Offset = "0x257E0C0", VA = "0x18257FAC0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x2580520", Offset = "0x257EB20", VA = "0x182580520")]
	internal static BigInteger ConvertToBigInteger(object value, IFormatProvider formatProvider)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x257FD80", Offset = "0x257E380", VA = "0x18257FD80")]
	internal static object ConvertFromBigInteger(BigInteger value, Type type, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x2580BE0", Offset = "0x257F1E0", VA = "0x182580BE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x2580E50", Offset = "0x257F450", VA = "0x182580E50", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x2580F40", Offset = "0x257F540", VA = "0x182580F40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x25811C0", Offset = "0x257F7C0", VA = "0x1825811C0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x2581020", Offset = "0x257F620", VA = "0x182581020", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x2580C80", Offset = "0x257F280", VA = "0x182580C80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x2580450", Offset = "0x257EA50", VA = "0x182580450", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x2580F00", Offset = "0x257F500", VA = "0x182580F00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x2580D20", Offset = "0x257F320", VA = "0x182580D20", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x2581100", Offset = "0x257F700", VA = "0x182581100", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
