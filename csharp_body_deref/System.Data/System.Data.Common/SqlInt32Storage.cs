// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlInt32Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DD")]
internal sealed class SqlInt32Storage : DataStorage
{
	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x50")]
	private SqlInt32[] _values;

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x25A44A0", Offset = "0x25A2AA0", VA = "0x1825A44A0")]
	public SqlInt32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x25A2E20", Offset = "0x25A1420", VA = "0x1825A2E20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x25A3BD0", Offset = "0x25A21D0", VA = "0x1825A3BD0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x25A3B10", Offset = "0x25A2110", VA = "0x1825A3B10", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x25A3E10", Offset = "0x25A2410", VA = "0x1825A3E10", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x25A4170", Offset = "0x25A2770", VA = "0x1825A4170", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x25A41F0", Offset = "0x25A27F0", VA = "0x1825A41F0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x25A4260", Offset = "0x25A2860", VA = "0x1825A4260", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x25A4450", Offset = "0x25A2A50", VA = "0x1825A4450", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x25A42E0", Offset = "0x25A28E0", VA = "0x1825A42E0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x25A3E80", Offset = "0x25A2480", VA = "0x1825A3E80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x25A3C60", Offset = "0x25A2260", VA = "0x1825A3C60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x25A41B0", Offset = "0x25A27B0", VA = "0x1825A41B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x25A4060", Offset = "0x25A2660", VA = "0x1825A4060", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x25A43B0", Offset = "0x25A29B0", VA = "0x1825A43B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
