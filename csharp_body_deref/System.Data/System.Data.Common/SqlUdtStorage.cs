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

[Token(Token = "0x20000E4")]
internal sealed class SqlUdtStorage : DataStorage
{
	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x50")]
	private object[] _values;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _implementsIXmlSerializable;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0x59")]
	private readonly bool _implementsIComparable;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConcurrentDictionary<Type, object> s_typeToNull;

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x5F52F50", Offset = "0x5F51F50", VA = "0x5F52F50")]
	public SqlUdtStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x5F530C0", Offset = "0x5F520C0", VA = "0x5F530C0")]
	private SqlUdtStorage(DataColumn column, Type type, object nullValue)
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x5F52FB0", Offset = "0x5F51FB0", VA = "0x5F52FB0")]
	internal static object GetStaticNullForUdtType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x5F53230", Offset = "0x5F52230", VA = "0x5F53230", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x5F53330", Offset = "0x5F52330", VA = "0x5F53330", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x5F53360", Offset = "0x5F52360", VA = "0x5F53360", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x5F533A0", Offset = "0x5F523A0", VA = "0x5F533A0", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x5F53660", Offset = "0x5F52660", VA = "0x5F53660", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x5F536F0", Offset = "0x5F526F0", VA = "0x5F536F0", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x5F53720", Offset = "0x5F52720", VA = "0x5F53720", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x5F538B0", Offset = "0x5F528B0", VA = "0x5F538B0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x5F53970", Offset = "0x5F52970", VA = "0x5F53970", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x5F53C70", Offset = "0x5F52C70", VA = "0x5F53C70", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x5F53F10", Offset = "0x5F52F10", VA = "0x5F53F10", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x5F541F0", Offset = "0x5F531F0", VA = "0x5F541F0", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x5F54350", Offset = "0x5F53350", VA = "0x5F54350", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x5F54390", Offset = "0x5F53390", VA = "0x5F54390", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x5F544F0", Offset = "0x5F534F0", VA = "0x5F544F0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
