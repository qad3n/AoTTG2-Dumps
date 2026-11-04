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
	[Address(RVA = "0x25AB350", Offset = "0x25A9950", VA = "0x1825AB350")]
	public SqlUdtStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x25AB1F0", Offset = "0x25A97F0", VA = "0x1825AB1F0")]
	private SqlUdtStorage(DataColumn column, Type type, object nullValue)
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x25AAC00", Offset = "0x25A9200", VA = "0x1825AAC00")]
	internal static object GetStaticNullForUdtType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x25AAD20", Offset = "0x25A9320", VA = "0x1825AAD20", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x25A9F00", Offset = "0x25A8500", VA = "0x1825A9F00", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x25AA1C0", Offset = "0x25A87C0", VA = "0x1825AA1C0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x25A9F40", Offset = "0x25A8540", VA = "0x1825A9F40", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x25AAB20", Offset = "0x25A9120", VA = "0x1825AAB20", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x2592A60", Offset = "0x2591060", VA = "0x182592A60", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x25AAF50", Offset = "0x25A9550", VA = "0x1825AAF50", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x25AADD0", Offset = "0x25A93D0", VA = "0x1825AADD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x25AA760", Offset = "0x25A8D60", VA = "0x1825AA760", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x25AA520", Offset = "0x25A8B20", VA = "0x1825AA520", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x25AA300", Offset = "0x25A8900", VA = "0x1825AA300", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x25AA200", Offset = "0x25A8800", VA = "0x1825AA200", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x25AABC0", Offset = "0x25A91C0", VA = "0x1825AABC0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x25AA9A0", Offset = "0x25A8FA0", VA = "0x1825AA9A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x25AAEB0", Offset = "0x25A94B0", VA = "0x1825AAEB0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
