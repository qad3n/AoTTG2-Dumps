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
	[Address(RVA = "0x2592D40", Offset = "0x2591340", VA = "0x182592D40")]
	public SqlBytesStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x2592390", Offset = "0x2590990", VA = "0x182592390", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x25929D0", Offset = "0x2590FD0", VA = "0x1825929D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x2592A60", Offset = "0x2591060", VA = "0x182592A60", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x2592A90", Offset = "0x2591090", VA = "0x182592A90", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x2592C40", Offset = "0x2591240", VA = "0x182592C40", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x2592AD0", Offset = "0x25910D0", VA = "0x182592AD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x25926B0", Offset = "0x2590CB0", VA = "0x1825926B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x2592500", Offset = "0x2590B00", VA = "0x182592500", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x2592A20", Offset = "0x2591020", VA = "0x182592A20", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x25928B0", Offset = "0x2590EB0", VA = "0x1825928B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x2592BA0", Offset = "0x25911A0", VA = "0x182592BA0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
