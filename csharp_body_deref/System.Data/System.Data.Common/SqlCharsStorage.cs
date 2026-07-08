using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CD")]
internal sealed class SqlCharsStorage : DataStorage
{
	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x50")]
	private SqlChars[] _values;

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x42E8D00", Offset = "0x42E8D00", VA = "0x42E8D00")]
	public SqlCharsStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4303520", Offset = "0x4303520", VA = "0x4303520", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4303740", Offset = "0x4303740", VA = "0x4303740", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4303750", Offset = "0x4303750", VA = "0x4303750", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4303760", Offset = "0x4303760", VA = "0x4303760", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x43037A0", Offset = "0x43037A0", VA = "0x43037A0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x43037D0", Offset = "0x43037D0", VA = "0x43037D0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4303800", Offset = "0x4303800", VA = "0x4303800", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4303930", Offset = "0x4303930", VA = "0x4303930", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x43039E0", Offset = "0x43039E0", VA = "0x43039E0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4303CF0", Offset = "0x4303CF0", VA = "0x4303CF0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4303FD0", Offset = "0x4303FD0", VA = "0x4303FD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4304010", Offset = "0x4304010", VA = "0x4304010", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4304130", Offset = "0x4304130", VA = "0x4304130", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
