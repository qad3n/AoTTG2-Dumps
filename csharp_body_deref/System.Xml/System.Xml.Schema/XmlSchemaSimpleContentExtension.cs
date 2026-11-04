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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001756")]
		[Address(RVA = "0x267EB40", Offset = "0x267D140", VA = "0x18267EB40")]
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
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
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
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001759")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x600175A")]
	[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
	internal void SetAttributes(XmlSchemaObjectCollection newAttributes)
	{
	}

	[Token(Token = "0x600175B")]
	[Address(RVA = "0x267EA90", Offset = "0x267D090", VA = "0x18267EA90")]
	public XmlSchemaSimpleContentExtension()
	{
	}
}
