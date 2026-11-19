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
		[Address(RVA = "0x6028AA0", Offset = "0x6027AA0", VA = "0x6028AA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x6028AB0", Offset = "0x6027AB0", VA = "0x6028AB0")]
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
		[Address(RVA = "0x6028B40", Offset = "0x6027B40", VA = "0x6028B40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x6028B50", Offset = "0x6027B50", VA = "0x6028B50")]
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
		[Address(RVA = "0x6028B60", Offset = "0x6027B60", VA = "0x6028B60")]
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
		[Address(RVA = "0x6028B70", Offset = "0x6027B70", VA = "0x6028B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015B0")]
		[Address(RVA = "0x6028B80", Offset = "0x6027B80", VA = "0x6028B80")]
		set
		{
		}
	}

	[Token(Token = "0x60015B1")]
	[Address(RVA = "0x6028B90", Offset = "0x6027B90", VA = "0x6028B90")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x60015B2")]
	[Address(RVA = "0x6028BA0", Offset = "0x6027BA0", VA = "0x6028BA0")]
	public XmlSchemaComplexContentRestriction()
	{
	}
}
