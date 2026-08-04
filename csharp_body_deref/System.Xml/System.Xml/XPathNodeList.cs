// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPathNodeList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47C7CB0", Offset = "0x47C7CB0", VA = "0x47C7CB0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x47C7C20", Offset = "0x47C7C20", VA = "0x47C7C20")]
	public XPathNodeList(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x47C7E50", Offset = "0x47C7E50", VA = "0x47C7E50")]
	private XmlNode GetNode(XPathNavigator n)
	{
		return null;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x47C7D10", Offset = "0x47C7D10", VA = "0x47C7D10")]
	internal int ReadUntil(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x47C7F30", Offset = "0x47C7F30", VA = "0x47C7F30", Slot = "6")]
	public override XmlNode Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x47C7FC0", Offset = "0x47C7FC0", VA = "0x47C7FC0", Slot = "8")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
