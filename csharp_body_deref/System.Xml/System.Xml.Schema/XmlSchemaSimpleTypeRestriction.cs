using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000259")]
public class XmlSchemaSimpleTypeRestriction : XmlSchemaSimpleTypeContent
{
	[Token(Token = "0x4000C05")]
	[FieldOffset(Offset = "0x50")]
	private XmlQualifiedName baseTypeName;

	[Token(Token = "0x4000C06")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaSimpleType baseType;

	[Token(Token = "0x4000C07")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaObjectCollection facets;

	[Token(Token = "0x17000686")]
	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		[Token(Token = "0x6001773")]
		[Address(RVA = "0x43F5720", Offset = "0x43F5720", VA = "0x43F5720")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001774")]
		[Address(RVA = "0x43F5730", Offset = "0x43F5730", VA = "0x43F5730")]
		set
		{
		}
	}

	[Token(Token = "0x17000687")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType BaseType
	{
		[Token(Token = "0x6001775")]
		[Address(RVA = "0x43F57C0", Offset = "0x43F57C0", VA = "0x43F57C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001776")]
		[Address(RVA = "0x43F57D0", Offset = "0x43F57D0", VA = "0x43F57D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000688")]
	[XmlElement("totalDigits", typeof(XmlSchemaTotalDigitsFacet))]
	[XmlElement("length", typeof(XmlSchemaLengthFacet))]
	[XmlElement("maxInclusive", typeof(XmlSchemaMaxInclusiveFacet))]
	[XmlElement("minLength", typeof(XmlSchemaMinLengthFacet))]
	[XmlElement("maxExclusive", typeof(XmlSchemaMaxExclusiveFacet))]
	[XmlElement("minExclusive", typeof(XmlSchemaMinExclusiveFacet))]
	[XmlElement("enumeration", typeof(XmlSchemaEnumerationFacet))]
	[XmlElement("pattern", typeof(XmlSchemaPatternFacet))]
	[XmlElement("whiteSpace", typeof(XmlSchemaWhiteSpaceFacet))]
	[XmlElement("fractionDigits", typeof(XmlSchemaFractionDigitsFacet))]
	[XmlElement("minInclusive", typeof(XmlSchemaMinInclusiveFacet))]
	[XmlElement("maxLength", typeof(XmlSchemaMaxLengthFacet))]
	public XmlSchemaObjectCollection Facets
	{
		[Token(Token = "0x6001777")]
		[Address(RVA = "0x43F57E0", Offset = "0x43F57E0", VA = "0x43F57E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x43F57F0", Offset = "0x43F57F0", VA = "0x43F57F0", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x43F5890", Offset = "0x43F5890", VA = "0x43F5890")]
	public XmlSchemaSimpleTypeRestriction()
	{
	}
}
