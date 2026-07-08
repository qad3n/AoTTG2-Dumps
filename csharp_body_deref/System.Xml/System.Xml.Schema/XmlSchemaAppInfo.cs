using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000211")]
public class XmlSchemaAppInfo : XmlSchemaObject
{
	[Token(Token = "0x4000B15")]
	[FieldOffset(Offset = "0x38")]
	private string source;

	[Token(Token = "0x4000B16")]
	[FieldOffset(Offset = "0x40")]
	private XmlNode[] markup;

	[Token(Token = "0x170005A7")]
	[XmlAttribute("source", DataType = "anyURI")]
	public string Source
	{
		[Token(Token = "0x6001541")]
		[Address(RVA = "0x43E1460", Offset = "0x43E1460", VA = "0x43E1460")]
		set
		{
		}
	}

	[Token(Token = "0x170005A8")]
	[XmlText]
	[XmlAnyElement]
	public XmlNode[] Markup
	{
		[Token(Token = "0x6001542")]
		[Address(RVA = "0x43E1470", Offset = "0x43E1470", VA = "0x43E1470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001543")]
		[Address(RVA = "0x43E1480", Offset = "0x43E1480", VA = "0x43E1480")]
		set
		{
		}
	}

	[Token(Token = "0x6001544")]
	[Address(RVA = "0x43E1490", Offset = "0x43E1490", VA = "0x43E1490")]
	public XmlSchemaAppInfo()
	{
	}
}
