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
	[Address(RVA = "0x5F2C410", Offset = "0x5F2B410", VA = "0x5F2C410")]
	internal Int32Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x5F34E80", Offset = "0x5F33E80", VA = "0x5F34E80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x5F35750", Offset = "0x5F34750", VA = "0x5F35750", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x5F357F0", Offset = "0x5F347F0", VA = "0x5F357F0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x5F358B0", Offset = "0x5F348B0", VA = "0x5F358B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x5F359F0", Offset = "0x5F349F0", VA = "0x5F359F0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x5F35A60", Offset = "0x5F34A60", VA = "0x5F35A60", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x5F35AD0", Offset = "0x5F34AD0", VA = "0x5F35AD0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x5F35C60", Offset = "0x5F34C60", VA = "0x5F35C60", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x5F35D80", Offset = "0x5F34D80", VA = "0x5F35D80", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x5F35DF0", Offset = "0x5F34DF0", VA = "0x5F35DF0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x5F35E80", Offset = "0x5F34E80", VA = "0x5F35E80", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x5F35EC0", Offset = "0x5F34EC0", VA = "0x5F35EC0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x5F35FC0", Offset = "0x5F34FC0", VA = "0x5F35FC0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
