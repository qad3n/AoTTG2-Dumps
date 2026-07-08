using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E0")]
internal sealed class UInt64Storage : DataStorage
{
	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ulong s_defaultValue;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x50")]
	private ulong[] _values;

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x4320740", Offset = "0x4320740", VA = "0x4320740")]
	public UInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4320820", Offset = "0x4320820", VA = "0x4320820", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x4321460", Offset = "0x4321460", VA = "0x4321460", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x4321560", Offset = "0x4321560", VA = "0x4321560", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x4321650", Offset = "0x4321650", VA = "0x4321650", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x4321780", Offset = "0x4321780", VA = "0x4321780", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x43217D0", Offset = "0x43217D0", VA = "0x43217D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x4321890", Offset = "0x4321890", VA = "0x4321890", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x4321A10", Offset = "0x4321A10", VA = "0x4321A10", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x4321AD0", Offset = "0x4321AD0", VA = "0x4321AD0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x4321B40", Offset = "0x4321B40", VA = "0x4321B40", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x4321BD0", Offset = "0x4321BD0", VA = "0x4321BD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x4321C10", Offset = "0x4321C10", VA = "0x4321C10", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x4321D00", Offset = "0x4321D00", VA = "0x4321D00", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
