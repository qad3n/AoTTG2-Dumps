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

[Token(Token = "0x20000D0")]
internal sealed class Int32Storage : DataStorage
{
	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x50")]
	private int[] _values;

	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x258DEB0", Offset = "0x258C4B0", VA = "0x18258DEB0")]
	internal Int32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x258CED0", Offset = "0x258B4D0", VA = "0x18258CED0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x258D740", Offset = "0x258BD40", VA = "0x18258D740", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x258D670", Offset = "0x258BC70", VA = "0x18258D670", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x258D840", Offset = "0x258BE40", VA = "0x18258D840", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x258DAA0", Offset = "0x258C0A0", VA = "0x18258DAA0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x258DB70", Offset = "0x258C170", VA = "0x18258DB70", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x258DD80", Offset = "0x258C380", VA = "0x18258DD80", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x258DBE0", Offset = "0x258C1E0", VA = "0x18258DBE0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x258D930", Offset = "0x258BF30", VA = "0x18258D930", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x258D7C0", Offset = "0x258BDC0", VA = "0x18258D7C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x258DB30", Offset = "0x258C130", VA = "0x18258DB30", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x258D990", Offset = "0x258BF90", VA = "0x18258D990", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x258DCC0", Offset = "0x258C2C0", VA = "0x18258DCC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
