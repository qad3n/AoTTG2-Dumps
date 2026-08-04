// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDoubleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D0")]
internal sealed class SqlDoubleStorage : DataStorage
{
	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x50")]
	private SqlDouble[] _values;

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x4645300", Offset = "0x4645300", VA = "0x4645300")]
	public SqlDoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x4645420", Offset = "0x4645420", VA = "0x4645420", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4646AA0", Offset = "0x4646AA0", VA = "0x4646AA0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x4646B50", Offset = "0x4646B50", VA = "0x4646B50", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x4646C00", Offset = "0x4646C00", VA = "0x4646C00", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4646C70", Offset = "0x4646C70", VA = "0x4646C70", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4646CD0", Offset = "0x4646CD0", VA = "0x4646CD0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4646D60", Offset = "0x4646D60", VA = "0x4646D60", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4646DD0", Offset = "0x4646DD0", VA = "0x4646DD0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x4646E20", Offset = "0x4646E20", VA = "0x4646E20", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4646ED0", Offset = "0x4646ED0", VA = "0x4646ED0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x46471A0", Offset = "0x46471A0", VA = "0x46471A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4647470", Offset = "0x4647470", VA = "0x4647470", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x46474B0", Offset = "0x46474B0", VA = "0x46474B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x46475E0", Offset = "0x46475E0", VA = "0x46475E0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
