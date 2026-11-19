// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaComplexContentExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60288F0", Offset = "0x60278F0", VA = "0x60288F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x6028900", Offset = "0x6027900", VA = "0x6028900")]
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
		[Address(RVA = "0x6028990", Offset = "0x6027990", VA = "0x6028990")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x60289A0", Offset = "0x60279A0", VA = "0x60289A0")]
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
		[Address(RVA = "0x60289B0", Offset = "0x60279B0", VA = "0x60289B0")]
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
		[Address(RVA = "0x60289C0", Offset = "0x60279C0", VA = "0x60289C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x60289D0", Offset = "0x60279D0", VA = "0x60289D0")]
		set
		{
		}
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x60289E0", Offset = "0x60279E0", VA = "0x60289E0")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x60289F0", Offset = "0x60279F0", VA = "0x60289F0")]
	public XmlSchemaComplexContentExtension()
	{
	}
}
