using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C0")]
internal sealed class DecimalStorage : DataStorage
{
	[Token(Token = "0x4000464")]
	[FieldOffset(Offset = "0x0")]
	private static readonly decimal s_defaultValue;

	[Token(Token = "0x4000465")]
	[FieldOffset(Offset = "0x50")]
	private decimal[] _values;

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x42E85B0", Offset = "0x42E85B0", VA = "0x42E85B0")]
	internal DecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x42ED580", Offset = "0x42ED580", VA = "0x42ED580", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x42EE620", Offset = "0x42EE620", VA = "0x42EE620", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x42EE7F0", Offset = "0x42EE7F0", VA = "0x42EE7F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x42EE970", Offset = "0x42EE970", VA = "0x42EE970", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x42EEAC0", Offset = "0x42EEAC0", VA = "0x42EEAC0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x42EEB40", Offset = "0x42EEB40", VA = "0x42EEB40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x42EEBD0", Offset = "0x42EEBD0", VA = "0x42EEBD0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x42EED90", Offset = "0x42EED90", VA = "0x42EED90", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x42EEEB0", Offset = "0x42EEEB0", VA = "0x42EEEB0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x42EEF30", Offset = "0x42EEF30", VA = "0x42EEF30", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x42EEFD0", Offset = "0x42EEFD0", VA = "0x42EEFD0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x42EF010", Offset = "0x42EF010", VA = "0x42EF010", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x42EF120", Offset = "0x42EF120", VA = "0x42EF120", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
