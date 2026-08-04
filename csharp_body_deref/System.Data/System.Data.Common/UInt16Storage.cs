// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.UInt16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DE")]
internal sealed class UInt16Storage : DataStorage
{
	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ushort s_defaultValue;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x50")]
	private ushort[] _values;

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x465B490", Offset = "0x465B490", VA = "0x465B490")]
	public UInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x465B570", Offset = "0x465B570", VA = "0x465B570", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x465C0C0", Offset = "0x465C0C0", VA = "0x465C0C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x465C160", Offset = "0x465C160", VA = "0x465C160", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x465C250", Offset = "0x465C250", VA = "0x465C250", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x465C380", Offset = "0x465C380", VA = "0x465C380", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x465C3D0", Offset = "0x465C3D0", VA = "0x465C3D0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x465C480", Offset = "0x465C480", VA = "0x465C480", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x465C600", Offset = "0x465C600", VA = "0x465C600", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x465C6C0", Offset = "0x465C6C0", VA = "0x465C6C0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x465C730", Offset = "0x465C730", VA = "0x465C730", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x465C7C0", Offset = "0x465C7C0", VA = "0x465C7C0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x465C800", Offset = "0x465C800", VA = "0x465C800", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x465C8F0", Offset = "0x465C8F0", VA = "0x465C8F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
