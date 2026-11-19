// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D9")]
internal sealed class SqlDecimalStorage : DataStorage
{
	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x50")]
	private SqlDecimal[] _values;

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x5F2D0C0", Offset = "0x5F2C0C0", VA = "0x5F2D0C0")]
	public SqlDecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x5F42DA0", Offset = "0x5F41DA0", VA = "0x5F42DA0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x5F43ED0", Offset = "0x5F42ED0", VA = "0x5F43ED0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x5F43F80", Offset = "0x5F42F80", VA = "0x5F43F80", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x5F44050", Offset = "0x5F43050", VA = "0x5F44050", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x5F440D0", Offset = "0x5F430D0", VA = "0x5F440D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x5F44120", Offset = "0x5F43120", VA = "0x5F44120", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x5F441A0", Offset = "0x5F431A0", VA = "0x5F441A0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x5F44210", Offset = "0x5F43210", VA = "0x5F44210", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x5F44260", Offset = "0x5F43260", VA = "0x5F44260", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x5F44310", Offset = "0x5F43310", VA = "0x5F44310", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x5F445B0", Offset = "0x5F435B0", VA = "0x5F445B0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x5F44810", Offset = "0x5F43810", VA = "0x5F44810", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x5F44850", Offset = "0x5F43850", VA = "0x5F44850", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x5F44970", Offset = "0x5F43970", VA = "0x5F44970", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
