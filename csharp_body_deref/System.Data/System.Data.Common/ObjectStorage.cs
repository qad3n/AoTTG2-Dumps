// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.Common.ObjectStorage
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4637030", Offset = "0x4637030", VA = "0x4637030")]
		private TempAssemblyComparer()
		{
		}

		[Token(Token = "0x6000BF2")]
		[Address(RVA = "0x4637040", Offset = "0x4637040", VA = "0x4637040", Slot = "4")]
		public bool Equals(KeyValuePair<Type, XmlRootAttribute> x, KeyValuePair<Type, XmlRootAttribute> y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000BF3")]
		[Address(RVA = "0x4637160", Offset = "0x4637160", VA = "0x4637160", Slot = "5")]
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
	[Address(RVA = "0x46255F0", Offset = "0x46255F0", VA = "0x46255F0")]
	internal ObjectStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4631D20", Offset = "0x4631D20", VA = "0x4631D20", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4631D50", Offset = "0x4631D50", VA = "0x4631D50", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4632370", Offset = "0x4632370", VA = "0x4632370", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4632540", Offset = "0x4632540", VA = "0x4632540")]
	private int CompareTo(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4631F00", Offset = "0x4631F00", VA = "0x4631F00")]
	private int CompareWithFamilies(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4632810", Offset = "0x4632810", VA = "0x4632810", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4632890", Offset = "0x4632890", VA = "0x4632890", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4632730", Offset = "0x4632730", VA = "0x4632730")]
	private Families GetFamily(Type dataType)
	{
		return default(Families);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x46328C0", Offset = "0x46328C0", VA = "0x46328C0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x46328F0", Offset = "0x46328F0", VA = "0x46328F0", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x46330D0", Offset = "0x46330D0", VA = "0x46330D0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x4633180", Offset = "0x4633180", VA = "0x4633180", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x46337C0", Offset = "0x46337C0", VA = "0x46337C0", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x4636210", Offset = "0x4636210", VA = "0x4636210", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4636950", Offset = "0x4636950", VA = "0x4636950", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4636AC0", Offset = "0x4636AC0", VA = "0x4636AC0", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4636B00", Offset = "0x4636B00", VA = "0x4636B00", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4636D40", Offset = "0x4636D40", VA = "0x4636D40", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x46270C0", Offset = "0x46270C0", VA = "0x46270C0")]
	internal static void VerifyIDynamicMetaObjectProvider(Type type)
	{
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4633750", Offset = "0x4633750", VA = "0x4633750")]
	internal static XmlSerializer GetXmlSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4635A60", Offset = "0x4635A60", VA = "0x4635A60")]
	internal static XmlSerializer GetXmlSerializer(Type type, XmlRootAttribute attribute)
	{
		return null;
	}
}
