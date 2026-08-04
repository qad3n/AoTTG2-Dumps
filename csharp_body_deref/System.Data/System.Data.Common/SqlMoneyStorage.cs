// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlMoneyStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D5")]
internal sealed class SqlMoneyStorage : DataStorage
{
	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x50")]
	private SqlMoney[] _values;

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x464F070", Offset = "0x464F070", VA = "0x464F070")]
	public SqlMoneyStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x464F190", Offset = "0x464F190", VA = "0x464F190", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x4650B20", Offset = "0x4650B20", VA = "0x4650B20", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x4650BC0", Offset = "0x4650BC0", VA = "0x4650BC0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x4650C70", Offset = "0x4650C70", VA = "0x4650C70", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x4650CE0", Offset = "0x4650CE0", VA = "0x4650CE0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x4650D40", Offset = "0x4650D40", VA = "0x4650D40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x4650DD0", Offset = "0x4650DD0", VA = "0x4650DD0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x4650E40", Offset = "0x4650E40", VA = "0x4650E40", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x4650E90", Offset = "0x4650E90", VA = "0x4650E90", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x4650F40", Offset = "0x4650F40", VA = "0x4650F40", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x4651210", Offset = "0x4651210", VA = "0x4651210", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x46514E0", Offset = "0x46514E0", VA = "0x46514E0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x4651520", Offset = "0x4651520", VA = "0x4651520", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x4651650", Offset = "0x4651650", VA = "0x4651650", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
