// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaComplexContentRestriction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021C")]
public class XmlSchemaComplexContentRestriction : XmlSchemaContent
{
	[Token(Token = "0x4000B40")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaParticle particle;

	[Token(Token = "0x4000B41")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000B42")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName baseTypeName;

	[Token(Token = "0x170005D9")]
	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		[Token(Token = "0x60015AA")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x2667620", Offset = "0x2665C20", VA = "0x182667620")]
		set
		{
		}
	}

	[Token(Token = "0x170005DA")]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("all", typeof(XmlSchemaAll))]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	public XmlSchemaParticle Particle
	{
		[Token(Token = "0x60015AC")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005DB")]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x60015AE")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005DC")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x60015AF")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x2667570", Offset = "0x2665B70", VA = "0x182667570")]
	public XmlSchemaComplexContentRestriction()
	{
	}
}
