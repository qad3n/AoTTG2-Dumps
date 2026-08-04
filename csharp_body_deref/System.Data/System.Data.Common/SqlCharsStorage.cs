// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlCharsStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CD")]
internal sealed class SqlCharsStorage : DataStorage
{
	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x50")]
	private SqlChars[] _values;

	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x4626460", Offset = "0x4626460", VA = "0x4626460")]
	public SqlCharsStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4640C80", Offset = "0x4640C80", VA = "0x4640C80", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4640EA0", Offset = "0x4640EA0", VA = "0x4640EA0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4640EB0", Offset = "0x4640EB0", VA = "0x4640EB0", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x4640EC0", Offset = "0x4640EC0", VA = "0x4640EC0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x4640F00", Offset = "0x4640F00", VA = "0x4640F00", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x4640F30", Offset = "0x4640F30", VA = "0x4640F30", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4640F60", Offset = "0x4640F60", VA = "0x4640F60", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x4641090", Offset = "0x4641090", VA = "0x4641090", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4641140", Offset = "0x4641140", VA = "0x4641140", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4641450", Offset = "0x4641450", VA = "0x4641450", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x4641730", Offset = "0x4641730", VA = "0x4641730", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x4641770", Offset = "0x4641770", VA = "0x4641770", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x4641890", Offset = "0x4641890", VA = "0x4641890", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
