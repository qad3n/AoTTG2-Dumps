// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeOffsetStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BE")]
internal sealed class DateTimeOffsetStorage : DataStorage
{
	[Token(Token = "0x4000460")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTimeOffset s_defaultValue;

	[Token(Token = "0x4000461")]
	[FieldOffset(Offset = "0x50")]
	private DateTimeOffset[] _values;

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4625FE0", Offset = "0x4625FE0", VA = "0x4625FE0")]
	internal DateTimeOffsetStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4628180", Offset = "0x4628180", VA = "0x4628180", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x46289F0", Offset = "0x46289F0", VA = "0x46289F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x4628BD0", Offset = "0x4628BD0", VA = "0x4628BD0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4628D60", Offset = "0x4628D60", VA = "0x4628D60", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4628DF0", Offset = "0x4628DF0", VA = "0x4628DF0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4628E80", Offset = "0x4628E80", VA = "0x4628E80", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4628FD0", Offset = "0x4628FD0", VA = "0x4628FD0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x4629120", Offset = "0x4629120", VA = "0x4629120", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x4629240", Offset = "0x4629240", VA = "0x4629240", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x46292C0", Offset = "0x46292C0", VA = "0x46292C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x4629360", Offset = "0x4629360", VA = "0x4629360", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x46293A0", Offset = "0x46293A0", VA = "0x46293A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x46294D0", Offset = "0x46294D0", VA = "0x46294D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
