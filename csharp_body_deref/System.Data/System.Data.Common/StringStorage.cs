// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.StringStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DC")]
internal sealed class StringStorage : DataStorage
{
	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x50")]
	private string[] _values;

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4658C50", Offset = "0x4658C50", VA = "0x4658C50")]
	public StringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4658D00", Offset = "0x4658D00", VA = "0x4658D00", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x4658FF0", Offset = "0x4658FF0", VA = "0x4658FF0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4659060", Offset = "0x4659060", VA = "0x4659060", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x46590E0", Offset = "0x46590E0", VA = "0x46590E0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4659110", Offset = "0x4659110", VA = "0x4659110", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4659150", Offset = "0x4659150", VA = "0x4659150", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4659180", Offset = "0x4659180", VA = "0x4659180", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x46591B0", Offset = "0x46591B0", VA = "0x46591B0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x46591E0", Offset = "0x46591E0", VA = "0x46591E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4659270", Offset = "0x4659270", VA = "0x4659270", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4659320", Offset = "0x4659320", VA = "0x4659320", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4659330", Offset = "0x4659330", VA = "0x4659330", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4659360", Offset = "0x4659360", VA = "0x4659360", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x46593A0", Offset = "0x46593A0", VA = "0x46593A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x46594C0", Offset = "0x46594C0", VA = "0x46594C0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
