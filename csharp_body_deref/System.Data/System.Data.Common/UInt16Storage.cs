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

[Token(Token = "0x20000E8")]
internal sealed class UInt16Storage : DataStorage
{
	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ushort s_defaultValue;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0x50")]
	private ushort[] _values;

	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x5F56960", Offset = "0x5F55960", VA = "0x5F56960")]
	public UInt16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x5F56A40", Offset = "0x5F55A40", VA = "0x5F56A40", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x5F572A0", Offset = "0x5F562A0", VA = "0x5F572A0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x5F57340", Offset = "0x5F56340", VA = "0x5F57340", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x5F57430", Offset = "0x5F56430", VA = "0x5F57430", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x5F57560", Offset = "0x5F56560", VA = "0x5F57560", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x5F575B0", Offset = "0x5F565B0", VA = "0x5F575B0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x5F57660", Offset = "0x5F56660", VA = "0x5F57660", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x5F577F0", Offset = "0x5F567F0", VA = "0x5F577F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x5F578B0", Offset = "0x5F568B0", VA = "0x5F578B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x5F57920", Offset = "0x5F56920", VA = "0x5F57920", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x5F579B0", Offset = "0x5F569B0", VA = "0x5F579B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x5F579F0", Offset = "0x5F569F0", VA = "0x5F579F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x5F57AE0", Offset = "0x5F56AE0", VA = "0x5F57AE0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
