// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleTypeRestriction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x6039D90", Offset = "0x6038D90", VA = "0x6039D90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001774")]
		[Address(RVA = "0x6039DA0", Offset = "0x6038DA0", VA = "0x6039DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000687")]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	public XmlSchemaSimpleType BaseType
	{
		[Token(Token = "0x6001775")]
		[Address(RVA = "0x6039E30", Offset = "0x6038E30", VA = "0x6039E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001776")]
		[Address(RVA = "0x6039E40", Offset = "0x6038E40", VA = "0x6039E40")]
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
		[Address(RVA = "0x6039E50", Offset = "0x6038E50", VA = "0x6039E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x6039E60", Offset = "0x6038E60", VA = "0x6039E60", Slot = "13")]
	internal override XmlSchemaObject Clone()
	{
		return null;
	}

	[Token(Token = "0x6001779")]
	[Address(RVA = "0x6039F10", Offset = "0x6038F10", VA = "0x6039F10")]
	public XmlSchemaSimpleTypeRestriction()
	{
	}
}
