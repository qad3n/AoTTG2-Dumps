// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleContentRestriction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x6039770", Offset = "0x6038770", VA = "0x6039770")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175D")]
		[Address(RVA = "0x6039780", Offset = "0x6038780", VA = "0x6039780")]
		set
		{
		}
	}

	[Token(Token = "0x1700067E")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType BaseType
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x6039810", Offset = "0x6038810", VA = "0x6039810")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175F")]
		[Address(RVA = "0x6039820", Offset = "0x6038820", VA = "0x6039820")]
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
		[Address(RVA = "0x6039830", Offset = "0x6038830", VA = "0x6039830")]
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
		[Address(RVA = "0x6039840", Offset = "0x6038840", VA = "0x6039840")]
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
		[Address(RVA = "0x6039850", Offset = "0x6038850", VA = "0x6039850")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001763")]
		[Address(RVA = "0x6039860", Offset = "0x6038860", VA = "0x6039860")]
		set
		{
		}
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x6039870", Offset = "0x6038870", VA = "0x6039870")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x6039880", Offset = "0x6038880", VA = "0x6039880")]
	public XmlSchemaSimpleContentRestriction()
	{
	}
}
