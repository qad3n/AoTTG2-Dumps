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

[Token(Token = "0x20000C1")]
internal sealed class ObjectStorage : DataStorage
{
	[Token(Token = "0x20000C2")]
	private enum Families
	{
		[Token(Token = "0x4000434")]
		DATETIME,
		[Token(Token = "0x4000435")]
		NUMBER,
		[Token(Token = "0x4000436")]
		STRING,
		[Token(Token = "0x4000437")]
		BOOLEAN,
		[Token(Token = "0x4000438")]
		ARRAY
	}

	[Token(Token = "0x20000C3")]
	private class TempAssemblyComparer : IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>>
	{
		[Token(Token = "0x4000439")]
		[FieldOffset(Offset = "0x0")]
		internal static readonly IEqualityComparer<KeyValuePair<Type, XmlRootAttribute>> s_default;

		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		private TempAssemblyComparer()
		{
		}

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x259D2C0", Offset = "0x259B8C0", VA = "0x18259D2C0", Slot = "4")]
		public bool Equals(KeyValuePair<Type, XmlRootAttribute> x, KeyValuePair<Type, XmlRootAttribute> y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x259D440", Offset = "0x259BA40", VA = "0x18259D440", Slot = "5")]
		public int GetHashCode(KeyValuePair<Type, XmlRootAttribute> obj)
		{
			return default(int);
		}
	}

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object s_defaultValue;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x50")]
	private object[] _values;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x58")]
	private readonly bool _implementsIXmlSerializable;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x8")]
	private static readonly object s_tempAssemblyCacheLock;

	[Token(Token = "0x4000431")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<KeyValuePair<Type, XmlRootAttribute>, XmlSerializer> s_tempAssemblyCache;

	[Token(Token = "0x4000432")]
	[FieldOffset(Offset = "0x18")]
	private static readonly XmlSerializerFactory s_serializerFactory;

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x255FF40", Offset = "0x255E540", VA = "0x18255FF40")]
	internal ObjectStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x255CB50", Offset = "0x255B150", VA = "0x18255CB50", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x255D240", Offset = "0x255B840", VA = "0x18255D240", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x255CCD0", Offset = "0x255B2D0", VA = "0x18255CCD0", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x255CB90", Offset = "0x255B190", VA = "0x18255CB90")]
	private int CompareTo(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x255CE50", Offset = "0x255B450", VA = "0x18255CE50")]
	private int CompareWithFamilies(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x255E690", Offset = "0x255CC90", VA = "0x18255E690", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x255EF60", Offset = "0x255D560", VA = "0x18255EF60", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x255E760", Offset = "0x255CD60", VA = "0x18255E760")]
	private Families GetFamily(Type dataType)
	{
		return default(Families);
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x255EFA0", Offset = "0x255D5A0", VA = "0x18255EFA0", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x255F300", Offset = "0x255D900", VA = "0x18255F300", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x255EFD0", Offset = "0x255D5D0", VA = "0x18255EFD0", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x255D9D0", Offset = "0x255BFD0", VA = "0x18255D9D0", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x255DE10", Offset = "0x255C410", VA = "0x18255DE10", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x255D490", Offset = "0x255BA90", VA = "0x18255D490", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x255D360", Offset = "0x255B960", VA = "0x18255D360", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x255E720", Offset = "0x255CD20", VA = "0x18255E720", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x255E420", Offset = "0x255CA20", VA = "0x18255E420", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x255F0A0", Offset = "0x255D6A0", VA = "0x18255F0A0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x255FD20", Offset = "0x255E320", VA = "0x18255FD20")]
	internal static void VerifyIDynamicMetaObjectProvider(Type type)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x255E8A0", Offset = "0x255CEA0", VA = "0x18255E8A0")]
	internal static XmlSerializer GetXmlSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x255E920", Offset = "0x255CF20", VA = "0x18255E920")]
	internal static XmlSerializer GetXmlSerializer(Type type, XmlRootAttribute attribute)
	{
		return null;
	}
}
