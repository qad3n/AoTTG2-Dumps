// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaSimpleContentExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47326F0", Offset = "0x47326F0", VA = "0x47326F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x4732700", Offset = "0x4732700", VA = "0x4732700")]
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
		[Address(RVA = "0x4732790", Offset = "0x4732790", VA = "0x4732790")]
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
		[Address(RVA = "0x47327A0", Offset = "0x47327A0", VA = "0x47327A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001759")]
		[Address(RVA = "0x47327B0", Offset = "0x47327B0", VA = "0x47327B0")]
		set
		{
		}
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0x47327C0", Offset = "0x47327C0", VA = "0x47327C0")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x47327D0", Offset = "0x47327D0", VA = "0x47327D0")]
	public XmlSchemaSimpleContentExtension()
	{
	}
}
