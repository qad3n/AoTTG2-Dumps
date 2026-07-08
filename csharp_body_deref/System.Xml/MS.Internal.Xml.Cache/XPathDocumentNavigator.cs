using System.Xml;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace MS.Internal.Xml.Cache;

[Token(Token = "0x20002D7")]
internal sealed class XPathDocumentNavigator : XPathNavigator, IXmlLineInfo
{
	[Token(Token = "0x4000EFD")]
	[FieldOffset(Offset = "0x10")]
	private XPathNode[] _pageCurrent;

	[Token(Token = "0x4000EFE")]
	[FieldOffset(Offset = "0x18")]
	private XPathNode[] _pageParent;

	[Token(Token = "0x4000EFF")]
	[FieldOffset(Offset = "0x20")]
	private int _idxCurrent;

	[Token(Token = "0x4000F00")]
	[FieldOffset(Offset = "0x24")]
	private int _idxParent;

	[Token(Token = "0x4000F01")]
	[FieldOffset(Offset = "0x28")]
	private string _atomizedLocalName;

	[Token(Token = "0x1700074E")]
	public override string Value
	{
		[Token(Token = "0x6001C80")]
		[Address(RVA = "0x4452620", Offset = "0x4452620", VA = "0x4452620", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074F")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x4452C30", Offset = "0x4452C30", VA = "0x4452C30", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000750")]
	public override string LocalName
	{
		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x4452C70", Offset = "0x4452C70", VA = "0x4452C70", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000751")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x4452CD0", Offset = "0x4452CD0", VA = "0x4452CD0", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000752")]
	public override string Name
	{
		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x4452D30", Offset = "0x4452D30", VA = "0x4452D30", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public override string Prefix
	{
		[Token(Token = "0x6001C86")]
		[Address(RVA = "0x4452E20", Offset = "0x4452E20", VA = "0x4452E20", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public override string BaseURI
	{
		[Token(Token = "0x6001C87")]
		[Address(RVA = "0x4452E80", Offset = "0x4452E80", VA = "0x4452E80", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000755")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x4452FA0", Offset = "0x4452FA0", VA = "0x4452FA0", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000756")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6001CA3")]
		[Address(RVA = "0x4455700", Offset = "0x4455700", VA = "0x4455700", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000757")]
	public int LineNumber
	{
		[Token(Token = "0x6001CA5")]
		[Address(RVA = "0x4455760", Offset = "0x4455760", VA = "0x4455760", Slot = "65")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000758")]
	public int LinePosition
	{
		[Token(Token = "0x6001CA6")]
		[Address(RVA = "0x4455800", Offset = "0x4455800", VA = "0x4455800", Slot = "66")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x4452590", Offset = "0x4452590", VA = "0x4452590")]
	public XPathDocumentNavigator(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent)
	{
	}

	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x4451820", Offset = "0x4451820", VA = "0x4451820")]
	public XPathDocumentNavigator(XPathDocumentNavigator nav)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x4452B70", Offset = "0x4452B70", VA = "0x4452B70", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x4453000", Offset = "0x4453000", VA = "0x4453000", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x4453100", Offset = "0x4453100", VA = "0x4453100", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x44531B0", Offset = "0x44531B0", VA = "0x44531B0", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x44533D0", Offset = "0x44533D0", VA = "0x44533D0", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x4453740", Offset = "0x4453740", VA = "0x4453740", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x44539F0", Offset = "0x44539F0", VA = "0x44539F0", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x4453A90", Offset = "0x4453A90", VA = "0x4453A90", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x4453C40", Offset = "0x4453C40", VA = "0x4453C40", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x4453D80", Offset = "0x4453D80", VA = "0x4453D80", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x4453E20", Offset = "0x4453E20", VA = "0x4453E20", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x4453EC0", Offset = "0x4453EC0", VA = "0x4453EC0", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x4453F50", Offset = "0x4453F50", VA = "0x4453F50", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x4453FE0", Offset = "0x4453FE0", VA = "0x4453FE0", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x44541D0", Offset = "0x44541D0", VA = "0x44541D0", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x4454380", Offset = "0x4454380", VA = "0x4454380", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x44545B0", Offset = "0x44545B0", VA = "0x44545B0", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x44546E0", Offset = "0x44546E0", VA = "0x44546E0", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x4454CF0", Offset = "0x4454CF0", VA = "0x4454CF0", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x4455150", Offset = "0x4455150", VA = "0x4455150", Slot = "60")]
	public override XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x4455200", Offset = "0x4455200", VA = "0x4455200", Slot = "61")]
	public override XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x4455290", Offset = "0x4455290", VA = "0x4455290", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x44552F0", Offset = "0x44552F0", VA = "0x44552F0", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x4455380", Offset = "0x4455380", VA = "0x4455380", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x4455580", Offset = "0x4455580", VA = "0x4455580", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x4455480", Offset = "0x4455480", VA = "0x4455480")]
	private int GetPrimaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x44554F0", Offset = "0x44554F0", VA = "0x44554F0")]
	private int GetSecondaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x4455720", Offset = "0x4455720", VA = "0x4455720", Slot = "64")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x44558D0", Offset = "0x44558D0", VA = "0x44558D0")]
	public int GetPositionHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x4452160", Offset = "0x4452160", VA = "0x4452160")]
	public bool IsElementMatch(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA9")]
	[Address(RVA = "0x4452510", Offset = "0x4452510", VA = "0x4452510")]
	public bool IsKindMatch(XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x4454830", Offset = "0x4454830", VA = "0x4454830")]
	private int GetFollowingEnd(XPathDocumentNavigator end, bool useParentOfVirtual, out XPathNode[] pageEnd)
	{
		return default(int);
	}
}
