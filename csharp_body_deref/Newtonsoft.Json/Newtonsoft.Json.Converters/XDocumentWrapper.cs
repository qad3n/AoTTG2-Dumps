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
		[Address(RVA = "0x3B541B0", Offset = "0x3B541B0", VA = "0x3B541B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x3B54270", Offset = "0x3B54270", VA = "0x3B54270", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	protected override bool HasChildNodes
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x3B549A0", Offset = "0x3B549A0", VA = "0x3B549A0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x3B552F0", Offset = "0x3B552F0", VA = "0x3B552F0", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x3B54210", Offset = "0x3B54210", VA = "0x3B54210")]
	public XDocumentWrapper(XDocument document)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x3B54AE0", Offset = "0x3B54AE0", VA = "0x3B54AE0", Slot = "24")]
	public IXmlNode CreateComment(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x3B54B70", Offset = "0x3B54B70", VA = "0x3B54B70", Slot = "25")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x3B54C00", Offset = "0x3B54C00", VA = "0x3B54C00", Slot = "26")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x3B54C90", Offset = "0x3B54C90", VA = "0x3B54C90", Slot = "27")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x3B54D20", Offset = "0x3B54D20", VA = "0x3B54D20", Slot = "28")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x3B54DB0", Offset = "0x3B54DB0", VA = "0x3B54DB0", Slot = "29")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x3B54E60", Offset = "0x3B54E60", VA = "0x3B54E60", Slot = "30")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x3B54F20", Offset = "0x3B54F20", VA = "0x3B54F20", Slot = "31")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x3B54FF0", Offset = "0x3B54FF0", VA = "0x3B54FF0", Slot = "32")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x3B550C0", Offset = "0x3B550C0", VA = "0x3B550C0", Slot = "33")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x3B55170", Offset = "0x3B55170", VA = "0x3B55170", Slot = "34")]
	public IXmlNode CreateAttribute(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x3B55240", Offset = "0x3B55240", VA = "0x3B55240", Slot = "35")]
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x3B55430", Offset = "0x3B55430", VA = "0x3B55430", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
