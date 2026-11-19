// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D2")]
internal sealed class SByteStorage : DataStorage
{
	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x50")]
	private sbyte[] _values;

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x5F2C1D0", Offset = "0x5F2B1D0", VA = "0x5F2C1D0")]
	public SByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x5F372A0", Offset = "0x5F362A0", VA = "0x5F372A0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x5F37B50", Offset = "0x5F36B50", VA = "0x5F37B50", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x5F37C20", Offset = "0x5F36C20", VA = "0x5F37C20", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x5F37CE0", Offset = "0x5F36CE0", VA = "0x5F37CE0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x5F37E20", Offset = "0x5F36E20", VA = "0x5F37E20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x5F37E90", Offset = "0x5F36E90", VA = "0x5F37E90", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x5F37F20", Offset = "0x5F36F20", VA = "0x5F37F20", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x5F380B0", Offset = "0x5F370B0", VA = "0x5F380B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x5F381D0", Offset = "0x5F371D0", VA = "0x5F381D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x5F38240", Offset = "0x5F37240", VA = "0x5F38240", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x5F382D0", Offset = "0x5F372D0", VA = "0x5F382D0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x5F38310", Offset = "0x5F37310", VA = "0x5F38310", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x5F38410", Offset = "0x5F37410", VA = "0x5F38410", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
