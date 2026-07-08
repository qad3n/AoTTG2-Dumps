using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CB")]
internal sealed class SqlByteStorage : DataStorage
{
	[Token(Token = "0x4000479")]
	[FieldOffset(Offset = "0x50")]
	private SqlByte[] _values;

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x42E8B10", Offset = "0x42E8B10", VA = "0x42E8B10")]
	public SqlByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4300700", Offset = "0x4300700", VA = "0x4300700", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4301D20", Offset = "0x4301D20", VA = "0x4301D20", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4301DB0", Offset = "0x4301DB0", VA = "0x4301DB0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4301E60", Offset = "0x4301E60", VA = "0x4301E60", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4301EC0", Offset = "0x4301EC0", VA = "0x4301EC0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4301F00", Offset = "0x4301F00", VA = "0x4301F00", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x4301F70", Offset = "0x4301F70", VA = "0x4301F70", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x4301FE0", Offset = "0x4301FE0", VA = "0x4301FE0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x4302020", Offset = "0x4302020", VA = "0x4302020", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x43020D0", Offset = "0x43020D0", VA = "0x43020D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x43023D0", Offset = "0x43023D0", VA = "0x43023D0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x43026B0", Offset = "0x43026B0", VA = "0x43026B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x43026F0", Offset = "0x43026F0", VA = "0x43026F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x43027F0", Offset = "0x43027F0", VA = "0x43027F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
