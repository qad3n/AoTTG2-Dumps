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
	[Address(RVA = "0x4307BA0", Offset = "0x4307BA0", VA = "0x4307BA0")]
	public SqlDoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x4307CC0", Offset = "0x4307CC0", VA = "0x4307CC0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4309340", Offset = "0x4309340", VA = "0x4309340", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x43093F0", Offset = "0x43093F0", VA = "0x43093F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x43094A0", Offset = "0x43094A0", VA = "0x43094A0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4309510", Offset = "0x4309510", VA = "0x4309510", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x4309570", Offset = "0x4309570", VA = "0x4309570", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x4309600", Offset = "0x4309600", VA = "0x4309600", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	[Address(RVA = "0x4309670", Offset = "0x4309670", VA = "0x4309670", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C77")]
	[Address(RVA = "0x43096C0", Offset = "0x43096C0", VA = "0x43096C0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x4309770", Offset = "0x4309770", VA = "0x4309770", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x4309A40", Offset = "0x4309A40", VA = "0x4309A40", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4309D10", Offset = "0x4309D10", VA = "0x4309D10", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C7B")]
	[Address(RVA = "0x4309D50", Offset = "0x4309D50", VA = "0x4309D50", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C7C")]
	[Address(RVA = "0x4309E80", Offset = "0x4309E80", VA = "0x4309E80", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
