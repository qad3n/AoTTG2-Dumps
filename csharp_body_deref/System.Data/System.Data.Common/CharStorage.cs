// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.CharStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000BB")]
internal sealed class CharStorage : DataStorage
{
	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0x50")]
	private char[] _values;

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4623BC0", Offset = "0x4623BC0", VA = "0x4623BC0")]
	internal CharStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x4623CE0", Offset = "0x4623CE0", VA = "0x4623CE0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4624130", Offset = "0x4624130", VA = "0x4624130", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4624200", Offset = "0x4624200", VA = "0x4624200", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x46242F0", Offset = "0x46242F0", VA = "0x46242F0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x4624430", Offset = "0x4624430", VA = "0x4624430", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x46244A0", Offset = "0x46244A0", VA = "0x46244A0", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x4624510", Offset = "0x4624510", VA = "0x4624510", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x46246F0", Offset = "0x46246F0", VA = "0x46246F0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4624810", Offset = "0x4624810", VA = "0x4624810", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x4624880", Offset = "0x4624880", VA = "0x4624880", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x4624910", Offset = "0x4624910", VA = "0x4624910", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4624950", Offset = "0x4624950", VA = "0x4624950", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4624A50", Offset = "0x4624A50", VA = "0x4624A50", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
