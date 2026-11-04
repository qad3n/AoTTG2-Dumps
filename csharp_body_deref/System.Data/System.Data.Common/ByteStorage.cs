// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.ByteStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C7")]
internal sealed class ByteStorage : DataStorage
{
	[Token(Token = "0x4000446")]
	[FieldOffset(Offset = "0x50")]
	private byte[] _values;

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x2582F90", Offset = "0x2581590", VA = "0x182582F90")]
	internal ByteStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x2582030", Offset = "0x2580630", VA = "0x182582030", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x2582820", Offset = "0x2580E20", VA = "0x182582820", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x2582750", Offset = "0x2580D50", VA = "0x182582750", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x2582920", Offset = "0x2580F20", VA = "0x182582920", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x2582B80", Offset = "0x2581180", VA = "0x182582B80", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x2582C50", Offset = "0x2581250", VA = "0x182582C50", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x2582E60", Offset = "0x2581460", VA = "0x182582E60", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x2582CC0", Offset = "0x25812C0", VA = "0x182582CC0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x2582A10", Offset = "0x2581010", VA = "0x182582A10", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x25828A0", Offset = "0x2580EA0", VA = "0x1825828A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x2582C10", Offset = "0x2581210", VA = "0x182582C10", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x2582A70", Offset = "0x2581070", VA = "0x182582A70", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x2582DA0", Offset = "0x25813A0", VA = "0x182582DA0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
