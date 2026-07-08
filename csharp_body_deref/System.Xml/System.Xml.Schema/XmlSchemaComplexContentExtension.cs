using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021B")]
public class XmlSchemaComplexContentExtension : XmlSchemaContent
{
	[Token(Token = "0x4000B3C")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaParticle particle;

	[Token(Token = "0x4000B3D")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000B3E")]
	[FieldOffset(Offset = "0x60")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000B3F")]
	[FieldOffset(Offset = "0x68")]
	private XmlQualifiedName baseTypeName;

	[Token(Token = "0x170005D5")]
	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		[Token(Token = "0x60015A1")]
		[Address(RVA = "0x43E3040", Offset = "0x43E3040", VA = "0x43E3040")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x43E3050", Offset = "0x43E3050", VA = "0x43E3050")]
		set
		{
		}
	}

	[Token(Token = "0x170005D6")]
	[XmlElement("sequence", typeof(XmlSchemaSequence))]
	[XmlElement("all", typeof(XmlSchemaAll))]
	[XmlElement("choice", typeof(XmlSchemaChoice))]
	[XmlElement("group", typeof(XmlSchemaGroupRef))]
	public XmlSchemaParticle Particle
	{
		[Token(Token = "0x60015A3")]
		[Address(RVA = "0x43E30E0", Offset = "0x43E30E0", VA = "0x43E30E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x43E30F0", Offset = "0x43E30F0", VA = "0x43E30F0")]
		set
		{
		}
	}

	[Token(Token = "0x170005D7")]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x60015A5")]
		[Address(RVA = "0x43E3100", Offset = "0x43E3100", VA = "0x43E3100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D8")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x60015A6")]
		[Address(RVA = "0x43E3110", Offset = "0x43E3110", VA = "0x43E3110")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x43E3120", Offset = "0x43E3120", VA = "0x43E3120")]
		set
		{
		}
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x43E3130", Offset = "0x43E3130", VA = "0x43E3130")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x43E3140", Offset = "0x43E3140", VA = "0x43E3140")]
	public XmlSchemaComplexContentExtension()
	{
	}
}
