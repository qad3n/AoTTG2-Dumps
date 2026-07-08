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
	[Address(RVA = "0x4309F20", Offset = "0x4309F20", VA = "0x4309F20")]
	public SqlGuidStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x430A040", Offset = "0x430A040", VA = "0x430A040", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x430A2A0", Offset = "0x430A2A0", VA = "0x430A2A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x430A330", Offset = "0x430A330", VA = "0x430A330", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x430A3E0", Offset = "0x430A3E0", VA = "0x430A3E0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x430A440", Offset = "0x430A440", VA = "0x430A440", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x430A480", Offset = "0x430A480", VA = "0x430A480", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x430A4F0", Offset = "0x430A4F0", VA = "0x430A4F0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x430A560", Offset = "0x430A560", VA = "0x430A560", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C86")]
	[Address(RVA = "0x430A5B0", Offset = "0x430A5B0", VA = "0x430A5B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x430A660", Offset = "0x430A660", VA = "0x430A660", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x430A960", Offset = "0x430A960", VA = "0x430A960", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x430AC30", Offset = "0x430AC30", VA = "0x430AC30", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x430AC70", Offset = "0x430AC70", VA = "0x430AC70", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x430AD80", Offset = "0x430AD80", VA = "0x430AD80", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
