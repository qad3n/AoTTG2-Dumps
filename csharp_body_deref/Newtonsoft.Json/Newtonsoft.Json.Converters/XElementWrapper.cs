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
		[Address(RVA = "0x3B56670", Offset = "0x3B56670", VA = "0x3B56670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A3")]
	public override List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x3B567C0", Offset = "0x3B567C0", VA = "0x3B567C0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A4")]
	public override string? Value
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x3B57530", Offset = "0x3B57530", VA = "0x3B57530", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x3B575A0", Offset = "0x3B575A0", VA = "0x3B575A0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x170002A5")]
	public override string? LocalName
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x3B57640", Offset = "0x3B57640", VA = "0x3B57640", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A6")]
	public override string? NamespaceUri
	{
		[Token(Token = "0x6000FA3")]
		[Address(RVA = "0x3B576B0", Offset = "0x3B576B0", VA = "0x3B576B0", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002A7")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000FA5")]
		[Address(RVA = "0x3B57720", Offset = "0x3B57720", VA = "0x3B57720", Slot = "26")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x3B55090", Offset = "0x3B55090", VA = "0x3B55090")]
	public XElementWrapper(XElement element)
	{
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x3B566D0", Offset = "0x3B566D0", VA = "0x3B566D0", Slot = "24")]
	public void SetAttributeNode(IXmlNode attribute)
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x3B56E60", Offset = "0x3B56E60", VA = "0x3B56E60")]
	private bool HasImplicitNamespaceAttribute(string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x3B57500", Offset = "0x3B57500", VA = "0x3B57500", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x3B57470", Offset = "0x3B57470", VA = "0x3B57470", Slot = "25")]
	public string GetPrefixOfNamespace(string namespaceUri)
	{
		return null;
	}
}
