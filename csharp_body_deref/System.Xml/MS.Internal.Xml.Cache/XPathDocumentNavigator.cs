// ==================== AoTTG2 cross-reference ====================
// Type: MS.Internal.Xml.Cache.XPathDocumentNavigator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60953C0", Offset = "0x60943C0", VA = "0x60953C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074F")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x60959D0", Offset = "0x60949D0", VA = "0x60959D0", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000750")]
	public override string LocalName
	{
		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x6095A10", Offset = "0x6094A10", VA = "0x6095A10", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000751")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x6095A70", Offset = "0x6094A70", VA = "0x6095A70", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000752")]
	public override string Name
	{
		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x6095AD0", Offset = "0x6094AD0", VA = "0x6095AD0", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public override string Prefix
	{
		[Token(Token = "0x6001C86")]
		[Address(RVA = "0x6095BB0", Offset = "0x6094BB0", VA = "0x6095BB0", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public override string BaseURI
	{
		[Token(Token = "0x6001C87")]
		[Address(RVA = "0x6095C10", Offset = "0x6094C10", VA = "0x6095C10", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000755")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x6095D40", Offset = "0x6094D40", VA = "0x6095D40", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000756")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6001CA3")]
		[Address(RVA = "0x6098410", Offset = "0x6097410", VA = "0x6098410", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000757")]
	public int LineNumber
	{
		[Token(Token = "0x6001CA5")]
		[Address(RVA = "0x6098470", Offset = "0x6097470", VA = "0x6098470", Slot = "65")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000758")]
	public int LinePosition
	{
		[Token(Token = "0x6001CA6")]
		[Address(RVA = "0x6098510", Offset = "0x6097510", VA = "0x6098510", Slot = "66")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x6095330", Offset = "0x6094330", VA = "0x6095330")]
	public XPathDocumentNavigator(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent)
	{
	}

	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x60945B0", Offset = "0x60935B0", VA = "0x60945B0")]
	public XPathDocumentNavigator(XPathDocumentNavigator nav)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x6095900", Offset = "0x6094900", VA = "0x6095900", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x6095DA0", Offset = "0x6094DA0", VA = "0x6095DA0", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x6095EC0", Offset = "0x6094EC0", VA = "0x6095EC0", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x6095F70", Offset = "0x6094F70", VA = "0x6095F70", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x60961B0", Offset = "0x60951B0", VA = "0x60961B0", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x6096540", Offset = "0x6095540", VA = "0x6096540", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x6096790", Offset = "0x6095790", VA = "0x6096790", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x6096830", Offset = "0x6095830", VA = "0x6096830", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x6096A00", Offset = "0x6095A00", VA = "0x6096A00", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x6096B40", Offset = "0x6095B40", VA = "0x6096B40", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x6096BC0", Offset = "0x6095BC0", VA = "0x6096BC0", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x6096C50", Offset = "0x6095C50", VA = "0x6096C50", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x6096CD0", Offset = "0x6095CD0", VA = "0x6096CD0", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x6096D60", Offset = "0x6095D60", VA = "0x6096D60", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x6096F50", Offset = "0x6095F50", VA = "0x6096F50", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x6097100", Offset = "0x6096100", VA = "0x6097100", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x6097320", Offset = "0x6096320", VA = "0x6097320", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x6097460", Offset = "0x6096460", VA = "0x6097460", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x6097A50", Offset = "0x6096A50", VA = "0x6097A50", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x6097E80", Offset = "0x6096E80", VA = "0x6097E80", Slot = "60")]
	public override XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x6097F30", Offset = "0x6096F30", VA = "0x6097F30", Slot = "61")]
	public override XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x6097FC0", Offset = "0x6096FC0", VA = "0x6097FC0", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x6098020", Offset = "0x6097020", VA = "0x6098020", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x60980B0", Offset = "0x60970B0", VA = "0x60980B0", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x60982B0", Offset = "0x60972B0", VA = "0x60982B0", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x60981A0", Offset = "0x60971A0", VA = "0x60981A0")]
	private int GetPrimaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x6098210", Offset = "0x6097210", VA = "0x6098210")]
	private int GetSecondaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x6098430", Offset = "0x6097430", VA = "0x6098430", Slot = "64")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x60985E0", Offset = "0x60975E0", VA = "0x60985E0")]
	public int GetPositionHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x6094F00", Offset = "0x6093F00", VA = "0x6094F00")]
	public bool IsElementMatch(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA9")]
	[Address(RVA = "0x60952B0", Offset = "0x60942B0", VA = "0x60952B0")]
	public bool IsKindMatch(XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x60975B0", Offset = "0x60965B0", VA = "0x60975B0")]
	private int GetFollowingEnd(XPathDocumentNavigator end, bool useParentOfVirtual, out XPathNode[] pageEnd)
	{
		return default(int);
	}
}
