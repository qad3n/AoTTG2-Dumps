using System.Collections;
using System.Collections.Generic;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000096")]
internal class XPathNodeList : XmlNodeList
{
	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0x10")]
	private List<XmlNode> list;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x18")]
	private XPathNodeIterator nodeIterator;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x20")]
	private bool done;

	[Token(Token = "0x4000430")]
	[FieldOffset(Offset = "0x0")]
	private static readonly object[] nullparams;

	[Token(Token = "0x170001C7")]
	public override int Count
	{
		[Token(Token = "0x60007B3")]
		[Address(RVA = "0x448A550", Offset = "0x448A550", VA = "0x448A550", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x448A4C0", Offset = "0x448A4C0", VA = "0x448A4C0")]
	public XPathNodeList(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x448A6F0", Offset = "0x448A6F0", VA = "0x448A6F0")]
	private XmlNode GetNode(XPathNavigator n)
	{
		return null;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x448A5B0", Offset = "0x448A5B0", VA = "0x448A5B0")]
	internal int ReadUntil(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x448A7D0", Offset = "0x448A7D0", VA = "0x448A7D0", Slot = "6")]
	public override XmlNode Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x448A860", Offset = "0x448A860", VA = "0x448A860", Slot = "8")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
