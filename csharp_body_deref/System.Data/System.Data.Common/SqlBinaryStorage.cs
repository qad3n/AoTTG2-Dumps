// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBinaryStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CA")]
internal sealed class SqlBinaryStorage : DataStorage
{
	[Token(Token = "0x4000478")]
	[FieldOffset(Offset = "0x50")]
	private SqlBinary[] _values;

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x4626150", Offset = "0x4626150", VA = "0x4626150")]
	public SqlBinaryStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x463D070", Offset = "0x463D070", VA = "0x463D070", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x463D2D0", Offset = "0x463D2D0", VA = "0x463D2D0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x463D360", Offset = "0x463D360", VA = "0x463D360", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x463D410", Offset = "0x463D410", VA = "0x463D410", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x463D470", Offset = "0x463D470", VA = "0x463D470", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x463D4B0", Offset = "0x463D4B0", VA = "0x463D4B0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x463D520", Offset = "0x463D520", VA = "0x463D520", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x463D590", Offset = "0x463D590", VA = "0x463D590", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x463D5E0", Offset = "0x463D5E0", VA = "0x463D5E0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x463D690", Offset = "0x463D690", VA = "0x463D690", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x463D990", Offset = "0x463D990", VA = "0x463D990", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x463DC70", Offset = "0x463DC70", VA = "0x463DC70", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x463DCB0", Offset = "0x463DCB0", VA = "0x463DCB0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x463DDC0", Offset = "0x463DDC0", VA = "0x463DDC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
