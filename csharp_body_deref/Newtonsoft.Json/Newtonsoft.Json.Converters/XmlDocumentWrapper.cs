using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001BF")]
internal class XmlDocumentWrapper : XmlNodeWrapper, IXmlDocument, IXmlNode
{
	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x28")]
	private readonly XmlDocument _document;

	[Token(Token = "0x17000255")]
	public IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F10")]
		[Address(RVA = "0x3B52D70", Offset = "0x3B52D70", VA = "0x3B52D70", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x3B524D0", Offset = "0x3B524D0", VA = "0x3B524D0")]
	public XmlDocumentWrapper(XmlDocument document)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x3B52540", Offset = "0x3B52540", VA = "0x3B52540", Slot = "16")]
	public IXmlNode CreateComment(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x3B525D0", Offset = "0x3B525D0", VA = "0x3B525D0", Slot = "17")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x3B52660", Offset = "0x3B52660", VA = "0x3B52660", Slot = "18")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x3B526F0", Offset = "0x3B526F0", VA = "0x3B526F0", Slot = "19")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x3B52780", Offset = "0x3B52780", VA = "0x3B52780", Slot = "20")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x3B52810", Offset = "0x3B52810", VA = "0x3B52810", Slot = "21")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x3B52900", Offset = "0x3B52900", VA = "0x3B52900", Slot = "22")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x3B529F0", Offset = "0x3B529F0", VA = "0x3B529F0", Slot = "23")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x3B52A80", Offset = "0x3B52A80", VA = "0x3B52A80", Slot = "24")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x3B52B50", Offset = "0x3B52B50", VA = "0x3B52B50", Slot = "25")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x3B52BE0", Offset = "0x3B52BE0", VA = "0x3B52BE0", Slot = "26")]
	public IXmlNode CreateAttribute(string name, string? value)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x3B52CC0", Offset = "0x3B52CC0", VA = "0x3B52CC0", Slot = "27")]
	public IXmlNode CreateAttribute(string qualifiedName, string? namespaceUri, string? value)
	{
		return null;
	}
}
