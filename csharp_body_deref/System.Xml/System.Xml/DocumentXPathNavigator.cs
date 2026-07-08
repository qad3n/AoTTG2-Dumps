using System.Xml.Schema;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x200008C")]
internal sealed class DocumentXPathNavigator : XPathNavigator, IHasXmlNode
{
	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x10")]
	private XmlDocument document;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x18")]
	private XmlNode source;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x20")]
	private int attributeIndex;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x28")]
	private XmlElement namespaceParent;

	[Token(Token = "0x170001B5")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x600074B")]
		[Address(RVA = "0x4484650", Offset = "0x4484650", VA = "0x4484650", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B6")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x4484690", Offset = "0x4484690", VA = "0x4484690", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001B7")]
	public override string LocalName
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x4484770", Offset = "0x4484770", VA = "0x4484770", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x44847A0", Offset = "0x44847A0", VA = "0x44847A0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	public override string Name
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x4484890", Offset = "0x4484890", VA = "0x4484890", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	public override string Prefix
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x4484A00", Offset = "0x4484A00", VA = "0x4484A00", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public override string Value
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x4484AC0", Offset = "0x4484AC0", VA = "0x4484AC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BC")]
	private string ValueDocument
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x4484C00", Offset = "0x4484C00", VA = "0x4484C00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	private string ValueText
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x4484CB0", Offset = "0x4484CB0", VA = "0x4484CB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	public override string BaseURI
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x4484F80", Offset = "0x4484F80", VA = "0x4484F80", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	public override string XmlLang
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x4484FB0", Offset = "0x4484FB0", VA = "0x4484FB0", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C0")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x4484FE0", Offset = "0x4484FE0", VA = "0x4484FE0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x4487FA0", Offset = "0x4487FA0", VA = "0x4487FA0", Slot = "55")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4484390", Offset = "0x4484390", VA = "0x4484390")]
	public DocumentXPathNavigator(XmlDocument document, XmlNode node)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4484560", Offset = "0x4484560", VA = "0x4484560")]
	public DocumentXPathNavigator(DocumentXPathNavigator other)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4484600", Offset = "0x4484600", VA = "0x4484600", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x4484FF0", Offset = "0x4484FF0", VA = "0x4484FF0", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x4485300", Offset = "0x4485300", VA = "0x4485300", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x4485450", Offset = "0x4485450", VA = "0x4485450", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x4485770", Offset = "0x4485770", VA = "0x4485770", Slot = "37")]
	public override bool MoveToNamespace(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x4485B00", Offset = "0x4485B00", VA = "0x4485B00", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x4485D90", Offset = "0x4485D90", VA = "0x4485D90")]
	private static bool MoveToFirstNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x4485E20", Offset = "0x4485E20", VA = "0x4485E20")]
	private static bool MoveToFirstNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x44860C0", Offset = "0x44860C0", VA = "0x44860C0", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x44866C0", Offset = "0x44866C0", VA = "0x44866C0")]
	private static bool MoveToNextNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x4485F70", Offset = "0x4485F70", VA = "0x4485F70")]
	private static bool MoveToNextNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x4486740", Offset = "0x4486740", VA = "0x4486740")]
	private bool PathHasDuplicateNamespace(XmlElement top, XmlElement bottom, string localName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x4486840", Offset = "0x4486840", VA = "0x4486840", Slot = "22")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x44868A0", Offset = "0x44868A0", VA = "0x44868A0", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x4486C40", Offset = "0x4486C40", VA = "0x4486C40", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x4486F20", Offset = "0x4486F20", VA = "0x4486F20", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x44870A0", Offset = "0x44870A0", VA = "0x44870A0", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x44871D0", Offset = "0x44871D0", VA = "0x44871D0", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4487270", Offset = "0x4487270", VA = "0x4487270", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x44872D0", Offset = "0x44872D0", VA = "0x44872D0", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x4487440", Offset = "0x4487440", VA = "0x4487440", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x44875C0", Offset = "0x44875C0", VA = "0x44875C0", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceUri, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x4487820", Offset = "0x4487820", VA = "0x4487820", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4487AE0", Offset = "0x4487AE0", VA = "0x4487AE0", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4487BB0", Offset = "0x4487BB0", VA = "0x4487BB0", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4487D00", Offset = "0x4487D00", VA = "0x4487D00", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4487D90", Offset = "0x4487D90", VA = "0x4487D90", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4487FD0", Offset = "0x4487FD0", VA = "0x4487FD0")]
	private static XmlNode OwnerNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4488070", Offset = "0x4488070", VA = "0x4488070")]
	private static int GetDepth(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x44881F0", Offset = "0x44881F0", VA = "0x44881F0")]
	private XmlNodeOrder Compare(XmlNode node1, XmlNode node2)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x44883C0", Offset = "0x44883C0", VA = "0x44883C0", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4488B00", Offset = "0x4488B00", VA = "0x4488B00", Slot = "64")]
	private XmlNode System_002EXml_002EIHasXmlNode_002EGetNode()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4488B10", Offset = "0x4488B10", VA = "0x4488B10", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string localName, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4488E20", Offset = "0x4488E20", VA = "0x4488E20", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType nt, bool includeSelf)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4484400", Offset = "0x4484400", VA = "0x4484400")]
	internal void ResetPosition(XmlNode node)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x4485700", Offset = "0x4485700", VA = "0x4485700")]
	private static bool ResetAttributePosition(XmlAttribute attribute, XmlAttributeCollection attributes, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x4485650", Offset = "0x4485650", VA = "0x4485650")]
	private static bool CheckAttributePosition(XmlAttribute attribute, out XmlAttributeCollection attributes, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x44846C0", Offset = "0x44846C0", VA = "0x44846C0")]
	private void CalibrateText()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x4486B00", Offset = "0x4486B00", VA = "0x4486B00")]
	private XmlNode ParentNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x4488FA0", Offset = "0x4488FA0", VA = "0x4488FA0")]
	private XmlNode ParentNodeTail(XmlNode parent)
	{
		return null;
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x4486E90", Offset = "0x4486E90", VA = "0x4486E90")]
	private XmlNode FirstChild(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x4489000", Offset = "0x4489000", VA = "0x4489000")]
	private XmlNode FirstChildTail(XmlNode child)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x4484E80", Offset = "0x4484E80", VA = "0x4484E80")]
	private XmlNode NextSibling(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x4489060", Offset = "0x4489060", VA = "0x4489060")]
	private XmlNode NextSiblingTail(XmlNode node, XmlNode sibling)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x4488F40", Offset = "0x4488F40", VA = "0x4488F40")]
	private XmlNode PreviousText(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x4489120", Offset = "0x4489120", VA = "0x4489120")]
	private XmlNode PreviousTextTail(XmlNode node, XmlNode text)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x4487EC0", Offset = "0x4487EC0", VA = "0x4487EC0")]
	private static bool IsDescendant(XmlNode top, XmlNode bottom)
	{
		return default(bool);
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x4486B90", Offset = "0x4486B90", VA = "0x4486B90")]
	private static bool IsValidChild(XmlNode parent, XmlNode child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x4486AB0", Offset = "0x4486AB0", VA = "0x4486AB0")]
	private XmlNode TextEnd(XmlNode node)
	{
		return null;
	}
}
