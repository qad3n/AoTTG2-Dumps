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
		[Address(RVA = "0x563D9A0", Offset = "0x563C9A0", VA = "0x563D9A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A3")]
	public override List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x563DAF0", Offset = "0x563CAF0", VA = "0x563DAF0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A4")]
	public override string? Value
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x563E760", Offset = "0x563D760", VA = "0x563E760", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x563E7D0", Offset = "0x563D7D0", VA = "0x563E7D0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override string? LocalName
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x563E870", Offset = "0x563D870", VA = "0x563E870", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string? NamespaceUri
	{
		[Token(Token = "0x6000FA3")]
		[Address(RVA = "0x563E8E0", Offset = "0x563D8E0", VA = "0x563E8E0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x563E950", Offset = "0x563D950", VA = "0x563E950", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x563C3E0", Offset = "0x563B3E0", VA = "0x563C3E0")]
	public XElementWrapper(XElement element)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x563DA00", Offset = "0x563CA00", VA = "0x563DA00", Slot = "24")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x563E120", Offset = "0x563D120", VA = "0x563E120")]
	private bool HasImplicitNamespaceAttribute(string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x563E730", Offset = "0x563D730", VA = "0x563E730", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x563E6A0", Offset = "0x563D6A0", VA = "0x563E6A0", Slot = "25")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
