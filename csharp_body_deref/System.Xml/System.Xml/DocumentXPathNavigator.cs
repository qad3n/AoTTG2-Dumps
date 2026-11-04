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
		[Address(RVA = "0x2709DA0", Offset = "0x27083A0", VA = "0x182709DA0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B6")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x600074C")]
		[Address(RVA = "0x270A000", Offset = "0x2708600", VA = "0x18270A000", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x170001B7")]
	public override string LocalName
	{
		[Token(Token = "0x600074D")]
		[Address(RVA = "0x2709D70", Offset = "0x2708370", VA = "0x182709D70", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B8")]
	public override string NamespaceURI
	{
		[Token(Token = "0x600074E")]
		[Address(RVA = "0x2709F40", Offset = "0x2708540", VA = "0x182709F40", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B9")]
	public override string Name
	{
		[Token(Token = "0x600074F")]
		[Address(RVA = "0x2709DD0", Offset = "0x27083D0", VA = "0x182709DD0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	public override string Prefix
	{
		[Token(Token = "0x6000750")]
		[Address(RVA = "0x270A070", Offset = "0x2708670", VA = "0x18270A070", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public override string Value
	{
		[Token(Token = "0x6000751")]
		[Address(RVA = "0x270A350", Offset = "0x2708950", VA = "0x18270A350", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BC")]
	private string ValueDocument
	{
		[Token(Token = "0x6000752")]
		[Address(RVA = "0x270A190", Offset = "0x2708790", VA = "0x18270A190")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	private string ValueText
	{
		[Token(Token = "0x6000753")]
		[Address(RVA = "0x270A1E0", Offset = "0x27087E0", VA = "0x18270A1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BE")]
	public override string BaseURI
	{
		[Token(Token = "0x6000754")]
		[Address(RVA = "0x2709D40", Offset = "0x2708340", VA = "0x182709D40", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	public override string XmlLang
	{
		[Token(Token = "0x6000755")]
		[Address(RVA = "0x270A5B0", Offset = "0x2708BB0", VA = "0x18270A5B0", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C0")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6000756")]
		[Address(RVA = "0x270A130", Offset = "0x2708730", VA = "0x18270A130", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public override IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x1A56030", Offset = "0x1A54630", VA = "0x181A56030", Slot = "55")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x2709C20", Offset = "0x2708220", VA = "0x182709C20")]
	public DocumentXPathNavigator(XmlDocument document, XmlNode node)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x2709CA0", Offset = "0x27082A0", VA = "0x182709CA0")]
	public DocumentXPathNavigator(DocumentXPathNavigator other)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x2705650", Offset = "0x2703C50", VA = "0x182705650", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6000757")]
	[Address(RVA = "0x27063E0", Offset = "0x27049E0", VA = "0x1827063E0", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000758")]
	[Address(RVA = "0x2706870", Offset = "0x2704E70", VA = "0x182706870", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6000759")]
	[Address(RVA = "0x27079C0", Offset = "0x2705FC0", VA = "0x1827079C0", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x600075A")]
	[Address(RVA = "0x27076A0", Offset = "0x2705CA0", VA = "0x1827076A0", Slot = "37")]
	public override bool MoveToNamespace(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600075B")]
	[Address(RVA = "0x2706E40", Offset = "0x2705440", VA = "0x182706E40", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075C")]
	[Address(RVA = "0x2706DA0", Offset = "0x27053A0", VA = "0x182706DA0")]
	private static bool MoveToFirstNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2706C00", Offset = "0x2705200", VA = "0x182706C00")]
	private static bool MoveToFirstNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x2707E60", Offset = "0x2706460", VA = "0x182707E60", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x600075F")]
	[Address(RVA = "0x2707DC0", Offset = "0x27063C0", VA = "0x182707DC0")]
	private static bool MoveToNextNamespaceLocal(XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000760")]
	[Address(RVA = "0x2707C20", Offset = "0x2706220", VA = "0x182707C20")]
	private static bool MoveToNextNamespaceGlobal(ref XmlAttributeCollection attributes, ref int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000761")]
	[Address(RVA = "0x2709320", Offset = "0x2707920", VA = "0x182709320")]
	private bool PathHasDuplicateNamespace(XmlElement top, XmlElement bottom, string localName)
	{
		return default(bool);
	}

	[Token(Token = "0x6000762")]
	[Address(RVA = "0x2706370", Offset = "0x2704970", VA = "0x182706370", Slot = "22")]
	public override string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000763")]
	[Address(RVA = "0x2708840", Offset = "0x2706E40", VA = "0x182708840", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6000764")]
	[Address(RVA = "0x27069B0", Offset = "0x2704FB0", VA = "0x1827069B0", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6000765")]
	[Address(RVA = "0x2708C40", Offset = "0x2707240", VA = "0x182708C40", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6000766")]
	[Address(RVA = "0x2708DE0", Offset = "0x27073E0", VA = "0x182708DE0", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x2708F00", Offset = "0x2707500", VA = "0x182708F00", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x2707640", Offset = "0x2705C40", VA = "0x182707640", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x2706590", Offset = "0x2704B90", VA = "0x182706590", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x2706700", Offset = "0x2704D00", VA = "0x182706700", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x2707140", Offset = "0x2705740", VA = "0x182707140", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceUri, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x27073C0", Offset = "0x27059C0", VA = "0x1827073C0", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x2708A30", Offset = "0x2707030", VA = "0x182708A30", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceUri)
	{
		return default(bool);
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x2708B00", Offset = "0x2707100", VA = "0x182708B00", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x2706180", Offset = "0x2704780", VA = "0x182706180", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x2705FB0", Offset = "0x27045B0", VA = "0x182705FB0", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x2709190", Offset = "0x2707790", VA = "0x182709190")]
	private static XmlNode OwnerNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x2705E70", Offset = "0x2704470", VA = "0x182705E70")]
	private static int GetDepth(XmlNode node)
	{
		return default(int);
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x2705BA0", Offset = "0x27041A0", VA = "0x182705BA0")]
	private XmlNodeOrder Compare(XmlNode node1, XmlNode node2)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x2705720", Offset = "0x2703D20", VA = "0x182705720", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "64")]
	private XmlNode System_002EXml_002EIHasXmlNode_002EGetNode()
	{
		return null;
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x27099A0", Offset = "0x2707FA0", VA = "0x1827099A0", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string localName, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x2709870", Offset = "0x2707E70", VA = "0x182709870", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType nt, bool includeSelf)
	{
		return null;
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x2709700", Offset = "0x2707D00", VA = "0x182709700")]
	internal void ResetPosition(XmlNode node)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x2709680", Offset = "0x2707C80", VA = "0x182709680")]
	private static bool ResetAttributePosition(XmlAttribute attribute, XmlAttributeCollection attributes, out int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x2705580", Offset = "0x2703B80", VA = "0x182705580")]
	private static bool CheckAttributePosition(XmlAttribute attribute, out XmlAttributeCollection attributes, int index)
	{
		return default(bool);
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x2705530", Offset = "0x2703B30", VA = "0x182705530")]
	private void CalibrateText()
	{
	}

	[Token(Token = "0x600077D")]
	[Address(RVA = "0x2709290", Offset = "0x2707890", VA = "0x182709290")]
	private XmlNode ParentNode(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600077E")]
	[Address(RVA = "0x2709230", Offset = "0x2707830", VA = "0x182709230")]
	private XmlNode ParentNodeTail(XmlNode parent)
	{
		return null;
	}

	[Token(Token = "0x600077F")]
	[Address(RVA = "0x2705DE0", Offset = "0x27043E0", VA = "0x182705DE0")]
	private XmlNode FirstChild(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000780")]
	[Address(RVA = "0x2705D80", Offset = "0x2704380", VA = "0x182705D80")]
	private XmlNode FirstChildTail(XmlNode child)
	{
		return null;
	}

	[Token(Token = "0x6000781")]
	[Address(RVA = "0x2709080", Offset = "0x2707680", VA = "0x182709080")]
	private XmlNode NextSibling(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x2708FB0", Offset = "0x27075B0", VA = "0x182708FB0")]
	private XmlNode NextSiblingTail(XmlNode node, XmlNode sibling)
	{
		return null;
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x2709540", Offset = "0x2707B40", VA = "0x182709540")]
	private XmlNode PreviousText(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x2709420", Offset = "0x2707A20", VA = "0x182709420")]
	private XmlNode PreviousTextTail(XmlNode node, XmlNode text)
	{
		return null;
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x27060C0", Offset = "0x27046C0", VA = "0x1827060C0")]
	private static bool IsDescendant(XmlNode top, XmlNode bottom)
	{
		return default(bool);
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x2706290", Offset = "0x2704890", VA = "0x182706290")]
	private static bool IsValidChild(XmlNode parent, XmlNode child)
	{
		return default(bool);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x2709BB0", Offset = "0x27081B0", VA = "0x182709BB0")]
	private XmlNode TextEnd(XmlNode node)
	{
		return null;
	}
}
