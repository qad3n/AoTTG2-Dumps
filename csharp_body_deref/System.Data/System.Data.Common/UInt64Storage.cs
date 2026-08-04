// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt64Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E0")]
internal sealed class UInt64Storage : DataStorage
{
	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ulong s_defaultValue;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x50")]
	private ulong[] _values;

	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x465DEA0", Offset = "0x465DEA0", VA = "0x465DEA0")]
	public UInt64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x465DF80", Offset = "0x465DF80", VA = "0x465DF80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x465EBC0", Offset = "0x465EBC0", VA = "0x465EBC0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x465ECC0", Offset = "0x465ECC0", VA = "0x465ECC0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x465EDB0", Offset = "0x465EDB0", VA = "0x465EDB0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x465EEE0", Offset = "0x465EEE0", VA = "0x465EEE0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x465EF30", Offset = "0x465EF30", VA = "0x465EF30", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x465EFF0", Offset = "0x465EFF0", VA = "0x465EFF0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x465F170", Offset = "0x465F170", VA = "0x465F170", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x465F230", Offset = "0x465F230", VA = "0x465F230", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x465F2A0", Offset = "0x465F2A0", VA = "0x465F2A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x465F330", Offset = "0x465F330", VA = "0x465F330", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x465F370", Offset = "0x465F370", VA = "0x465F370", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x465F460", Offset = "0x465F460", VA = "0x465F460", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
