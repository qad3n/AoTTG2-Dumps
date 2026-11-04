// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlCharsStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D7")]
internal sealed class SqlCharsStorage : DataStorage
{
	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x50")]
	private SqlChars[] _values;

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x2593730", Offset = "0x2591D30", VA = "0x182593730")]
	public SqlCharsStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x2592E10", Offset = "0x2591410", VA = "0x182592E10", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x25929D0", Offset = "0x2590FD0", VA = "0x1825929D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x2592A60", Offset = "0x2591060", VA = "0x182592A60", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2592A90", Offset = "0x2591090", VA = "0x182592A90", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x2593630", Offset = "0x2591C30", VA = "0x182593630", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x25934C0", Offset = "0x2591AC0", VA = "0x1825934C0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x2593130", Offset = "0x2591730", VA = "0x182593130", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x2592F80", Offset = "0x2591580", VA = "0x182592F80", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x2593480", Offset = "0x2591A80", VA = "0x182593480", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x2593360", Offset = "0x2591960", VA = "0x182593360", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x2593590", Offset = "0x2591B90", VA = "0x182593590", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
