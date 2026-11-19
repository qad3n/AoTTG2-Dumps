// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBooleanStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E2")]
internal sealed class SqlBooleanStorage : DataStorage
{
	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x50")]
	private SqlBoolean[] _values;

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x5F50E90", Offset = "0x5F4FE90", VA = "0x5F50E90")]
	public SqlBooleanStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x5F50FB0", Offset = "0x5F4FFB0", VA = "0x5F50FB0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x5F51430", Offset = "0x5F50430", VA = "0x5F51430", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x5F514C0", Offset = "0x5F504C0", VA = "0x5F514C0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x5F51570", Offset = "0x5F50570", VA = "0x5F51570", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x5F515D0", Offset = "0x5F505D0", VA = "0x5F515D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x5F51600", Offset = "0x5F50600", VA = "0x5F51600", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x5F51670", Offset = "0x5F50670", VA = "0x5F51670", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x5F516E0", Offset = "0x5F506E0", VA = "0x5F516E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x5F51720", Offset = "0x5F50720", VA = "0x5F51720", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x5F517D0", Offset = "0x5F507D0", VA = "0x5F517D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x5F51A60", Offset = "0x5F50A60", VA = "0x5F51A60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x5F51CC0", Offset = "0x5F50CC0", VA = "0x5F51CC0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x5F51D00", Offset = "0x5F50D00", VA = "0x5F51D00", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x5F51E00", Offset = "0x5F50E00", VA = "0x5F51E00", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
