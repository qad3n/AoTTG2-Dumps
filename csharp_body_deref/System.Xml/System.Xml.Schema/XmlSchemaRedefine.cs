// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaRedefine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4728200", Offset = "0x4728200", VA = "0x4728200")]
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
		[Address(RVA = "0x4728210", Offset = "0x4728210", VA = "0x4728210")]
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
		[Address(RVA = "0x4728220", Offset = "0x4728220", VA = "0x4728220")]
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
		[Address(RVA = "0x4728230", Offset = "0x4728230", VA = "0x4728230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001715")]
	[Address(RVA = "0x4728110", Offset = "0x4728110", VA = "0x4728110")]
	public XmlSchemaRedefine()
	{
	}

	[Token(Token = "0x600171A")]
	[Address(RVA = "0x4728240", Offset = "0x4728240", VA = "0x4728240", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
