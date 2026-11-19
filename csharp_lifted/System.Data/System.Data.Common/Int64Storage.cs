// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int64Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000D1")]
internal sealed class Int64Storage : DataStorage
{
	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x50")]
	private long[] _values;

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x5F2C530", Offset = "0x5F2B530", VA = "0x5F2C530")]
	internal Int64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x5F36070", Offset = "0x5F35070", VA = "0x5F36070", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x5F36990", Offset = "0x5F35990", VA = "0x5F36990", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x5F36A30", Offset = "0x5F35A30", VA = "0x5F36A30", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x5F36AF0", Offset = "0x5F35AF0", VA = "0x5F36AF0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x5F36C20", Offset = "0x5F35C20", VA = "0x5F36C20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x5F36C90", Offset = "0x5F35C90", VA = "0x5F36C90", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x5F36D00", Offset = "0x5F35D00", VA = "0x5F36D00", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x5F36E90", Offset = "0x5F35E90", VA = "0x5F36E90", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x5F36FB0", Offset = "0x5F35FB0", VA = "0x5F36FB0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x5F37020", Offset = "0x5F36020", VA = "0x5F37020", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x5F370B0", Offset = "0x5F360B0", VA = "0x5F370B0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x5F370F0", Offset = "0x5F360F0", VA = "0x5F370F0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x5F371F0", Offset = "0x5F361F0", VA = "0x5F371F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
