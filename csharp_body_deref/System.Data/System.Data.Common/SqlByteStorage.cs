// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D5")]
internal sealed class SqlByteStorage : DataStorage
{
	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x50")]
	private SqlByte[] _values;

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x2592260", Offset = "0x2590860", VA = "0x182592260")]
	public SqlByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x2590BE0", Offset = "0x258F1E0", VA = "0x182590BE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x2591990", Offset = "0x258FF90", VA = "0x182591990", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x25918D0", Offset = "0x258FED0", VA = "0x1825918D0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x2591BD0", Offset = "0x25901D0", VA = "0x182591BD0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x2591F30", Offset = "0x2590530", VA = "0x182591F30", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x2591FB0", Offset = "0x25905B0", VA = "0x182591FB0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2592020", Offset = "0x2590620", VA = "0x182592020", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x2592210", Offset = "0x2590810", VA = "0x182592210", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x25920A0", Offset = "0x25906A0", VA = "0x1825920A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x2591C40", Offset = "0x2590240", VA = "0x182591C40", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x2591A20", Offset = "0x2590020", VA = "0x182591A20", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x2591F70", Offset = "0x2590570", VA = "0x182591F70", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x2591E20", Offset = "0x2590420", VA = "0x182591E20", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x2592170", Offset = "0x2590770", VA = "0x182592170", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
