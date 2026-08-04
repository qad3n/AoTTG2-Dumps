// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XDocumentWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CB")]
internal class XDocumentWrapper : XContainerWrapper, IXmlDocument, IXmlNode
{
	[Token(Token = "0x17000284")]
	private XDocument Document
	{
		[Token(Token = "0x6000F60")]
		[Address(RVA = "0x3E49B00", Offset = "0x3E49B00", VA = "0x3E49B00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x3E49BC0", Offset = "0x3E49BC0", VA = "0x3E49BC0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	protected override bool HasChildNodes
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x3E4A2F0", Offset = "0x3E4A2F0", VA = "0x3E4A2F0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x3E4AC40", Offset = "0x3E4AC40", VA = "0x3E4AC40", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x3E49B60", Offset = "0x3E49B60", VA = "0x3E49B60")]
	public XDocumentWrapper(XDocument document)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x3E4A430", Offset = "0x3E4A430", VA = "0x3E4A430", Slot = "24")]
	public IXmlNode CreateComment(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x3E4A4C0", Offset = "0x3E4A4C0", VA = "0x3E4A4C0", Slot = "25")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x3E4A550", Offset = "0x3E4A550", VA = "0x3E4A550", Slot = "26")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x3E4A5E0", Offset = "0x3E4A5E0", VA = "0x3E4A5E0", Slot = "27")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x3E4A670", Offset = "0x3E4A670", VA = "0x3E4A670", Slot = "28")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x3E4A700", Offset = "0x3E4A700", VA = "0x3E4A700", Slot = "29")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x3E4A7B0", Offset = "0x3E4A7B0", VA = "0x3E4A7B0", Slot = "30")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x3E4A870", Offset = "0x3E4A870", VA = "0x3E4A870", Slot = "31")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x3E4A940", Offset = "0x3E4A940", VA = "0x3E4A940", Slot = "32")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x3E4AA10", Offset = "0x3E4AA10", VA = "0x3E4AA10", Slot = "33")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x3E4AAC0", Offset = "0x3E4AAC0", VA = "0x3E4AAC0", Slot = "34")]
	public IXmlNode CreateAttribute(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x3E4AB90", Offset = "0x3E4AB90", VA = "0x3E4AB90", Slot = "35")]
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x3E4AD80", Offset = "0x3E4AD80", VA = "0x3E4AD80", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
