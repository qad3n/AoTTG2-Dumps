using System.Collections.Generic;
using System.Xml;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001D0")]
internal class XObjectWrapper : IXmlNode
{
	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x10")]
	private readonly XObject? _xmlObject;

	[Token(Token = "0x17000295")]
	public object? WrappedNode
	{
		[Token(Token = "0x6000F89")]
		[Address(RVA = "0x3B56170", Offset = "0x3B56170", VA = "0x3B56170", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000296")]
	public virtual XmlNodeType NodeType
	{
		[Token(Token = "0x6000F8A")]
		[Address(RVA = "0x3B56180", Offset = "0x3B56180", VA = "0x3B56180", Slot = "14")]
		get
		{
			return default(XmlNodeType);
		}
	}

	[Token(Token = "0x17000297")]
	public virtual string? LocalName
	{
		[Token(Token = "0x6000F8B")]
		[Address(RVA = "0x3B561A0", Offset = "0x3B561A0", VA = "0x3B561A0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000298")]
	public virtual List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F8C")]
		[Address(RVA = "0x3B561B0", Offset = "0x3B561B0", VA = "0x3B561B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000299")]
	public virtual List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F8D")]
		[Address(RVA = "0x3B56220", Offset = "0x3B56220", VA = "0x3B56220", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029A")]
	public virtual IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F8E")]
		[Address(RVA = "0x3B56290", Offset = "0x3B56290", VA = "0x3B56290", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029B")]
	public virtual string? Value
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x3B562A0", Offset = "0x3B562A0", VA = "0x3B562A0", Slot = "19")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x3B562B0", Offset = "0x3B562B0", VA = "0x3B562B0", Slot = "20")]
		set
		{
		}
	}

	[Token(Token = "0x1700029C")]
	public virtual string? NamespaceUri
	{
		[Token(Token = "0x6000F92")]
		[Address(RVA = "0x3B56330", Offset = "0x3B56330", VA = "0x3B56330", Slot = "22")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x3B53FE0", Offset = "0x3B53FE0", VA = "0x3B53FE0")]
	public XObjectWrapper(XObject? xmlObject)
	{
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x3B562F0", Offset = "0x3B562F0", VA = "0x3B562F0", Slot = "21")]
	public virtual IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
