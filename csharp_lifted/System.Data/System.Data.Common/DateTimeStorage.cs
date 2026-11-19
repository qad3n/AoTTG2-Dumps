// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CC")]
internal sealed class DateTimeStorage : DataStorage
{
	[Token(Token = "0x4000482")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTime s_defaultValue;

	[Token(Token = "0x4000483")]
	[FieldOffset(Offset = "0x50")]
	private DateTime[] _values;

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x5F2C8D0", Offset = "0x5F2B8D0", VA = "0x5F2C8D0")]
	internal DateTimeStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x5F2FDE0", Offset = "0x5F2EDE0", VA = "0x5F2FDE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x5F302C0", Offset = "0x5F2F2C0", VA = "0x5F302C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x5F30450", Offset = "0x5F2F450", VA = "0x5F30450", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x5F305B0", Offset = "0x5F2F5B0", VA = "0x5F305B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x5F306F0", Offset = "0x5F2F6F0", VA = "0x5F306F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x5F30760", Offset = "0x5F2F760", VA = "0x5F30760", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x5F30850", Offset = "0x5F2F850", VA = "0x5F30850", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x5F30C20", Offset = "0x5F2FC20", VA = "0x5F30C20", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x5F30D40", Offset = "0x5F2FD40", VA = "0x5F30D40", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x5F30DE0", Offset = "0x5F2FDE0", VA = "0x5F30DE0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x5F30EB0", Offset = "0x5F2FEB0", VA = "0x5F30EB0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x5F30EF0", Offset = "0x5F2FEF0", VA = "0x5F30EF0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x5F31060", Offset = "0x5F30060", VA = "0x5F31060", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
