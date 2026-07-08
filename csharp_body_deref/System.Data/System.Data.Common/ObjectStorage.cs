using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Xml;
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Data.Common;

[Token(Token = "0x20000C5")]
internal sealed class ObjectStorage : DataStorage
{
	[Token(Token = "0x20000C6")]
	private enum Families
	{
		[Token(Token = "0x4000471")]
		DATETIME,
		[Token(Token = "0x4000472")]
		NUMBER,
		[Token(Token = "0x4000473")]
		STRING,
		[Token(Token = "0x4000474")]
		BOOLEAN,
		[Token(Token = "0x4000475")]
		ARRAY
	}

	[Token(Token = "0x20000C7")]
	private class TempAssemblyComparer : IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>>
	{
		[Token(Token = "0x4000476")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>> s_default;

		[Token(Token = "0x6000BF1")]
		[Address(RVA = "0x42F98D0", Offset = "0x42F98D0", VA = "0x42F98D0")]
		private TempAssemblyComparer()
		{
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x42F98E0", Offset = "0x42F98E0", VA = "0x42F98E0", Slot = "4")]
		public bool Equals(KeyValuePair<Type, XmlRootAttribute> x, KeyValuePair<Type, XmlRootAttribute> y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x42F9A00", Offset = "0x42F9A00", VA = "0x42F9A00", Slot = "5")]
		public int GetHashCode(KeyValuePair<Type, XmlRootAttribute> obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400046A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_defaultValue;

	[Token(Token = "0x400046B")]
	[FieldOffset(Offset = "0x50")]
	private object[] _values;

	[Token(Token = "0x400046C")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _implementsIXmlSerializable;

	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_tempAssemblyCacheLock;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<KeyValuePair<Type, XmlRootAttribute>, XmlSerializer> s_tempAssemblyCache;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x18")]
	private static readonly XmlSerializerFactory s_serializerFactory;

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x42E7E90", Offset = "0x42E7E90", VA = "0x42E7E90")]
	internal ObjectStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x42F45C0", Offset = "0x42F45C0", VA = "0x42F45C0", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x42F45F0", Offset = "0x42F45F0", VA = "0x42F45F0", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x42F4C10", Offset = "0x42F4C10", VA = "0x42F4C10", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x42F4DE0", Offset = "0x42F4DE0", VA = "0x42F4DE0")]
	private int CompareTo(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x42F47A0", Offset = "0x42F47A0", VA = "0x42F47A0")]
	private int CompareWithFamilies(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x42F50B0", Offset = "0x42F50B0", VA = "0x42F50B0", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x42F5130", Offset = "0x42F5130", VA = "0x42F5130", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x42F4FD0", Offset = "0x42F4FD0", VA = "0x42F4FD0")]
	private Families GetFamily(Type dataType)
	{
		return default(Families);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x42F5160", Offset = "0x42F5160", VA = "0x42F5160", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x42F5190", Offset = "0x42F5190", VA = "0x42F5190", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x42F5970", Offset = "0x42F5970", VA = "0x42F5970", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x42F5A20", Offset = "0x42F5A20", VA = "0x42F5A20", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x42F6060", Offset = "0x42F6060", VA = "0x42F6060", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x42F8AB0", Offset = "0x42F8AB0", VA = "0x42F8AB0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x42F91F0", Offset = "0x42F91F0", VA = "0x42F91F0", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x42F9360", Offset = "0x42F9360", VA = "0x42F9360", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x42F93A0", Offset = "0x42F93A0", VA = "0x42F93A0", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x42F95E0", Offset = "0x42F95E0", VA = "0x42F95E0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x42E9960", Offset = "0x42E9960", VA = "0x42E9960")]
	internal static void VerifyIDynamicMetaObjectProvider(Type type)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x42F5FF0", Offset = "0x42F5FF0", VA = "0x42F5FF0")]
	internal static XmlSerializer GetXmlSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x42F8300", Offset = "0x42F8300", VA = "0x42F8300")]
	internal static XmlSerializer GetXmlSerializer(Type type, XmlRootAttribute attribute)
	{
		return null;
	}
}
