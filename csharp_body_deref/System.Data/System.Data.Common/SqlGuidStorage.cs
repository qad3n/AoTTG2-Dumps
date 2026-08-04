// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlGuidStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D1")]
internal sealed class SqlGuidStorage : DataStorage
{
	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x50")]
	private SqlGuid[] _values;

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x4647680", Offset = "0x4647680", VA = "0x4647680")]
	public SqlGuidStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x46477A0", Offset = "0x46477A0", VA = "0x46477A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x4647A00", Offset = "0x4647A00", VA = "0x4647A00", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x4647A90", Offset = "0x4647A90", VA = "0x4647A90", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x4647B40", Offset = "0x4647B40", VA = "0x4647B40", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x4647BA0", Offset = "0x4647BA0", VA = "0x4647BA0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x4647BE0", Offset = "0x4647BE0", VA = "0x4647BE0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x4647C50", Offset = "0x4647C50", VA = "0x4647C50", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x4647CC0", Offset = "0x4647CC0", VA = "0x4647CC0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x4647D10", Offset = "0x4647D10", VA = "0x4647D10", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x4647DC0", Offset = "0x4647DC0", VA = "0x4647DC0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x46480C0", Offset = "0x46480C0", VA = "0x46480C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x4648390", Offset = "0x4648390", VA = "0x4648390", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x46483D0", Offset = "0x46483D0", VA = "0x46483D0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x46484E0", Offset = "0x46484E0", VA = "0x46484E0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
