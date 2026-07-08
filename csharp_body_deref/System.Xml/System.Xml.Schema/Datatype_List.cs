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
		[Address(RVA = "0x451E820", Offset = "0x451E820", VA = "0x451E820", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000446")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x6001084")]
		[Address(RVA = "0x451E840", Offset = "0x451E840", VA = "0x451E840", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000447")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001085")]
		[Address(RVA = "0x451E870", Offset = "0x451E870", VA = "0x451E870", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000448")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001086")]
		[Address(RVA = "0x451E8A0", Offset = "0x451E8A0", VA = "0x451E8A0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000449")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001087")]
		[Address(RVA = "0x451E910", Offset = "0x451E910", VA = "0x451E910", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700044A")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001088")]
		[Address(RVA = "0x451E940", Offset = "0x451E940", VA = "0x451E940", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x6001080")]
	[Address(RVA = "0x451E1B0", Offset = "0x451E1B0", VA = "0x451E1B0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x6001081")]
	[Address(RVA = "0x451D030", Offset = "0x451D030", VA = "0x451D030")]
	internal Datatype_List(DatatypeImplementation type, int minListSize)
	{
	}

	[Token(Token = "0x6001082")]
	[Address(RVA = "0x451E550", Offset = "0x451E550", VA = "0x451E550", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x451E950", Offset = "0x451E950", VA = "0x451E950", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver namespaceResolver, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x451F260", Offset = "0x451F260", VA = "0x451F260", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
