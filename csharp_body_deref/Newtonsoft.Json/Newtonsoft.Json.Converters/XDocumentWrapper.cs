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
		[Address(RVA = "0x1CB1890", Offset = "0x1CAFE90", VA = "0x181CB1890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F62")]
		[Address(RVA = "0x1CB15F0", Offset = "0x1CAFBF0", VA = "0x181CB15F0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	protected override bool HasChildNodes
	{
		[Token(Token = "0x6000F63")]
		[Address(RVA = "0x1CB1900", Offset = "0x1CAFF00", VA = "0x181CB1900", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000287")]
	public IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F70")]
		[Address(RVA = "0x1CB1790", Offset = "0x1CAFD90", VA = "0x181CB1790", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public XDocumentWrapper(XDocument document)
	{
	}

	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x1CB1050", Offset = "0x1CAF650", VA = "0x181CB1050", Slot = "24")]
	public IXmlNode CreateComment(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x1CB1360", Offset = "0x1CAF960", VA = "0x181CB1360", Slot = "25")]
	public IXmlNode CreateTextNode(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x1CB0FC0", Offset = "0x1CAF5C0", VA = "0x181CB0FC0", Slot = "26")]
	public IXmlNode CreateCDataSection(string? data)
	{
		return null;
	}

	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x1CB13F0", Offset = "0x1CAF9F0", VA = "0x181CB13F0", Slot = "27")]
	public IXmlNode CreateWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x1CB12D0", Offset = "0x1CAF8D0", VA = "0x181CB12D0", Slot = "28")]
	public IXmlNode CreateSignificantWhitespace(string? text)
	{
		return null;
	}

	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x1CB1480", Offset = "0x1CAFA80", VA = "0x181CB1480", Slot = "29")]
	public IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone)
	{
		return null;
	}

	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x1CB1530", Offset = "0x1CAFB30", VA = "0x181CB1530", Slot = "30")]
	public IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset)
	{
		return null;
	}

	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x1CB1230", Offset = "0x1CAF830", VA = "0x181CB1230", Slot = "31")]
	public IXmlNode CreateProcessingInstruction(string target, string data)
	{
		return null;
	}

	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x1CB10E0", Offset = "0x1CAF6E0", VA = "0x181CB10E0", Slot = "32")]
	public IXmlElement CreateElement(string elementName)
	{
		return null;
	}

	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x1CB1180", Offset = "0x1CAF780", VA = "0x181CB1180", Slot = "33")]
	public IXmlElement CreateElement(string qualifiedName, string namespaceUri)
	{
		return null;
	}

	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x1CB0E50", Offset = "0x1CAF450", VA = "0x181CB0E50", Slot = "34")]
	public IXmlNode CreateAttribute(string name, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x1CB0F00", Offset = "0x1CAF500", VA = "0x181CB0F00", Slot = "35")]
	public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value)
	{
		return null;
	}

	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x1CB0DA0", Offset = "0x1CAF3A0", VA = "0x181CB0DA0", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
