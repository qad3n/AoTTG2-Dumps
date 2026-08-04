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

[Token(Token = "0x20000C4")]
internal sealed class Int64Storage : DataStorage
{
	[Token(Token = "0x4000469")]
	[FieldOffset(Offset = "0x50")]
	private long[] _values;

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4625AD0", Offset = "0x4625AD0", VA = "0x4625AD0")]
	internal Int64Storage(DataColumn column)
	{
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x4630780", Offset = "0x4630780", VA = "0x4630780", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x4631400", Offset = "0x4631400", VA = "0x4631400", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x46314A0", Offset = "0x46314A0", VA = "0x46314A0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4631570", Offset = "0x4631570", VA = "0x4631570", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x46316A0", Offset = "0x46316A0", VA = "0x46316A0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x4631710", Offset = "0x4631710", VA = "0x4631710", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x4631780", Offset = "0x4631780", VA = "0x4631780", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4631910", Offset = "0x4631910", VA = "0x4631910", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x4631A30", Offset = "0x4631A30", VA = "0x4631A30", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x4631AA0", Offset = "0x4631AA0", VA = "0x4631AA0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4631B30", Offset = "0x4631B30", VA = "0x4631B30", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4631B70", Offset = "0x4631B70", VA = "0x4631B70", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4631C70", Offset = "0x4631C70", VA = "0x4631C70", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
