// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XmlDocumentWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E486C0", Offset = "0x3E486C0", VA = "0x3E486C0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x3E47E20", Offset = "0x3E47E20", VA = "0x3E47E20")]
	public XmlDocumentWrapper(XmlDocument document)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x3E47E90", Offset = "0x3E47E90", VA = "0x3E47E90", Slot = "16")]
	public IXmlNode CreateComment(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x3E47F20", Offset = "0x3E47F20", VA = "0x3E47F20", Slot = "17")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x3E47FB0", Offset = "0x3E47FB0", VA = "0x3E47FB0", Slot = "18")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x3E48040", Offset = "0x3E48040", VA = "0x3E48040", Slot = "19")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x3E480D0", Offset = "0x3E480D0", VA = "0x3E480D0", Slot = "20")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x3E48160", Offset = "0x3E48160", VA = "0x3E48160", Slot = "21")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x3E48250", Offset = "0x3E48250", VA = "0x3E48250", Slot = "22")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x3E48340", Offset = "0x3E48340", VA = "0x3E48340", Slot = "23")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x3E483D0", Offset = "0x3E483D0", VA = "0x3E483D0", Slot = "24")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x3E484A0", Offset = "0x3E484A0", VA = "0x3E484A0", Slot = "25")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x3E48530", Offset = "0x3E48530", VA = "0x3E48530", Slot = "26")]
	public IXmlNode CreateAttribute(string name, string? value)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x3E48610", Offset = "0x3E48610", VA = "0x3E48610", Slot = "27")]
	public IXmlNode CreateAttribute(string qualifiedName, string? namespaceUri, string? value)
	{
		return null;
	}
}
