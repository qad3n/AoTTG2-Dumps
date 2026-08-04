// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DecimalStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4625D10", Offset = "0x4625D10", VA = "0x4625D10")]
	internal DecimalStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x462ACE0", Offset = "0x462ACE0", VA = "0x462ACE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x462BD80", Offset = "0x462BD80", VA = "0x462BD80", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x462BF50", Offset = "0x462BF50", VA = "0x462BF50", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x462C0D0", Offset = "0x462C0D0", VA = "0x462C0D0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x462C220", Offset = "0x462C220", VA = "0x462C220", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x462C2A0", Offset = "0x462C2A0", VA = "0x462C2A0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x462C330", Offset = "0x462C330", VA = "0x462C330", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x462C4F0", Offset = "0x462C4F0", VA = "0x462C4F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x462C610", Offset = "0x462C610", VA = "0x462C610", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x462C690", Offset = "0x462C690", VA = "0x462C690", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x462C730", Offset = "0x462C730", VA = "0x462C730", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x462C770", Offset = "0x462C770", VA = "0x462C770", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x462C880", Offset = "0x462C880", VA = "0x462C880", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
