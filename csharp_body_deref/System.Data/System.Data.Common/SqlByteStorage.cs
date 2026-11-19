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
	[Address(RVA = "0x5F2CCD0", Offset = "0x5F2BCD0", VA = "0x5F2CCD0")]
	public SqlByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x5F3EC90", Offset = "0x5F3DC90", VA = "0x5F3EC90", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x5F3FB60", Offset = "0x5F3EB60", VA = "0x5F3FB60", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x5F3FBF0", Offset = "0x5F3EBF0", VA = "0x5F3FBF0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x5F3FCA0", Offset = "0x5F3ECA0", VA = "0x5F3FCA0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x5F3FD00", Offset = "0x5F3ED00", VA = "0x5F3FD00", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x5F3FD40", Offset = "0x5F3ED40", VA = "0x5F3FD40", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x5F3FDB0", Offset = "0x5F3EDB0", VA = "0x5F3FDB0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x5F3FE20", Offset = "0x5F3EE20", VA = "0x5F3FE20", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x5F3FE60", Offset = "0x5F3EE60", VA = "0x5F3FE60", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x5F3FF10", Offset = "0x5F3EF10", VA = "0x5F3FF10", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x5F401A0", Offset = "0x5F3F1A0", VA = "0x5F401A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x5F40400", Offset = "0x5F3F400", VA = "0x5F40400", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x5F40440", Offset = "0x5F3F440", VA = "0x5F40440", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x5F40540", Offset = "0x5F3F540", VA = "0x5F40540", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
