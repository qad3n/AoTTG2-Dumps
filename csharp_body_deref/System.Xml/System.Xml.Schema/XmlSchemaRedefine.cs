using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000250")]
public class XmlSchemaRedefine : XmlSchemaExternal
{
	[Token(Token = "0x4000BDF")]
	[FieldOffset(Offset = "0x68")]
	private XmlSchemaObjectCollection items;

	[Token(Token = "0x4000BE0")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaObjectTable attributeGroups;

	[Token(Token = "0x4000BE1")]
	[FieldOffset(Offset = "0x78")]
	private XmlSchemaObjectTable types;

	[Token(Token = "0x4000BE2")]
	[FieldOffset(Offset = "0x80")]
	private XmlSchemaObjectTable groups;

	[Token(Token = "0x17000665")]
	[XmlElement("annotation", typeof(XmlSchemaAnnotation))]
	[XmlElement("complexType", typeof(XmlSchemaComplexType))]
	[XmlElement("group", typeof(XmlSchemaGroup))]
	[XmlElement("simpleType", typeof(XmlSchemaSimpleType))]
	[XmlElement("attributeGroup", typeof(XmlSchemaAttributeGroup))]
	public XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x6001716")]
		[Address(RVA = "0x43EAAA0", Offset = "0x43EAAA0", VA = "0x43EAAA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000666")]
	[XmlIgnore]
	public XmlSchemaObjectTable AttributeGroups
	{
		[Token(Token = "0x6001717")]
		[Address(RVA = "0x43EAAB0", Offset = "0x43EAAB0", VA = "0x43EAAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000667")]
	[XmlIgnore]
	public XmlSchemaObjectTable SchemaTypes
	{
		[Token(Token = "0x6001718")]
		[Address(RVA = "0x43EAAC0", Offset = "0x43EAAC0", VA = "0x43EAAC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000668")]
	[XmlIgnore]
	public XmlSchemaObjectTable Groups
	{
		[Token(Token = "0x6001719")]
		[Address(RVA = "0x43EAAD0", Offset = "0x43EAAD0", VA = "0x43EAAD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x43EA9B0", Offset = "0x43EA9B0", VA = "0x43EA9B0")]
	public XmlSchemaRedefine()
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x43EAAE0", Offset = "0x43EAAE0", VA = "0x43EAAE0", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
