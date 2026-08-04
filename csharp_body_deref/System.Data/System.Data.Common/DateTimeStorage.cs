// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BF")]
internal sealed class DateTimeStorage : DataStorage
{
	[Token(Token = "0x4000462")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_defaultValue;

	[Token(Token = "0x4000463")]
	[FieldOffset(Offset = "0x50")]
	private DateTime[] _values;

	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x4625E70", Offset = "0x4625E70", VA = "0x4625E70")]
	internal DateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x46295F0", Offset = "0x46295F0", VA = "0x46295F0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x4629CB0", Offset = "0x4629CB0", VA = "0x4629CB0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x4629E40", Offset = "0x4629E40", VA = "0x4629E40", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x4629FA0", Offset = "0x4629FA0", VA = "0x4629FA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x462A0E0", Offset = "0x462A0E0", VA = "0x462A0E0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x462A150", Offset = "0x462A150", VA = "0x462A150", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x462A240", Offset = "0x462A240", VA = "0x462A240", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x462A600", Offset = "0x462A600", VA = "0x462A600", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x462A720", Offset = "0x462A720", VA = "0x462A720", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x462A7C0", Offset = "0x462A7C0", VA = "0x462A7C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x462A870", Offset = "0x462A870", VA = "0x462A870", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x462A8B0", Offset = "0x462A8B0", VA = "0x462A8B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x462AA20", Offset = "0x462AA20", VA = "0x462AA20", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
