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
		[Address(RVA = "0x4720950", Offset = "0x4720950", VA = "0x4720950")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x4720960", Offset = "0x4720960", VA = "0x4720960")]
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
		[Address(RVA = "0x47209F0", Offset = "0x47209F0", VA = "0x47209F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x4720A00", Offset = "0x4720A00", VA = "0x4720A00")]
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
		[Address(RVA = "0x4720A10", Offset = "0x4720A10", VA = "0x4720A10")]
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
		[Address(RVA = "0x4720A20", Offset = "0x4720A20", VA = "0x4720A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x4720A30", Offset = "0x4720A30", VA = "0x4720A30")]
		set
		{
		}
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x4720A40", Offset = "0x4720A40", VA = "0x4720A40")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x4720A50", Offset = "0x4720A50", VA = "0x4720A50")]
	public XmlSchemaComplexContentRestriction()
	{
	}
}
