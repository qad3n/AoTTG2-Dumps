using System.Collections.Generic;
using System.Xml.Linq;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001CF")]
internal class XContainerWrapper : XObjectWrapper
{
	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x18")]
	private List<IXmlNode>? _childNodes;

	[Token(Token = "0x17000291")]
	private XContainer Container
	{
		[Token(Token = "0x6000F81")]
		[Address(RVA = "0x3B56030", Offset = "0x3B56030", VA = "0x3B56030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000292")]
	public override List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F83")]
		[Address(RVA = "0x3B544B0", Offset = "0x3B544B0", VA = "0x3B544B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000293")]
	protected virtual bool HasChildNodes
	{
		[Token(Token = "0x6000F84")]
		[Address(RVA = "0x3B54A70", Offset = "0x3B54A70", VA = "0x3B54A70", Slot = "23")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000294")]
	public override IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x3B56090", Offset = "0x3B56090", VA = "0x3B56090", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x3B54240", Offset = "0x3B54240", VA = "0x3B54240")]
	public XContainerWrapper(XContainer container)
	{
	}

	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x3B558E0", Offset = "0x3B558E0", VA = "0x3B558E0")]
	internal static IXmlNode WrapNode(XObject node)
	{
		return null;
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x3B55510", Offset = "0x3B55510", VA = "0x3B55510", Slot = "21")]
	public override IXmlNode AppendChild(IXmlNode newChild)
	{
		return null;
	}
}
