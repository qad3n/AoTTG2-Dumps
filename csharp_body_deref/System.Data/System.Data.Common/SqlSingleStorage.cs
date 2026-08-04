// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlSingleStorage
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
internal sealed class SqlSingleStorage : DataStorage
{
	[Token(Token = "0x4000484")]
	[FieldOffset(Offset = "0x50")]
	private SqlSingle[] _values;

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x46516F0", Offset = "0x46516F0", VA = "0x46516F0")]
	public SqlSingleStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x4651810", Offset = "0x4651810", VA = "0x4651810", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x4652DB0", Offset = "0x4652DB0", VA = "0x4652DB0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x4652E40", Offset = "0x4652E40", VA = "0x4652E40", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x4652EF0", Offset = "0x4652EF0", VA = "0x4652EF0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x4652F50", Offset = "0x4652F50", VA = "0x4652F50", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x4652F90", Offset = "0x4652F90", VA = "0x4652F90", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x4653000", Offset = "0x4653000", VA = "0x4653000", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x4653070", Offset = "0x4653070", VA = "0x4653070", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x46530B0", Offset = "0x46530B0", VA = "0x46530B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x4653160", Offset = "0x4653160", VA = "0x4653160", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x4653460", Offset = "0x4653460", VA = "0x4653460", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x4653730", Offset = "0x4653730", VA = "0x4653730", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x4653770", Offset = "0x4653770", VA = "0x4653770", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x4653870", Offset = "0x4653870", VA = "0x4653870", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
