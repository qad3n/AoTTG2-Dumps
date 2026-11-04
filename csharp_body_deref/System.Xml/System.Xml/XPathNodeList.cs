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
		[Address(RVA = "0x270BE20", Offset = "0x270A420", VA = "0x18270BE20", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x270BD90", Offset = "0x270A390", VA = "0x18270BD90")]
	public XPathNodeList(XPathNodeIterator nodeIterator)
	{
	}

	[Token(Token = "0x60007B4")]
	[Address(RVA = "0x270BA70", Offset = "0x270A070", VA = "0x18270BA70")]
	private XmlNode GetNode(XPathNavigator n)
	{
		return null;
	}

	[Token(Token = "0x60007B5")]
	[Address(RVA = "0x270BC20", Offset = "0x270A220", VA = "0x18270BC20")]
	internal int ReadUntil(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60007B6")]
	[Address(RVA = "0x270BB80", Offset = "0x270A180", VA = "0x18270BB80", Slot = "6")]
	public override XmlNode Item(int index)
	{
		return null;
	}

	[Token(Token = "0x60007B7")]
	[Address(RVA = "0x270BA00", Offset = "0x270A000", VA = "0x18270BA00", Slot = "8")]
	public override IEnumerator GetEnumerator()
	{
		return null;
	}
}
