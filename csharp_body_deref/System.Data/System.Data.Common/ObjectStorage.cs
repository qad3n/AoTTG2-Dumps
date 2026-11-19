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
		[Address(RVA = "0x5F259D0", Offset = "0x5F249D0", VA = "0x5F259D0")]
		private TempAssemblyComparer()
		{
		}

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x5F259E0", Offset = "0x5F249E0", VA = "0x5F259E0", Slot = "4")]
		public bool Equals(KeyValuePair<Type, XmlRootAttribute> x, KeyValuePair<Type, XmlRootAttribute> y)
		{
			return default(bool);
		}

		[Token(Token = "0x6000B33")]
		[Address(RVA = "0x5F25B00", Offset = "0x5F24B00", VA = "0x5F25B00", Slot = "5")]
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
	[Address(RVA = "0x5F224D0", Offset = "0x5F214D0", VA = "0x5F224D0")]
	internal ObjectStorage(DataColumn column, Type type)
	{
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x5F22650", Offset = "0x5F21650", VA = "0x5F22650", Slot = "4")]
	public override object Aggregate(int[] records, AggregateType kind)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x5F22680", Offset = "0x5F21680", VA = "0x5F22680", Slot = "5")]
	public override int Compare(int recordNo1, int recordNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x5F22C60", Offset = "0x5F21C60", VA = "0x5F22C60", Slot = "6")]
	public override int CompareValueTo(int recordNo1, object value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x5F22E30", Offset = "0x5F21E30", VA = "0x5F22E30")]
	private int CompareTo(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x5F22830", Offset = "0x5F21830", VA = "0x5F22830")]
	private int CompareWithFamilies(object valueNo1, object valueNo2)
	{
		return default(int);
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x5F23060", Offset = "0x5F22060", VA = "0x5F23060", Slot = "8")]
	public override void Copy(int recordNo1, int recordNo2)
	{
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x5F230E0", Offset = "0x5F220E0", VA = "0x5F230E0", Slot = "9")]
	public override object Get(int recordNo)
	{
		return null;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x5F22F90", Offset = "0x5F21F90", VA = "0x5F22F90")]
	private Families GetFamily(Type dataType)
	{
		return default(Families);
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x5F23110", Offset = "0x5F22110", VA = "0x5F23110", Slot = "11")]
	public override bool IsNull(int record)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x5F23140", Offset = "0x5F22140", VA = "0x5F23140", Slot = "12")]
	public override void Set(int recordNo, object value)
	{
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x5F23890", Offset = "0x5F22890", VA = "0x5F23890", Slot = "13")]
	public override void SetCapacity(int capacity)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x5F23940", Offset = "0x5F22940", VA = "0x5F23940", Slot = "14")]
	public override object ConvertXmlToObject(string s)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x5F23F20", Offset = "0x5F22F20", VA = "0x5F23F20", Slot = "15")]
	public override object ConvertXmlToObject(XmlReader xmlReader, XmlRootAttribute xmlAttrib)
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x5F24CC0", Offset = "0x5F23CC0", VA = "0x5F24CC0", Slot = "16")]
	public override string ConvertObjectToXml(object value)
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x5F251E0", Offset = "0x5F241E0", VA = "0x5F251E0", Slot = "17")]
	public override void ConvertObjectToXml(object value, XmlWriter xmlWriter, XmlRootAttribute xmlAttrib)
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x5F25350", Offset = "0x5F24350", VA = "0x5F25350", Slot = "18")]
	protected override object GetEmptyStorage(int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x5F25390", Offset = "0x5F24390", VA = "0x5F25390", Slot = "19")]
	protected override void CopyValue(int record, object store, BitArray nullbits, int storeIndex)
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x5F255D0", Offset = "0x5F245D0", VA = "0x5F255D0", Slot = "20")]
	protected override void SetStorage(object store, BitArray nullbits)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x5F257D0", Offset = "0x5F247D0", VA = "0x5F257D0")]
	internal static void VerifyIDynamicMetaObjectProvider(Type type)
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x5F23EB0", Offset = "0x5F22EB0", VA = "0x5F23EB0")]
	internal static XmlSerializer GetXmlSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x5F245E0", Offset = "0x5F235E0", VA = "0x5F245E0")]
	internal static XmlSerializer GetXmlSerializer(Type type, XmlRootAttribute attribute)
	{
		return null;
	}
}
