// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.Int16Storage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CF")]
internal sealed class Int16Storage : DataStorage
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x50")]
	private short[] _values;

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x258CE20", Offset = "0x258B420", VA = "0x18258CE20")]
	internal Int16Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x258BED0", Offset = "0x258A4D0", VA = "0x18258BED0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x258C750", Offset = "0x258AD50", VA = "0x18258C750", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x258C680", Offset = "0x258AC80", VA = "0x18258C680", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x258C840", Offset = "0x258AE40", VA = "0x18258C840", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x2583790", Offset = "0x2581D90", VA = "0x182583790", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x258CAE0", Offset = "0x258B0E0", VA = "0x18258CAE0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x258CCF0", Offset = "0x258B2F0", VA = "0x18258CCF0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x258CB50", Offset = "0x258B150", VA = "0x18258CB50", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x258C930", Offset = "0x258AF30", VA = "0x18258C930", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x258C7C0", Offset = "0x258ADC0", VA = "0x18258C7C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x258CAA0", Offset = "0x258B0A0", VA = "0x18258CAA0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x258C990", Offset = "0x258AF90", VA = "0x18258C990", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x258CC30", Offset = "0x258B230", VA = "0x18258CC30", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
