// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.StringStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000E6")]
internal sealed class StringStorage : DataStorage
{
	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0x50")]
	private string[] _values;

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x25ABD80", Offset = "0x25AA380", VA = "0x1825ABD80")]
	public StringStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x25AB5F0", Offset = "0x25A9BF0", VA = "0x1825AB5F0", Slot = "4")]
	public override object Aggregate(int[] recordNos, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x25AB900", Offset = "0x25A9F00", VA = "0x1825AB900", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x25AB870", Offset = "0x25A9E70", VA = "0x1825AB870", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x25AB9B0", Offset = "0x25A9FB0", VA = "0x1825AB9B0", Slot = "7")]
	public override object ConvertValue(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x25929D0", Offset = "0x2590FD0", VA = "0x1825929D0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x255EF60", Offset = "0x255D560", VA = "0x18255EF60", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x25ABB40", Offset = "0x25AA140", VA = "0x1825ABB40", Slot = "10")]
	public override int GetStringLength(int record)
	{
		return default(int);
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x255EFA0", Offset = "0x255D5A0", VA = "0x18255EFA0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x25ABCF0", Offset = "0x25AA2F0", VA = "0x1825ABCF0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x25ABB80", Offset = "0x25AA180", VA = "0x1825ABB80", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x25AB980", Offset = "0x25A9F80", VA = "0x1825AB980", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x25ABB00", Offset = "0x25AA100", VA = "0x1825ABB00", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x25AB9E0", Offset = "0x25A9FE0", VA = "0x1825AB9E0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x25ABC50", Offset = "0x25AA250", VA = "0x1825ABC50", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
