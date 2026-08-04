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
		[Address(RVA = "0x4732870", Offset = "0x4732870", VA = "0x4732870")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175D")]
		[Address(RVA = "0x4732880", Offset = "0x4732880", VA = "0x4732880")]
		set
		{
		}
	}

	[Token(Token = "0x1700067E")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType BaseType
	{
		[Token(Token = "0x600175E")]
		[Address(RVA = "0x4732910", Offset = "0x4732910", VA = "0x4732910")]
		get
		{
			return null;
		}
		[Token(Token = "0x600175F")]
		[Address(RVA = "0x4732920", Offset = "0x4732920", VA = "0x4732920")]
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
		[Address(RVA = "0x4732930", Offset = "0x4732930", VA = "0x4732930")]
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
		[Address(RVA = "0x4732940", Offset = "0x4732940", VA = "0x4732940")]
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
		[Address(RVA = "0x4732950", Offset = "0x4732950", VA = "0x4732950")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001763")]
		[Address(RVA = "0x4732960", Offset = "0x4732960", VA = "0x4732960")]
		set
		{
		}
	}

	[Token(Token = "0x6001764")]
	[Address(RVA = "0x4732970", Offset = "0x4732970", VA = "0x4732970")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x6001765")]
	[Address(RVA = "0x4732980", Offset = "0x4732980", VA = "0x4732980")]
	public XmlSchemaSimpleContentRestriction()
	{
	}
}
