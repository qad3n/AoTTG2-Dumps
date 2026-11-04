// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlDoubleStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DA")]
internal sealed class SqlDoubleStorage : DataStorage
{
	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x50")]
	private SqlDouble[] _values;

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x25A0950", Offset = "0x259EF50", VA = "0x1825A0950")]
	public SqlDoubleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x259F300", Offset = "0x259D900", VA = "0x18259F300", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x25A0020", Offset = "0x259E620", VA = "0x1825A0020", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x259FF60", Offset = "0x259E560", VA = "0x18259FF60", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x25A0270", Offset = "0x259E870", VA = "0x1825A0270", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x25A05F0", Offset = "0x259EBF0", VA = "0x1825A05F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x25A0680", Offset = "0x259EC80", VA = "0x1825A0680", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x25A0700", Offset = "0x259ED00", VA = "0x1825A0700", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x25A08F0", Offset = "0x259EEF0", VA = "0x1825A08F0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x25A0780", Offset = "0x259ED80", VA = "0x1825A0780", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x25A02F0", Offset = "0x259E8F0", VA = "0x1825A02F0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x25A00C0", Offset = "0x259E6C0", VA = "0x1825A00C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C99")]
	[Address(RVA = "0x25A0640", Offset = "0x259EC40", VA = "0x1825A0640", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C9A")]
	[Address(RVA = "0x25A04E0", Offset = "0x259EAE0", VA = "0x1825A04E0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C9B")]
	[Address(RVA = "0x25A0850", Offset = "0x259EE50", VA = "0x1825A0850", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
