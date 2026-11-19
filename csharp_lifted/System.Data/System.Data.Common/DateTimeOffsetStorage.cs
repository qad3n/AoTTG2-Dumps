// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.DateTimeOffsetStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CB")]
internal sealed class DateTimeOffsetStorage : DataStorage
{
	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DateTimeOffset s_defaultValue;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x50")]
	private DateTimeOffset[] _values;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x5F2CA40", Offset = "0x5F2BA40", VA = "0x5F2CA40")]
	internal DateTimeOffsetStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x5F2EBD0", Offset = "0x5F2DBD0", VA = "0x5F2EBD0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x5F2F240", Offset = "0x5F2E240", VA = "0x5F2F240", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x5F2F420", Offset = "0x5F2E420", VA = "0x5F2F420", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x5F2F5B0", Offset = "0x5F2E5B0", VA = "0x5F2F5B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x5F2F640", Offset = "0x5F2E640", VA = "0x5F2F640", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x5F2F6C0", Offset = "0x5F2E6C0", VA = "0x5F2F6C0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x5F2F7F0", Offset = "0x5F2E7F0", VA = "0x5F2F7F0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x5F2F920", Offset = "0x5F2E920", VA = "0x5F2F920", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x5F2FA40", Offset = "0x5F2EA40", VA = "0x5F2FA40", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x5F2FAC0", Offset = "0x5F2EAC0", VA = "0x5F2FAC0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x5F2FB60", Offset = "0x5F2EB60", VA = "0x5F2FB60", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x5F2FBA0", Offset = "0x5F2EBA0", VA = "0x5F2FBA0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x5F2FCC0", Offset = "0x5F2ECC0", VA = "0x5F2FCC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
