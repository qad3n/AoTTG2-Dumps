// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.DocumentXPathNavigator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47C1DB0", Offset = "0x47C1DB0", VA = "0x47C1DB0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B6")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x47C1DF0", Offset = "0x47C1DF0", VA = "0x47C1DF0", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001B7")]
	public override string LocalName
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x47C1ED0", Offset = "0x47C1ED0", VA = "0x47C1ED0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x47C1F00", Offset = "0x47C1F00", VA = "0x47C1F00", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	public override string Name
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x47C1FF0", Offset = "0x47C1FF0", VA = "0x47C1FF0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	public override string Prefix
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x47C2160", Offset = "0x47C2160", VA = "0x47C2160", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public override string Value
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x47C2220", Offset = "0x47C2220", VA = "0x47C2220", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BC")]
	private string ValueDocument
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x47C2360", Offset = "0x47C2360", VA = "0x47C2360")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	private string ValueText
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x47C2410", Offset = "0x47C2410", VA = "0x47C2410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	public override string BaseURI
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x47C26E0", Offset = "0x47C26E0", VA = "0x47C26E0", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	public override string XmlLang
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x47C2710", Offset = "0x47C2710", VA = "0x47C2710", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C0")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x47C2740", Offset = "0x47C2740", VA = "0x47C2740", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x47C5700", Offset = "0x47C5700", VA = "0x47C5700", Slot = "55")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x47C1AF0", Offset = "0x47C1AF0", VA = "0x47C1AF0")]
	public DocumentXPathNavigator(XmlDocument document, XmlNode node)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x47C1CC0", Offset = "0x47C1CC0", VA = "0x47C1CC0")]
	public DocumentXPathNavigator(DocumentXPathNavigator other)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x47C1D60", Offset = "0x47C1D60", VA = "0x47C1D60", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x47C2750", Offset = "0x47C2750", VA = "0x47C2750", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x47C2A60", Offset = "0x47C2A60", VA = "0x47C2A60", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x47C2BB0", Offset = "0x47C2BB0", VA = "0x47C2BB0", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x47C2ED0", Offset = "0x47C2ED0", VA = "0x47C2ED0", Slot = "37")]
	public override bool MoveToNamespace(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x47C3260", Offset = "0x47C3260", VA = "0x47C3260", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x47C34F0", Offset = "0x47C34F0", VA = "0x47C34F0")]
	private static bool MoveToFirstNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x47C3580", Offset = "0x47C3580", VA = "0x47C3580")]
	private static bool MoveToFirstNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x47C3820", Offset = "0x47C3820", VA = "0x47C3820", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x47C3E20", Offset = "0x47C3E20", VA = "0x47C3E20")]
	private static bool MoveToNextNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x47C36D0", Offset = "0x47C36D0", VA = "0x47C36D0")]
	private static bool MoveToNextNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x47C3EA0", Offset = "0x47C3EA0", VA = "0x47C3EA0")]
	private bool PathHasDuplicateNamespace(XmlElement top, XmlElement bottom, string localName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x47C3FA0", Offset = "0x47C3FA0", VA = "0x47C3FA0", Slot = "22")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x47C4000", Offset = "0x47C4000", VA = "0x47C4000", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x47C43A0", Offset = "0x47C43A0", VA = "0x47C43A0", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x47C4680", Offset = "0x47C4680", VA = "0x47C4680", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x47C4800", Offset = "0x47C4800", VA = "0x47C4800", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x47C4930", Offset = "0x47C4930", VA = "0x47C4930", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x47C49D0", Offset = "0x47C49D0", VA = "0x47C49D0", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x47C4A30", Offset = "0x47C4A30", VA = "0x47C4A30", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x47C4BA0", Offset = "0x47C4BA0", VA = "0x47C4BA0", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x47C4D20", Offset = "0x47C4D20", VA = "0x47C4D20", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceUri, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x47C4F80", Offset = "0x47C4F80", VA = "0x47C4F80", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x47C5240", Offset = "0x47C5240", VA = "0x47C5240", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x47C5310", Offset = "0x47C5310", VA = "0x47C5310", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x47C5460", Offset = "0x47C5460", VA = "0x47C5460", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x47C54F0", Offset = "0x47C54F0", VA = "0x47C54F0", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x47C5730", Offset = "0x47C5730", VA = "0x47C5730")]
	private static XmlNode OwnerNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x47C57D0", Offset = "0x47C57D0", VA = "0x47C57D0")]
	private static int GetDepth(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x47C5950", Offset = "0x47C5950", VA = "0x47C5950")]
	private XmlNodeOrder Compare(XmlNode node1, XmlNode node2)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x47C5B20", Offset = "0x47C5B20", VA = "0x47C5B20", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x47C6260", Offset = "0x47C6260", VA = "0x47C6260", Slot = "64")]
	private XmlNode System_002EXml_002EIHasXmlNode_002EGetNode()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x47C6270", Offset = "0x47C6270", VA = "0x47C6270", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string localName, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x47C6580", Offset = "0x47C6580", VA = "0x47C6580", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType nt, bool includeSelf)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x47C1B60", Offset = "0x47C1B60", VA = "0x47C1B60")]
	internal void ResetPosition(XmlNode node)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x47C2E60", Offset = "0x47C2E60", VA = "0x47C2E60")]
	private static bool ResetAttributePosition(XmlAttribute attribute, XmlAttributeCollection attributes, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x47C2DB0", Offset = "0x47C2DB0", VA = "0x47C2DB0")]
	private static bool CheckAttributePosition(XmlAttribute attribute, out XmlAttributeCollection attributes, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x47C1E20", Offset = "0x47C1E20", VA = "0x47C1E20")]
	private void CalibrateText()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x47C4260", Offset = "0x47C4260", VA = "0x47C4260")]
	private XmlNode ParentNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x47C6700", Offset = "0x47C6700", VA = "0x47C6700")]
	private XmlNode ParentNodeTail(XmlNode parent)
	{
		return null;
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x47C45F0", Offset = "0x47C45F0", VA = "0x47C45F0")]
	private XmlNode FirstChild(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x47C6760", Offset = "0x47C6760", VA = "0x47C6760")]
	private XmlNode FirstChildTail(XmlNode child)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x47C25E0", Offset = "0x47C25E0", VA = "0x47C25E0")]
	private XmlNode NextSibling(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x47C67C0", Offset = "0x47C67C0", VA = "0x47C67C0")]
	private XmlNode NextSiblingTail(XmlNode node, XmlNode sibling)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x47C66A0", Offset = "0x47C66A0", VA = "0x47C66A0")]
	private XmlNode PreviousText(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x47C6880", Offset = "0x47C6880", VA = "0x47C6880")]
	private XmlNode PreviousTextTail(XmlNode node, XmlNode text)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x47C5620", Offset = "0x47C5620", VA = "0x47C5620")]
	private static bool IsDescendant(XmlNode top, XmlNode bottom)
	{
		return default(bool);
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x47C42F0", Offset = "0x47C42F0", VA = "0x47C42F0")]
	private static bool IsValidChild(XmlNode parent, XmlNode child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x47C4210", Offset = "0x47C4210", VA = "0x47C4210")]
	private XmlNode TextEnd(XmlNode node)
	{
		return null;
	}
}
