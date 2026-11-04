// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.CharStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C8")]
internal sealed class CharStorage : DataStorage
{
	[Token(Token = "0x4000447")]
	[FieldOffset(Offset = "0x50")]
	private char[] _values;

	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x2583C10", Offset = "0x2582210", VA = "0x182583C10")]
	internal CharStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x2583040", Offset = "0x2581640", VA = "0x182583040", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x2583410", Offset = "0x2581A10", VA = "0x182583410", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x2583320", Offset = "0x2581920", VA = "0x182583320", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x2583530", Offset = "0x2581B30", VA = "0x182583530", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x2583790", Offset = "0x2581D90", VA = "0x182583790", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x2583860", Offset = "0x2581E60", VA = "0x182583860", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x2583A70", Offset = "0x2582070", VA = "0x182583A70", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x25838D0", Offset = "0x2581ED0", VA = "0x1825838D0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x2583620", Offset = "0x2581C20", VA = "0x182583620", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x25834B0", Offset = "0x2581AB0", VA = "0x1825834B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x2583820", Offset = "0x2581E20", VA = "0x182583820", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x2583680", Offset = "0x2581C80", VA = "0x182583680", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x25839B0", Offset = "0x2581FB0", VA = "0x1825839B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
