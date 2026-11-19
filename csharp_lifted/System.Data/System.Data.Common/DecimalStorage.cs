// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CD")]
internal sealed class DecimalStorage : DataStorage
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x0")]
	private static readonly decimal s_defaultValue;

	[Token(Token = "0x4000485")]
	[FieldOffset(Offset = "0x50")]
	private decimal[] _values;

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x5F2C770", Offset = "0x5F2B770", VA = "0x5F2C770")]
	internal DecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x5F31300", Offset = "0x5F30300", VA = "0x5F31300", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x5F31F30", Offset = "0x5F30F30", VA = "0x5F31F30", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x5F32100", Offset = "0x5F31100", VA = "0x5F32100", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x5F32280", Offset = "0x5F31280", VA = "0x5F32280", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x5F323D0", Offset = "0x5F313D0", VA = "0x5F323D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x5F32450", Offset = "0x5F31450", VA = "0x5F32450", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x5F324E0", Offset = "0x5F314E0", VA = "0x5F324E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x5F326A0", Offset = "0x5F316A0", VA = "0x5F326A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x5F327C0", Offset = "0x5F317C0", VA = "0x5F327C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x5F32840", Offset = "0x5F31840", VA = "0x5F32840", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x5F328E0", Offset = "0x5F318E0", VA = "0x5F328E0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x5F32920", Offset = "0x5F31920", VA = "0x5F32920", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x5F32A30", Offset = "0x5F31A30", VA = "0x5F32A30", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
