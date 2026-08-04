// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlBytesStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Data.SqlTypes;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000CC")]
internal sealed class SqlBytesStorage : DataStorage
{
	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x50")]
	private SqlBytes[] _values;

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x4626390", Offset = "0x4626390", VA = "0x4626390")]
	public SqlBytesStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x463FFF0", Offset = "0x463FFF0", VA = "0x463FFF0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x4640210", Offset = "0x4640210", VA = "0x4640210", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x4640220", Offset = "0x4640220", VA = "0x4640220", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x4640230", Offset = "0x4640230", VA = "0x4640230", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x4640270", Offset = "0x4640270", VA = "0x4640270", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x46402A0", Offset = "0x46402A0", VA = "0x46402A0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x46402D0", Offset = "0x46402D0", VA = "0x46402D0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x4640400", Offset = "0x4640400", VA = "0x4640400", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x46404B0", Offset = "0x46404B0", VA = "0x46404B0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x46407A0", Offset = "0x46407A0", VA = "0x46407A0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x4640A80", Offset = "0x4640A80", VA = "0x4640A80", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4640AC0", Offset = "0x4640AC0", VA = "0x4640AC0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x4640BE0", Offset = "0x4640BE0", VA = "0x4640BE0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
