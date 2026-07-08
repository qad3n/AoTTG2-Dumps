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
		[Address(RVA = "0x43E31F0", Offset = "0x43E31F0", VA = "0x43E31F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x43E3200", Offset = "0x43E3200", VA = "0x43E3200")]
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
		[Address(RVA = "0x43E3290", Offset = "0x43E3290", VA = "0x43E3290")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x43E32A0", Offset = "0x43E32A0", VA = "0x43E32A0")]
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
		[Address(RVA = "0x43E32B0", Offset = "0x43E32B0", VA = "0x43E32B0")]
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
		[Address(RVA = "0x43E32C0", Offset = "0x43E32C0", VA = "0x43E32C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x43E32D0", Offset = "0x43E32D0", VA = "0x43E32D0")]
		set
		{
		}
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x43E32E0", Offset = "0x43E32E0", VA = "0x43E32E0")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x43E32F0", Offset = "0x43E32F0", VA = "0x43E32F0")]
	public XmlSchemaComplexContentRestriction()
	{
	}
}
