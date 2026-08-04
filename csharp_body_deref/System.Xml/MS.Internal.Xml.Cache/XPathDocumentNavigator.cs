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
		[Address(RVA = "0x478FD80", Offset = "0x478FD80", VA = "0x478FD80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074F")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x4790390", Offset = "0x4790390", VA = "0x4790390", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000750")]
	public override string LocalName
	{
		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x47903D0", Offset = "0x47903D0", VA = "0x47903D0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000751")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x4790430", Offset = "0x4790430", VA = "0x4790430", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000752")]
	public override string Name
	{
		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x4790490", Offset = "0x4790490", VA = "0x4790490", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public override string Prefix
	{
		[Token(Token = "0x6001C86")]
		[Address(RVA = "0x4790580", Offset = "0x4790580", VA = "0x4790580", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public override string BaseURI
	{
		[Token(Token = "0x6001C87")]
		[Address(RVA = "0x47905E0", Offset = "0x47905E0", VA = "0x47905E0", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000755")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x4790700", Offset = "0x4790700", VA = "0x4790700", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000756")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6001CA3")]
		[Address(RVA = "0x4792E60", Offset = "0x4792E60", VA = "0x4792E60", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000757")]
	public int LineNumber
	{
		[Token(Token = "0x6001CA5")]
		[Address(RVA = "0x4792EC0", Offset = "0x4792EC0", VA = "0x4792EC0", Slot = "65")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000758")]
	public int LinePosition
	{
		[Token(Token = "0x6001CA6")]
		[Address(RVA = "0x4792F60", Offset = "0x4792F60", VA = "0x4792F60", Slot = "66")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x478FCF0", Offset = "0x478FCF0", VA = "0x478FCF0")]
	public XPathDocumentNavigator(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent)
	{
	}

	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x478EF80", Offset = "0x478EF80", VA = "0x478EF80")]
	public XPathDocumentNavigator(XPathDocumentNavigator nav)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x47902D0", Offset = "0x47902D0", VA = "0x47902D0", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x4790760", Offset = "0x4790760", VA = "0x4790760", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x4790860", Offset = "0x4790860", VA = "0x4790860", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x4790910", Offset = "0x4790910", VA = "0x4790910", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x4790B30", Offset = "0x4790B30", VA = "0x4790B30", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x4790EA0", Offset = "0x4790EA0", VA = "0x4790EA0", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x4791150", Offset = "0x4791150", VA = "0x4791150", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x47911F0", Offset = "0x47911F0", VA = "0x47911F0", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x47913A0", Offset = "0x47913A0", VA = "0x47913A0", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x47914E0", Offset = "0x47914E0", VA = "0x47914E0", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x4791580", Offset = "0x4791580", VA = "0x4791580", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x4791620", Offset = "0x4791620", VA = "0x4791620", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x47916B0", Offset = "0x47916B0", VA = "0x47916B0", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x4791740", Offset = "0x4791740", VA = "0x4791740", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x4791930", Offset = "0x4791930", VA = "0x4791930", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x4791AE0", Offset = "0x4791AE0", VA = "0x4791AE0", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x4791D10", Offset = "0x4791D10", VA = "0x4791D10", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x4791E40", Offset = "0x4791E40", VA = "0x4791E40", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x4792450", Offset = "0x4792450", VA = "0x4792450", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x47928B0", Offset = "0x47928B0", VA = "0x47928B0", Slot = "60")]
	public override XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x4792960", Offset = "0x4792960", VA = "0x4792960", Slot = "61")]
	public override XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x47929F0", Offset = "0x47929F0", VA = "0x47929F0", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x4792A50", Offset = "0x4792A50", VA = "0x4792A50", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x4792AE0", Offset = "0x4792AE0", VA = "0x4792AE0", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x4792CE0", Offset = "0x4792CE0", VA = "0x4792CE0", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x4792BE0", Offset = "0x4792BE0", VA = "0x4792BE0")]
	private int GetPrimaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x4792C50", Offset = "0x4792C50", VA = "0x4792C50")]
	private int GetSecondaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x4792E80", Offset = "0x4792E80", VA = "0x4792E80", Slot = "64")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x4793030", Offset = "0x4793030", VA = "0x4793030")]
	public int GetPositionHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x478F8C0", Offset = "0x478F8C0", VA = "0x478F8C0")]
	public bool IsElementMatch(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA9")]
	[Address(RVA = "0x478FC70", Offset = "0x478FC70", VA = "0x478FC70")]
	public bool IsKindMatch(XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x4791F90", Offset = "0x4791F90", VA = "0x4791F90")]
	private int GetFollowingEnd(XPathDocumentNavigator end, bool useParentOfVirtual, out XPathNode[] pageEnd)
	{
		return default(int);
	}
}
