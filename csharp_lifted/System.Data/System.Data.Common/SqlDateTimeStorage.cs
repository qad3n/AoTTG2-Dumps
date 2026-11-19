// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDateTimeStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D8")]
internal sealed class SqlDateTimeStorage : DataStorage
{
	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x50")]
	private SqlDateTime[] _values;

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x5F2CF90", Offset = "0x5F2BF90", VA = "0x5F2CF90")]
	public SqlDateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x5F41CB0", Offset = "0x5F40CB0", VA = "0x5F41CB0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x5F422B0", Offset = "0x5F412B0", VA = "0x5F422B0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x5F42350", Offset = "0x5F41350", VA = "0x5F42350", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x5F42400", Offset = "0x5F41400", VA = "0x5F42400", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x5F42470", Offset = "0x5F41470", VA = "0x5F42470", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x5F424C0", Offset = "0x5F414C0", VA = "0x5F424C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x5F42540", Offset = "0x5F41540", VA = "0x5F42540", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x5F425B0", Offset = "0x5F415B0", VA = "0x5F425B0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x5F425F0", Offset = "0x5F415F0", VA = "0x5F425F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x5F426A0", Offset = "0x5F416A0", VA = "0x5F426A0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x5F42940", Offset = "0x5F41940", VA = "0x5F42940", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x5F42BA0", Offset = "0x5F41BA0", VA = "0x5F42BA0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x5F42BE0", Offset = "0x5F41BE0", VA = "0x5F42BE0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x5F42D00", Offset = "0x5F41D00", VA = "0x5F42D00", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
