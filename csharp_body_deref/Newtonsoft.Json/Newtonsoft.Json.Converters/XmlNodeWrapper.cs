using System.Collections.Generic;
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C3")]
internal class XmlNodeWrapper : IXmlNode
{
	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x10")]
	private readonly XmlNode _node;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x18")]
	private List<IXmlNode>? _childNodes;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x20")]
	private List<IXmlNode>? _attributes;

	[Token(Token = "0x1700025F")]
	public object? WrappedNode
	{
		[Token(Token = "0x6000F22")]
		[Address(RVA = "0x3B530A0", Offset = "0x3B530A0", VA = "0x3B530A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000260")]
	public XmlNodeType NodeType
	{
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x3B530B0", Offset = "0x3B530B0", VA = "0x3B530B0", Slot = "4")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000261")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F24")]
		[Address(RVA = "0x3B530E0", Offset = "0x3B530E0", VA = "0x3B530E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	public List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F25")]
		[Address(RVA = "0x3B53110", Offset = "0x3B53110", VA = "0x3B53110", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	protected virtual bool HasChildNodes
	{
		[Token(Token = "0x6000F26")]
		[Address(RVA = "0x3B53790", Offset = "0x3B53790", VA = "0x3B53790", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000264")]
	public List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F28")]
		[Address(RVA = "0x3B537C0", Offset = "0x3B537C0", VA = "0x3B537C0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	private bool HasAttributes
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x3B53D40", Offset = "0x3B53D40", VA = "0x3B53D40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000266")]
	public IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x3B53DE0", Offset = "0x3B53DE0", VA = "0x3B53DE0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000267")]
	public string? Value
	{
		[Token(Token = "0x6000F2B")]
		[Address(RVA = "0x3B53E70", Offset = "0x3B53E70", VA = "0x3B53E70", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F2C")]
		[Address(RVA = "0x3B52C90", Offset = "0x3B52C90", VA = "0x3B52C90", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000268")]
	public string? NamespaceUri
	{
		[Token(Token = "0x6000F2E")]
		[Address(RVA = "0x3B53F60", Offset = "0x3B53F60", VA = "0x3B53F60", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F21")]
	[Address(RVA = "0x3B52510", Offset = "0x3B52510", VA = "0x3B52510")]
	public XmlNodeWrapper(XmlNode node)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x3B53610", Offset = "0x3B53610", VA = "0x3B53610")]
	internal static IXmlNode WrapNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x3B53EA0", Offset = "0x3B53EA0", VA = "0x3B53EA0", Slot = "11")]
	public IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
