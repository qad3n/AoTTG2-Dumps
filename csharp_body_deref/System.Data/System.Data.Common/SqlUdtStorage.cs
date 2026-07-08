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
	[Address(RVA = "0x4319C20", Offset = "0x4319C20", VA = "0x4319C20")]
	public SqlUdtStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4319D90", Offset = "0x4319D90", VA = "0x4319D90")]
	private SqlUdtStorage(DataColumn column, Type type, object nullValue)
	{
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4319C80", Offset = "0x4319C80", VA = "0x4319C80")]
	internal static object GetStaticNullForUdtType(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4319F00", Offset = "0x4319F00", VA = "0x4319F00", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x431A000", Offset = "0x431A000", VA = "0x431A000", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x431A030", Offset = "0x431A030", VA = "0x431A030", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x431A070", Offset = "0x431A070", VA = "0x431A070", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x431A330", Offset = "0x431A330", VA = "0x431A330", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x431A3C0", Offset = "0x431A3C0", VA = "0x431A3C0", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x431A3F0", Offset = "0x431A3F0", VA = "0x431A3F0", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x431A5A0", Offset = "0x431A5A0", VA = "0x431A5A0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x431A660", Offset = "0x431A660", VA = "0x431A660", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x431A9C0", Offset = "0x431A9C0", VA = "0x431A9C0", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x431AC60", Offset = "0x431AC60", VA = "0x431AC60", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x431AFB0", Offset = "0x431AFB0", VA = "0x431AFB0", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x431B110", Offset = "0x431B110", VA = "0x431B110", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x431B150", Offset = "0x431B150", VA = "0x431B150", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x431B2B0", Offset = "0x431B2B0", VA = "0x431B2B0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}
}
