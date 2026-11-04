// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_List
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200018E")]
internal class Datatype_List : Datatype_anySimpleType
{
	[Token(Token = "0x400082E")]
	[FieldOffset(Offset = "0x38")]
	private DatatypeImplementation itemType;

	[Token(Token = "0x400082F")]
	[FieldOffset(Offset = "0x40")]
	private int minListSize;

	[Token(Token = "0x17000445")]
	public override Type ValueType
	{
		[Token(Token = "0x6001083")]
		[Address(RVA = "0x279A340", Offset = "0x2798940", VA = "0x18279A340", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000446")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001084")]
		[Address(RVA = "0x279A2D0", Offset = "0x27988D0", VA = "0x18279A2D0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000447")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x279A2A0", Offset = "0x27988A0", VA = "0x18279A2A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000448")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001086")]
		[Address(RVA = "0x279A240", Offset = "0x2798840", VA = "0x18279A240", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000449")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x279A300", Offset = "0x2798900", VA = "0x18279A300", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700044A")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x279A330", Offset = "0x2798930", VA = "0x18279A330", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x2799440", Offset = "0x2797A40", VA = "0x182799440", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x279A190", Offset = "0x2798790", VA = "0x18279A190")]
	internal Datatype_List(DatatypeImplementation type, int minListSize)
	{
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x2799190", Offset = "0x2797790", VA = "0x182799190", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x27997A0", Offset = "0x2797DA0", VA = "0x1827997A0", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x2799CF0", Offset = "0x27982F0", VA = "0x182799CF0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
