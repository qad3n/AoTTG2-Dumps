// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBytesStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D6")]
internal sealed class SqlBytesStorage : DataStorage
{
	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x50")]
	private SqlBytes[] _values;

	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x5F2CDF0", Offset = "0x5F2BDF0", VA = "0x5F2CDF0")]
	public SqlBytesStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x5F405E0", Offset = "0x5F3F5E0", VA = "0x5F405E0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x5F407B0", Offset = "0x5F3F7B0", VA = "0x5F407B0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x5F407C0", Offset = "0x5F3F7C0", VA = "0x5F407C0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x5F407D0", Offset = "0x5F3F7D0", VA = "0x5F407D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x5F40810", Offset = "0x5F3F810", VA = "0x5F40810", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x5F40840", Offset = "0x5F3F840", VA = "0x5F40840", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x5F40870", Offset = "0x5F3F870", VA = "0x5F40870", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x5F40980", Offset = "0x5F3F980", VA = "0x5F40980", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x5F40A30", Offset = "0x5F3FA30", VA = "0x5F40A30", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x5F40CE0", Offset = "0x5F3FCE0", VA = "0x5F40CE0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x5F40F40", Offset = "0x5F3FF40", VA = "0x5F40F40", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x5F40F80", Offset = "0x5F3FF80", VA = "0x5F40F80", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x5F410A0", Offset = "0x5F400A0", VA = "0x5F410A0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
