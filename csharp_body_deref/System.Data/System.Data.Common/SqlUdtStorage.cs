// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.SqlUdtStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Concurrent;
using System.Runtime.CompilerServices;
using System.Xml;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000DA")]
internal sealed class SqlUdtStorage : DataStorage
{
	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x50")]
	private object[] _values;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _implementsIXmlSerializable;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x59")]
	private readonly bool _implementsIComparable;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, object> s_typeToNull;

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x4657380", Offset = "0x4657380", VA = "0x4657380")]
	public SqlUdtStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x46574F0", Offset = "0x46574F0", VA = "0x46574F0")]
	private SqlUdtStorage(DataColumn column, Type type, object nullValue)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x46573E0", Offset = "0x46573E0", VA = "0x46573E0")]
	internal static object GetStaticNullForUdtType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4657660", Offset = "0x4657660", VA = "0x4657660", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x4657760", Offset = "0x4657760", VA = "0x4657760", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x4657790", Offset = "0x4657790", VA = "0x4657790", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x46577D0", Offset = "0x46577D0", VA = "0x46577D0", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4657A90", Offset = "0x4657A90", VA = "0x4657A90", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x4657B20", Offset = "0x4657B20", VA = "0x4657B20", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x4657B50", Offset = "0x4657B50", VA = "0x4657B50", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4657D00", Offset = "0x4657D00", VA = "0x4657D00", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4657DC0", Offset = "0x4657DC0", VA = "0x4657DC0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4658120", Offset = "0x4658120", VA = "0x4658120", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x46583C0", Offset = "0x46583C0", VA = "0x46583C0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x4658710", Offset = "0x4658710", VA = "0x4658710", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x4658870", Offset = "0x4658870", VA = "0x4658870", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x46588B0", Offset = "0x46588B0", VA = "0x46588B0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4658A10", Offset = "0x4658A10", VA = "0x4658A10", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
