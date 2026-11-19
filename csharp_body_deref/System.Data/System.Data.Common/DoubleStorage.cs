// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DoubleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CE")]
internal sealed class DoubleStorage : DataStorage
{
	[Token(Token = "0x4000486")]
	[FieldOffset(Offset = "0x50")]
	private double[] _values;

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x5F2C650", Offset = "0x5F2B650", VA = "0x5F2C650")]
	internal DoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x5F32AE0", Offset = "0x5F31AE0", VA = "0x5F32AE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x5F33320", Offset = "0x5F32320", VA = "0x5F33320", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x5F333E0", Offset = "0x5F323E0", VA = "0x5F333E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x5F334B0", Offset = "0x5F324B0", VA = "0x5F334B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x5F335E0", Offset = "0x5F325E0", VA = "0x5F335E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x5F33650", Offset = "0x5F32650", VA = "0x5F33650", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x5F336D0", Offset = "0x5F326D0", VA = "0x5F336D0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x5F33860", Offset = "0x5F32860", VA = "0x5F33860", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x5F33980", Offset = "0x5F32980", VA = "0x5F33980", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x5F339F0", Offset = "0x5F329F0", VA = "0x5F339F0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x5F33A90", Offset = "0x5F32A90", VA = "0x5F33A90", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x5F33AD0", Offset = "0x5F32AD0", VA = "0x5F33AD0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x5F33BD0", Offset = "0x5F32BD0", VA = "0x5F33BD0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
