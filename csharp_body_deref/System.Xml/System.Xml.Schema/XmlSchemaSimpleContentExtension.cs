using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000254")]
public class XmlSchemaSimpleContentExtension : XmlSchemaContent
{
	[Token(Token = "0x4000BF9")]
	[FieldOffset(Offset = "0x50")]
	private XmlSchemaObjectCollection attributes;

	[Token(Token = "0x4000BFA")]
	[FieldOffset(Offset = "0x58")]
	private XmlSchemaAnyAttribute anyAttribute;

	[Token(Token = "0x4000BFB")]
	[FieldOffset(Offset = "0x60")]
	private XmlQualifiedName baseTypeName;

	[Token(Token = "0x1700067A")]
	[XmlAttribute("base")]
	public XmlQualifiedName BaseTypeName
	{
		[Token(Token = "0x6001755")]
		[Address(RVA = "0x43F4F90", Offset = "0x43F4F90", VA = "0x43F4F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x43F4FA0", Offset = "0x43F4FA0", VA = "0x43F4FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700067B")]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroupRef))]
	[XmlElement("attribute", typeof(XmlSchemaAttribute))]
	public XmlSchemaObjectCollection Attributes
	{
		[Token(Token = "0x6001757")]
		[Address(RVA = "0x43F5030", Offset = "0x43F5030", VA = "0x43F5030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700067C")]
	[XmlElement("anyAttribute")]
	public XmlSchemaAnyAttribute AnyAttribute
	{
		[Token(Token = "0x6001758")]
		[Address(RVA = "0x43F5040", Offset = "0x43F5040", VA = "0x43F5040")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001759")]
		[Address(RVA = "0x43F5050", Offset = "0x43F5050", VA = "0x43F5050")]
		set
		{
		}
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0x43F5060", Offset = "0x43F5060", VA = "0x43F5060")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x43F5070", Offset = "0x43F5070", VA = "0x43F5070")]
	public XmlSchemaSimpleContentExtension()
	{
	}
}
