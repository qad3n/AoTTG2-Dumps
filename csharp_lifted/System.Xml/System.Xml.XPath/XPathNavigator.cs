// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathNavigator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.XPath;

[Token(Token = "0x20000FB")]
[DebuggerDisplay("{debuggerDisplayProxy}")]
public abstract class XPathNavigator : XPathItem, ICloneable, IXPathNavigable, IXmlNamespaceResolver
{
	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly XPathNavigatorKeyComparer comparer;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly char[] NodeTypeLetter;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly char[] UniqueIdTbl;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly int[] ContentKindMasks;

	[Token(Token = "0x1700031A")]
	public override XmlSchemaType XmlType
	{
		[Token(Token = "0x6000C5A")]
		[Address(RVA = "0x61069C0", Offset = "0x61059C0", VA = "0x61069C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031B")]
	public override object TypedValue
	{
		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x6106B60", Offset = "0x6105B60", VA = "0x6106B60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031C")]
	public override Type ValueType
	{
		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x6106E80", Offset = "0x6105E80", VA = "0x6106E80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x61070B0", Offset = "0x61060B0", VA = "0x61070B0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031E")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x61073B0", Offset = "0x61063B0", VA = "0x61073B0", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700031F")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x61076B0", Offset = "0x61066B0", VA = "0x61076B0", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000320")]
	public override int ValueAsInt
	{
		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x61079B0", Offset = "0x61069B0", VA = "0x61079B0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000321")]
	public override long ValueAsLong
	{
		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x6107CB0", Offset = "0x6106CB0", VA = "0x6107CB0", Slot = "12")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000322")]
	public abstract XmlNameTable NameTable
	{
		[Token(Token = "0x6000C65")]
		get;
	}

	[Token(Token = "0x17000323")]
	public abstract XPathNodeType NodeType
	{
		[Token(Token = "0x6000C6A")]
		get;
	}

	[Token(Token = "0x17000324")]
	public abstract string LocalName
	{
		[Token(Token = "0x6000C6B")]
		get;
	}

	[Token(Token = "0x17000325")]
	public abstract string Name
	{
		[Token(Token = "0x6000C6C")]
		get;
	}

	[Token(Token = "0x17000326")]
	public abstract string NamespaceURI
	{
		[Token(Token = "0x6000C6D")]
		get;
	}

	[Token(Token = "0x17000327")]
	public abstract string Prefix
	{
		[Token(Token = "0x6000C6E")]
		get;
	}

	[Token(Token = "0x17000328")]
	public abstract string BaseURI
	{
		[Token(Token = "0x6000C6F")]
		get;
	}

	[Token(Token = "0x17000329")]
	public virtual string XmlLang
	{
		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x61089F0", Offset = "0x61079F0", VA = "0x61089F0", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032A")]
	public virtual object UnderlyingObject
	{
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x6108AC0", Offset = "0x6107AC0", VA = "0x6108AC0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x6109C10", Offset = "0x6108C10", VA = "0x6109C10", Slot = "55")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x61069A0", Offset = "0x61059A0", VA = "0x61069A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x6107FB0", Offset = "0x6106FB0", VA = "0x6107FB0", Slot = "14")]
	public override object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x61082F0", Offset = "0x61072F0", VA = "0x61082F0", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x6108310", Offset = "0x6107310", VA = "0x6108310", Slot = "20")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x6108330", Offset = "0x6107330", VA = "0x6108330", Slot = "22")]
	public virtual string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x61084C0", Offset = "0x61074C0", VA = "0x61084C0", Slot = "23")]
	public virtual string LookupPrefix(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x61086B0", Offset = "0x61076B0", VA = "0x61086B0", Slot = "24")]
	public virtual IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000C69")]
	public abstract XPathNavigator Clone();

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x6108AD0", Offset = "0x6107AD0", VA = "0x6108AD0", Slot = "34")]
	public virtual bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C73")]
	public abstract bool MoveToFirstAttribute();

	[Token(Token = "0x6000C74")]
	public abstract bool MoveToNextAttribute();

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x6108B90", Offset = "0x6107B90", VA = "0x6108B90", Slot = "37")]
	public virtual bool MoveToNamespace(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	public abstract bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope);

	[Token(Token = "0x6000C77")]
	public abstract bool MoveToNextNamespace(XPathNamespaceScope namespaceScope);

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x6108C20", Offset = "0x6107C20", VA = "0x6108C20")]
	public bool MoveToFirstNamespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x6108C40", Offset = "0x6107C40", VA = "0x6108C40")]
	public bool MoveToNextNamespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C7A")]
	public abstract bool MoveToNext();

	[Token(Token = "0x6000C7B")]
	public abstract bool MoveToFirstChild();

	[Token(Token = "0x6000C7C")]
	public abstract bool MoveToParent();

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x6108C60", Offset = "0x6107C60", VA = "0x6108C60", Slot = "43")]
	public virtual void MoveToRoot()
	{
	}

	[Token(Token = "0x6000C7E")]
	public abstract bool MoveTo(XPathNavigator other);

	[Token(Token = "0x6000C7F")]
	public abstract bool MoveToId(string id);

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x6108C90", Offset = "0x6107C90", VA = "0x6108C90", Slot = "46")]
	public virtual bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x6108D60", Offset = "0x6107D60", VA = "0x6108D60", Slot = "47")]
	public virtual bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x6108F40", Offset = "0x6107F40", VA = "0x6108F40", Slot = "48")]
	public virtual bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x6109210", Offset = "0x6108210", VA = "0x6109210", Slot = "49")]
	public virtual bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x6109490", Offset = "0x6108490", VA = "0x6109490", Slot = "50")]
	public virtual bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x6109560", Offset = "0x6108560", VA = "0x6109560", Slot = "51")]
	public virtual bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C86")]
	public abstract bool IsSamePosition(XPathNavigator other);

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x61096C0", Offset = "0x61086C0", VA = "0x61096C0", Slot = "53")]
	public virtual bool IsDescendant(XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x6109740", Offset = "0x6108740", VA = "0x6109740", Slot = "54")]
	public virtual XmlNodeOrder ComparePosition(XPathNavigator nav)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x6109C50", Offset = "0x6108C50", VA = "0x6109C50", Slot = "56")]
	public virtual XPathNodeIterator Select(string xpath)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x6109C80", Offset = "0x6108C80", VA = "0x6109C80", Slot = "57")]
	public virtual XPathNodeIterator Select(XPathExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x6109D30", Offset = "0x6108D30", VA = "0x6109D30", Slot = "58")]
	public virtual object Evaluate(XPathExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x6109D50", Offset = "0x6108D50", VA = "0x6109D50", Slot = "59")]
	public virtual object Evaluate(XPathExpression expr, XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x6109F20", Offset = "0x6108F20", VA = "0x6109F20", Slot = "60")]
	public virtual XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x6109F90", Offset = "0x6108F90", VA = "0x6109F90", Slot = "61")]
	public virtual XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x610A010", Offset = "0x6109010", VA = "0x610A010", Slot = "62")]
	public virtual XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x610A090", Offset = "0x6109090", VA = "0x610A090", Slot = "63")]
	public virtual XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x6109100", Offset = "0x6108100", VA = "0x6109100")]
	internal bool MoveToNonDescendant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x6109A70", Offset = "0x6108A70", VA = "0x6109A70")]
	private static int GetDepth(XPathNavigator nav)
	{
		return default(int);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x6109AB0", Offset = "0x6108AB0", VA = "0x6109AB0")]
	private XmlNodeOrder CompareSiblings(XPathNavigator n1, XPathNavigator n2)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x6108EB0", Offset = "0x6107EB0", VA = "0x6108EB0")]
	internal static int GetContentKindMask(XPathNodeType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x610A110", Offset = "0x6109110", VA = "0x610A110")]
	internal static int GetKindMask(XPathNodeType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x610A130", Offset = "0x6109130", VA = "0x610A130")]
	internal static bool IsText(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x610A140", Offset = "0x6109140", VA = "0x610A140")]
	protected XPathNavigator()
	{
	}
}
