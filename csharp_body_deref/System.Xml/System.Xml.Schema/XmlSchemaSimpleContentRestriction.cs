using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000255")]
public class XmlSchemaSimpleContentRestriction : XmlSchemaContent
{
	[Token(Token = "0x4000BFC")]
	[FieldOffset(Offset = "0x50")]
	private XmlQualifiedName baseTypeName;

	[Token(Token = "0x4000BFD")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaSimpleType baseType;

	[Token(Token = "0x4000BFE")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectCollection facets;

	[Token(Token = "0x4000BFF")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000C00")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x1700067D")]
	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		[Token(Token = "0x600175C")]
		[Address(RVA = "0x43F5110", Offset = "0x43F5110", VA = "0x43F5110")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175D")]
		[Address(RVA = "0x43F5120", Offset = "0x43F5120", VA = "0x43F5120")]
		set
		{
		}
	}

	[Token(Token = "0x1700067E")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType BaseType
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x43F51B0", Offset = "0x43F51B0", VA = "0x43F51B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175F")]
		[Address(RVA = "0x43F51C0", Offset = "0x43F51C0", VA = "0x43F51C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700067F")]
	[XmlElement("minLength", typeof(XmlSchemaMinLengthFacet))]
	[XmlElement("whiteSpace", typeof(XmlSchemaWhiteSpaceFacet))]
	[XmlElement("fractionDigits", typeof(XmlSchemaFractionDigitsFacet))]
	[XmlElement("totalDigits", typeof(XmlSchemaTotalDigitsFacet))]
	[XmlElement("minExclusive", typeof(XmlSchemaMinExclusiveFacet))]
	[XmlElement("minInclusive", typeof(XmlSchemaMinInclusiveFacet))]
	[XmlElement("maxExclusive", typeof(XmlSchemaMaxExclusiveFacet))]
	[XmlElement("maxInclusive", typeof(XmlSchemaMaxInclusiveFacet))]
	[XmlElement("enumeration", typeof(XmlSchemaEnumerationFacet))]
	[XmlElement("length", typeof(XmlSchemaLengthFacet))]
	[XmlElement("pattern", typeof(XmlSchemaPatternFacet))]
	[XmlElement("maxLength", typeof(XmlSchemaMaxLengthFacet))]
	public XmlSchemaObjectCollection Facets
	{
		[Token(Token = "0x6001760")]
		[Address(RVA = "0x43F51D0", Offset = "0x43F51D0", VA = "0x43F51D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000680")]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x6001761")]
		[Address(RVA = "0x43F51E0", Offset = "0x43F51E0", VA = "0x43F51E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000681")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001762")]
		[Address(RVA = "0x43F51F0", Offset = "0x43F51F0", VA = "0x43F51F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001763")]
		[Address(RVA = "0x43F5200", Offset = "0x43F5200", VA = "0x43F5200")]
		set
		{
		}
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x43F5210", Offset = "0x43F5210", VA = "0x43F5210")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x43F5220", Offset = "0x43F5220", VA = "0x43F5220")]
	public XmlSchemaSimpleContentRestriction()
	{
	}
}
