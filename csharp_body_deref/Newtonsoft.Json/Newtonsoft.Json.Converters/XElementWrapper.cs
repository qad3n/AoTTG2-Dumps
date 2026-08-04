// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.XElementWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001D2")]
internal class XElementWrapper : XContainerWrapper, IXmlElement, IXmlNode
{
	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x20")]
	private List<IXmlNode>? _attributes;

	[Token(Token = "0x170002A2")]
	private XElement Element
	{
		[Token(Token = "0x6000F9A")]
		[Address(RVA = "0x3E4BFC0", Offset = "0x3E4BFC0", VA = "0x3E4BFC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A3")]
	public override List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x3E4C110", Offset = "0x3E4C110", VA = "0x3E4C110", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A4")]
	public override string? Value
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x3E4CE80", Offset = "0x3E4CE80", VA = "0x3E4CE80", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x3E4CEF0", Offset = "0x3E4CEF0", VA = "0x3E4CEF0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override string? LocalName
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x3E4CF90", Offset = "0x3E4CF90", VA = "0x3E4CF90", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string? NamespaceUri
	{
		[Token(Token = "0x6000FA3")]
		[Address(RVA = "0x3E4D000", Offset = "0x3E4D000", VA = "0x3E4D000", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x3E4D070", Offset = "0x3E4D070", VA = "0x3E4D070", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x3E4A9E0", Offset = "0x3E4A9E0", VA = "0x3E4A9E0")]
	public XElementWrapper(XElement element)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x3E4C020", Offset = "0x3E4C020", VA = "0x3E4C020", Slot = "24")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x3E4C7B0", Offset = "0x3E4C7B0", VA = "0x3E4C7B0")]
	private bool HasImplicitNamespaceAttribute(string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x3E4CE50", Offset = "0x3E4CE50", VA = "0x3E4CE50", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x3E4CDC0", Offset = "0x3E4CDC0", VA = "0x3E4CDC0", Slot = "25")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
