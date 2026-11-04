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
		[Address(RVA = "0x26D86E0", Offset = "0x26D6CE0", VA = "0x1826D86E0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700074F")]
	public override XPathNodeType NodeType
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x26D8640", Offset = "0x26D6C40", VA = "0x1826D8640", Slot = "26")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x17000750")]
	public override string LocalName
	{
		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x26D84D0", Offset = "0x26D6AD0", VA = "0x1826D84D0", Slot = "27")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000751")]
	public override string NamespaceURI
	{
		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x26D8600", Offset = "0x26D6C00", VA = "0x1826D8600", Slot = "29")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000752")]
	public override string Name
	{
		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x26D8560", Offset = "0x26D6B60", VA = "0x1826D8560", Slot = "28")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000753")]
	public override string Prefix
	{
		[Token(Token = "0x6001C86")]
		[Address(RVA = "0x26D8680", Offset = "0x26D6C80", VA = "0x1826D8680", Slot = "30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000754")]
	public override string BaseURI
	{
		[Token(Token = "0x6001C87")]
		[Address(RVA = "0x26D82C0", Offset = "0x26D68C0", VA = "0x1826D82C0", Slot = "31")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000755")]
	public override XmlNameTable NameTable
	{
		[Token(Token = "0x6001C88")]
		[Address(RVA = "0x26D8510", Offset = "0x26D6B10", VA = "0x1826D8510", Slot = "21")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000756")]
	public override object UnderlyingObject
	{
		[Token(Token = "0x6001CA3")]
		[Address(RVA = "0x26D86C0", Offset = "0x26D6CC0", VA = "0x1826D86C0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000757")]
	public int LineNumber
	{
		[Token(Token = "0x6001CA5")]
		[Address(RVA = "0x26D83B0", Offset = "0x26D69B0", VA = "0x1826D83B0", Slot = "65")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000758")]
	public int LinePosition
	{
		[Token(Token = "0x6001CA6")]
		[Address(RVA = "0x26D8430", Offset = "0x26D6A30", VA = "0x1826D8430", Slot = "66")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001C7E")]
	[Address(RVA = "0x26D81D0", Offset = "0x26D67D0", VA = "0x1826D81D0")]
	public XPathDocumentNavigator(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent)
	{
	}

	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x26D8260", Offset = "0x26D6860", VA = "0x1826D8260")]
	public XPathDocumentNavigator(XPathDocumentNavigator nav)
	{
	}

	[Token(Token = "0x6001C81")]
	[Address(RVA = "0x26D5C80", Offset = "0x26D4280", VA = "0x1826D5C80", Slot = "25")]
	public override XPathNavigator Clone()
	{
		return null;
	}

	[Token(Token = "0x6001C89")]
	[Address(RVA = "0x26D68D0", Offset = "0x26D4ED0", VA = "0x1826D68D0", Slot = "35")]
	public override bool MoveToFirstAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8A")]
	[Address(RVA = "0x26D7500", Offset = "0x26D5B00", VA = "0x1826D7500", Slot = "36")]
	public override bool MoveToNextAttribute()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8B")]
	[Address(RVA = "0x26D6400", Offset = "0x26D4A00", VA = "0x1826D6400", Slot = "34")]
	public override bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8C")]
	[Address(RVA = "0x26D6B80", Offset = "0x26D5180", VA = "0x1826D6B80", Slot = "38")]
	public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8D")]
	[Address(RVA = "0x26D75C0", Offset = "0x26D5BC0", VA = "0x1826D75C0", Slot = "39")]
	public override bool MoveToNextNamespace(XPathNamespaceScope scope)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8E")]
	[Address(RVA = "0x26D7910", Offset = "0x26D5F10", VA = "0x1826D7910", Slot = "40")]
	public override bool MoveToNext()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C8F")]
	[Address(RVA = "0x26D69A0", Offset = "0x26D4FA0", VA = "0x1826D69A0", Slot = "41")]
	public override bool MoveToFirstChild()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C90")]
	[Address(RVA = "0x26D7AF0", Offset = "0x26D60F0", VA = "0x1826D7AF0", Slot = "42")]
	public override bool MoveToParent()
	{
		return default(bool);
	}

	[Token(Token = "0x6001C91")]
	[Address(RVA = "0x26D7C60", Offset = "0x26D6260", VA = "0x1826D7C60", Slot = "44")]
	public override bool MoveTo(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C92")]
	[Address(RVA = "0x26D7450", Offset = "0x26D5A50", VA = "0x1826D7450", Slot = "45")]
	public override bool MoveToId(string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C93")]
	[Address(RVA = "0x26D6370", Offset = "0x26D4970", VA = "0x1826D6370", Slot = "52")]
	public override bool IsSamePosition(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C94")]
	[Address(RVA = "0x26D7BE0", Offset = "0x26D61E0", VA = "0x1826D7BE0", Slot = "43")]
	public override void MoveToRoot()
	{
	}

	[Token(Token = "0x6001C95")]
	[Address(RVA = "0x26D66F0", Offset = "0x26D4CF0", VA = "0x1826D66F0", Slot = "46")]
	public override bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C96")]
	[Address(RVA = "0x26D7780", Offset = "0x26D5D80", VA = "0x1826D7780", Slot = "50")]
	public override bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C97")]
	[Address(RVA = "0x26D64C0", Offset = "0x26D4AC0", VA = "0x1826D64C0", Slot = "47")]
	public override bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C98")]
	[Address(RVA = "0x26D79C0", Offset = "0x26D5FC0", VA = "0x1826D79C0", Slot = "51")]
	public override bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C99")]
	[Address(RVA = "0x26D6E30", Offset = "0x26D5430", VA = "0x1826D6E30", Slot = "48")]
	public override bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9A")]
	[Address(RVA = "0x26D7030", Offset = "0x26D5630", VA = "0x1826D7030", Slot = "49")]
	public override bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6001C9B")]
	[Address(RVA = "0x26D7ED0", Offset = "0x26D64D0", VA = "0x1826D7ED0", Slot = "60")]
	public override XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6001C9C")]
	[Address(RVA = "0x26D7D00", Offset = "0x26D6300", VA = "0x1826D7D00", Slot = "61")]
	public override XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6001C9D")]
	[Address(RVA = "0x26D8050", Offset = "0x26D6650", VA = "0x1826D8050", Slot = "62")]
	public override XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9E")]
	[Address(RVA = "0x26D7FA0", Offset = "0x26D65A0", VA = "0x1826D7FA0", Slot = "63")]
	public override XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6001C9F")]
	[Address(RVA = "0x26D5D00", Offset = "0x26D4300", VA = "0x1826D5D00", Slot = "54")]
	public override XmlNodeOrder ComparePosition(XPathNavigator other)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6001CA0")]
	[Address(RVA = "0x26D60C0", Offset = "0x26D46C0", VA = "0x1826D60C0", Slot = "53")]
	public override bool IsDescendant(XPathNavigator other)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA1")]
	[Address(RVA = "0x26D5F40", Offset = "0x26D4540", VA = "0x1826D5F40")]
	private int GetPrimaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA2")]
	[Address(RVA = "0x26D5FC0", Offset = "0x26D45C0", VA = "0x1826D5FC0")]
	private int GetSecondaryLocation()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA4")]
	[Address(RVA = "0x26D6070", Offset = "0x26D4670", VA = "0x1826D6070", Slot = "64")]
	public bool HasLineInfo()
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA7")]
	[Address(RVA = "0x26D5F30", Offset = "0x26D4530", VA = "0x1826D5F30")]
	public int GetPositionHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001CA8")]
	[Address(RVA = "0x26D6200", Offset = "0x26D4800", VA = "0x1826D6200")]
	public bool IsElementMatch(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CA9")]
	[Address(RVA = "0x26D62E0", Offset = "0x26D48E0", VA = "0x1826D62E0")]
	public bool IsKindMatch(XPathNodeType typ)
	{
		return default(bool);
	}

	[Token(Token = "0x6001CAA")]
	[Address(RVA = "0x26D5E40", Offset = "0x26D4440", VA = "0x1826D5E40")]
	private int GetFollowingEnd(XPathDocumentNavigator end, bool useParentOfVirtual, out XPathNode[] pageEnd)
	{
		return default(int);
	}
}
