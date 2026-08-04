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
		[Address(RVA = "0x47207A0", Offset = "0x47207A0", VA = "0x47207A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x47207B0", Offset = "0x47207B0", VA = "0x47207B0")]
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
		[Address(RVA = "0x4720840", Offset = "0x4720840", VA = "0x4720840")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x4720850", Offset = "0x4720850", VA = "0x4720850")]
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
		[Address(RVA = "0x4720860", Offset = "0x4720860", VA = "0x4720860")]
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
		[Address(RVA = "0x4720870", Offset = "0x4720870", VA = "0x4720870")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x4720880", Offset = "0x4720880", VA = "0x4720880")]
		set
		{
		}
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x4720890", Offset = "0x4720890", VA = "0x4720890")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x47208A0", Offset = "0x47208A0", VA = "0x47208A0")]
	public XmlSchemaComplexContentExtension()
	{
	}
}
