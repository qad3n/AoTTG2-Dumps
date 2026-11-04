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
		[Address(RVA = "0x1CB34B0", Offset = "0x1CB1AB0", VA = "0x181CB34B0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x1CB2BE0", Offset = "0x1CB11E0", VA = "0x181CB2BE0")]
	public XmlDocumentWrapper(XmlDocument document)
	{
	}

	[Token(Token = "0x6000F04")]
	[Address(RVA = "0x1CB2F40", Offset = "0x1CB1540", VA = "0x181CB2F40", Slot = "16")]
	public IXmlNode CreateComment(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x1CB3230", Offset = "0x1CB1830", VA = "0x181CB3230", Slot = "17")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F06")]
	[Address(RVA = "0x1CB2EB0", Offset = "0x1CB14B0", VA = "0x181CB2EB0", Slot = "18")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F07")]
	[Address(RVA = "0x1CB32C0", Offset = "0x1CB18C0", VA = "0x181CB32C0", Slot = "19")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F08")]
	[Address(RVA = "0x1CB31A0", Offset = "0x1CB17A0", VA = "0x181CB31A0", Slot = "20")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F09")]
	[Address(RVA = "0x1CB3350", Offset = "0x1CB1950", VA = "0x181CB3350", Slot = "21")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F0A")]
	[Address(RVA = "0x1CB3400", Offset = "0x1CB1A00", VA = "0x181CB3400", Slot = "22")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F0B")]
	[Address(RVA = "0x1CB3100", Offset = "0x1CB1700", VA = "0x181CB3100", Slot = "23")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F0C")]
	[Address(RVA = "0x1CB2FD0", Offset = "0x1CB15D0", VA = "0x181CB2FD0", Slot = "24")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F0D")]
	[Address(RVA = "0x1CB3060", Offset = "0x1CB1660", VA = "0x181CB3060", Slot = "25")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F0E")]
	[Address(RVA = "0x1CB2D50", Offset = "0x1CB1350", VA = "0x181CB2D50", Slot = "26")]
	public IXmlNode CreateAttribute(string name, string? value)
	{
		return null;
	}

	[Token(Token = "0x6000F0F")]
	[Address(RVA = "0x1CB2E00", Offset = "0x1CB1400", VA = "0x181CB2E00", Slot = "27")]
	public IXmlNode CreateAttribute(string qualifiedName, string? namespaceUri, string? value)
	{
		return null;
	}
}
