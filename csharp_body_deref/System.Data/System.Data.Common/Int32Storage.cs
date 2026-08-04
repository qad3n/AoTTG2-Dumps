// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int32Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C3")]
internal sealed class Int32Storage : DataStorage
{
	[Token(Token = "0x4000468")]
	[FieldOffset(Offset = "0x50")]
	private int[] _values;

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x46259B0", Offset = "0x46259B0", VA = "0x46259B0")]
	internal Int32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x462F260", Offset = "0x462F260", VA = "0x462F260", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x462FE60", Offset = "0x462FE60", VA = "0x462FE60", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x462FF00", Offset = "0x462FF00", VA = "0x462FF00", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x462FFC0", Offset = "0x462FFC0", VA = "0x462FFC0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x4630100", Offset = "0x4630100", VA = "0x4630100", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x4630170", Offset = "0x4630170", VA = "0x4630170", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x46301E0", Offset = "0x46301E0", VA = "0x46301E0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4630370", Offset = "0x4630370", VA = "0x4630370", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4630490", Offset = "0x4630490", VA = "0x4630490", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4630500", Offset = "0x4630500", VA = "0x4630500", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4630590", Offset = "0x4630590", VA = "0x4630590", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x46305D0", Offset = "0x46305D0", VA = "0x46305D0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x46306D0", Offset = "0x46306D0", VA = "0x46306D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
