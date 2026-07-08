using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000190")]
internal class Datatype_anySimpleType : DatatypeImplementation
{
	[Token(Token = "0x4000833")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000834")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x17000451")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600109A")]
		[Address(RVA = "0x4520350", Offset = "0x4520350", VA = "0x4520350", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000452")]
	public override Type ValueType
	{
		[Token(Token = "0x600109B")]
		[Address(RVA = "0x45203C0", Offset = "0x45203C0", VA = "0x45203C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000453")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600109C")]
		[Address(RVA = "0x4520430", Offset = "0x4520430", VA = "0x4520430", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x17000454")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600109D")]
		[Address(RVA = "0x4520440", Offset = "0x4520440", VA = "0x4520440", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x600109E")]
		[Address(RVA = "0x45204B0", Offset = "0x45204B0", VA = "0x45204B0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x17000456")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x600109F")]
		[Address(RVA = "0x45204C0", Offset = "0x45204C0", VA = "0x45204C0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x17000457")]
	internal override XmlSchemaWhiteSpace BuiltInWhitespaceFacet
	{
		[Token(Token = "0x60010A0")]
		[Address(RVA = "0x45204D0", Offset = "0x45204D0", VA = "0x45204D0", Slot = "19")]
		get
		{
			return default(XmlSchemaWhiteSpace);
		}
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x45202E0", Offset = "0x45202E0", VA = "0x45202E0", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x60010A1")]
	[Address(RVA = "0x45204E0", Offset = "0x45204E0", VA = "0x45204E0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60010A2")]
	[Address(RVA = "0x4520540", Offset = "0x4520540", VA = "0x4520540", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60010A3")]
	[Address(RVA = "0x4518190", Offset = "0x4518190", VA = "0x4518190")]
	public Datatype_anySimpleType()
	{
	}
}
