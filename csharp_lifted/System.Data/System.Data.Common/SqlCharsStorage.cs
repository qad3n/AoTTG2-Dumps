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

[Token(Token = "0x20000D7")]
internal sealed class SqlCharsStorage : DataStorage
{
	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x50")]
	private SqlChars[] _values;

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x5F2CEC0", Offset = "0x5F2BEC0", VA = "0x5F2CEC0")]
	public SqlCharsStorage(DataColumn column)
	{
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x5F41140", Offset = "0x5F40140", VA = "0x5F41140", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x5F41310", Offset = "0x5F40310", VA = "0x5F41310", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x5F41320", Offset = "0x5F40320", VA = "0x5F41320", Slot = "6")]
	public override int CompareValueTo(int recordNo, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x5F41330", Offset = "0x5F40330", VA = "0x5F41330", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x5F41370", Offset = "0x5F40370", VA = "0x5F41370", Slot = "9")]
	public override object Get(int record)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x5F413A0", Offset = "0x5F403A0", VA = "0x5F413A0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x5F413D0", Offset = "0x5F403D0", VA = "0x5F413D0", Slot = "12")]
	public override void Set(int record, object value)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x5F414E0", Offset = "0x5F404E0", VA = "0x5F414E0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x5F41590", Offset = "0x5F40590", VA = "0x5F41590", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x5F41850", Offset = "0x5F40850", VA = "0x5F41850", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x5F41AB0", Offset = "0x5F40AB0", VA = "0x5F41AB0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x5F41AF0", Offset = "0x5F40AF0", VA = "0x5F41AF0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x5F41C10", Offset = "0x5F40C10", VA = "0x5F41C10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
