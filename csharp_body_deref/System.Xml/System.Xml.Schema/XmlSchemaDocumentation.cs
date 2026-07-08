using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000224")]
public class XmlSchemaDocumentation : XmlSchemaObject
{
	[Token(Token = "0x4000B65")]
	[FieldOffset(Offset = "0x38")]
	private string source;

	[Token(Token = "0x4000B66")]
	[FieldOffset(Offset = "0x40")]
	private string language;

	[Token(Token = "0x4000B67")]
	[FieldOffset(Offset = "0x48")]
	private XmlNode[] markup;

	[Token(Token = "0x4000B68")]
	[FieldOffset(Offset = "0x0")]
	private static XmlSchemaSimpleType languageType;

	[Token(Token = "0x170005FA")]
	[XmlAttribute("source", DataType = "anyURI")]
	public string Source
	{
		[Token(Token = "0x60015FD")]
		[Address(RVA = "0x43E5E30", Offset = "0x43E5E30", VA = "0x43E5E30")]
		set
		{
		}
	}

	[Token(Token = "0x170005FB")]
	[XmlAttribute("xml:lang")]
	public string Language
	{
		[Token(Token = "0x60015FE")]
		[Address(RVA = "0x43E5E40", Offset = "0x43E5E40", VA = "0x43E5E40")]
		set
		{
		}
	}

	[Token(Token = "0x170005FC")]
	[XmlAnyElement]
	[XmlText]
	public XmlNode[] Markup
	{
		[Token(Token = "0x60015FF")]
		[Address(RVA = "0x43E5F40", Offset = "0x43E5F40", VA = "0x43E5F40")]
		set
		{
		}
	}

	[Token(Token = "0x6001600")]
	[Address(RVA = "0x43E5F50", Offset = "0x43E5F50", VA = "0x43E5F50")]
	public XmlSchemaDocumentation()
	{
	}
}
