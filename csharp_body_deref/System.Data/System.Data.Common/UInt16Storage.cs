using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DE")]
internal sealed class UInt16Storage : DataStorage
{
	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ushort s_defaultValue;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x50")]
	private ushort[] _values;

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x431DD30", Offset = "0x431DD30", VA = "0x431DD30")]
	public UInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x431DE10", Offset = "0x431DE10", VA = "0x431DE10", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x431E960", Offset = "0x431E960", VA = "0x431E960", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x431EA00", Offset = "0x431EA00", VA = "0x431EA00", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x431EAF0", Offset = "0x431EAF0", VA = "0x431EAF0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x431EC20", Offset = "0x431EC20", VA = "0x431EC20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x431EC70", Offset = "0x431EC70", VA = "0x431EC70", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x431ED20", Offset = "0x431ED20", VA = "0x431ED20", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x431EEA0", Offset = "0x431EEA0", VA = "0x431EEA0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x431EF60", Offset = "0x431EF60", VA = "0x431EF60", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x431EFD0", Offset = "0x431EFD0", VA = "0x431EFD0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x431F060", Offset = "0x431F060", VA = "0x431F060", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x431F0A0", Offset = "0x431F0A0", VA = "0x431F0A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x431F190", Offset = "0x431F190", VA = "0x431F190", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
