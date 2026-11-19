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
		[Address(RVA = "0x563B570", Offset = "0x563A570", VA = "0x563B570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x563B630", Offset = "0x563A630", VA = "0x563B630", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	protected override bool HasChildNodes
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x563BCF0", Offset = "0x563ACF0", VA = "0x563BCF0", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x563C640", Offset = "0x563B640", VA = "0x563C640", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x563B5D0", Offset = "0x563A5D0", VA = "0x563B5D0")]
	public XDocumentWrapper(XDocument document)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x563BE30", Offset = "0x563AE30", VA = "0x563BE30", Slot = "24")]
	public IXmlNode CreateComment(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x563BEC0", Offset = "0x563AEC0", VA = "0x563BEC0", Slot = "25")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x563BF50", Offset = "0x563AF50", VA = "0x563BF50", Slot = "26")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x563BFE0", Offset = "0x563AFE0", VA = "0x563BFE0", Slot = "27")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x563C070", Offset = "0x563B070", VA = "0x563C070", Slot = "28")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x563C100", Offset = "0x563B100", VA = "0x563C100", Slot = "29")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x563C1B0", Offset = "0x563B1B0", VA = "0x563C1B0", Slot = "30")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x563C270", Offset = "0x563B270", VA = "0x563C270", Slot = "31")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x563C340", Offset = "0x563B340", VA = "0x563C340", Slot = "32")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x563C410", Offset = "0x563B410", VA = "0x563C410", Slot = "33")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x563C4C0", Offset = "0x563B4C0", VA = "0x563C4C0", Slot = "34")]
	public IXmlNode CreateAttribute(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x563C590", Offset = "0x563B590", VA = "0x563C590", Slot = "35")]
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x563C780", Offset = "0x563B780", VA = "0x563C780", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
