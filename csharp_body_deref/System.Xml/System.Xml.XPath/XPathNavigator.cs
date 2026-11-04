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
		[Address(RVA = "0x274B600", Offset = "0x2749C00", VA = "0x18274B600", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031B")]
	public override object TypedValue
	{
		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x274A920", Offset = "0x2748F20", VA = "0x18274A920", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031C")]
	public override Type ValueType
	{
		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x274B460", Offset = "0x2749A60", VA = "0x18274B460", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700031D")]
	public override bool ValueAsBoolean
	{
		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x274AB00", Offset = "0x2749100", VA = "0x18274AB00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031E")]
	public override DateTime ValueAsDateTime
	{
		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x274ACE0", Offset = "0x27492E0", VA = "0x18274ACE0", Slot = "9")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700031F")]
	public override double ValueAsDouble
	{
		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x274AEC0", Offset = "0x27494C0", VA = "0x18274AEC0", Slot = "10")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000320")]
	public override int ValueAsInt
	{
		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x274B0A0", Offset = "0x27496A0", VA = "0x18274B0A0", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000321")]
	public override long ValueAsLong
	{
		[Token(Token = "0x6000C61")]
		[Address(RVA = "0x274B280", Offset = "0x2749880", VA = "0x18274B280", Slot = "12")]
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
		[Address(RVA = "0x274B540", Offset = "0x2749B40", VA = "0x18274B540", Slot = "32")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032A")]
	public virtual object UnderlyingObject
	{
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "33")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x274A8E0", Offset = "0x2748EE0", VA = "0x18274A8E0", Slot = "55")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x274A520", Offset = "0x2748B20", VA = "0x18274A520", Slot = "14")]
	public override object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x26D86C0", Offset = "0x26D6CC0", VA = "0x1826D86C0", Slot = "15")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x26D86C0", Offset = "0x26D6CC0", VA = "0x1826D86C0", Slot = "20")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x27492E0", Offset = "0x27478E0", VA = "0x1827492E0", Slot = "22")]
	public virtual string LookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2749490", Offset = "0x2747A90", VA = "0x182749490", Slot = "23")]
	public virtual string LookupPrefix(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x2749040", Offset = "0x2747640", VA = "0x182749040", Slot = "24")]
	public virtual IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000C69")]
	public abstract XPathNavigator Clone();

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x27496B0", Offset = "0x2747CB0", VA = "0x1827496B0", Slot = "34")]
	public virtual bool MoveToAttribute(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C73")]
	public abstract bool MoveToFirstAttribute();

	[Token(Token = "0x6000C74")]
	public abstract bool MoveToNextAttribute();

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x2749D60", Offset = "0x2748360", VA = "0x182749D60", Slot = "37")]
	public virtual bool MoveToNamespace(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C76")]
	public abstract bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope);

	[Token(Token = "0x6000C77")]
	public abstract bool MoveToNextNamespace(XPathNamespaceScope namespaceScope);

	[Token(Token = "0x6000C78")]
	[Address(RVA = "0x2749920", Offset = "0x2747F20", VA = "0x182749920")]
	public bool MoveToFirstNamespace()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x2749E00", Offset = "0x2748400", VA = "0x182749E00")]
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
	[Address(RVA = "0x274A150", Offset = "0x2748750", VA = "0x18274A150", Slot = "43")]
	public virtual void MoveToRoot()
	{
	}

	[Token(Token = "0x6000C7E")]
	public abstract bool MoveTo(XPathNavigator other);

	[Token(Token = "0x6000C7F")]
	public abstract bool MoveToId(string id);

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x2749780", Offset = "0x2747D80", VA = "0x182749780", Slot = "46")]
	public virtual bool MoveToChild(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C81")]
	[Address(RVA = "0x2749860", Offset = "0x2747E60", VA = "0x182749860", Slot = "47")]
	public virtual bool MoveToChild(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x2749B60", Offset = "0x2748160", VA = "0x182749B60", Slot = "48")]
	public virtual bool MoveToFollowing(string localName, string namespaceURI, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C83")]
	[Address(RVA = "0x2749940", Offset = "0x2747F40", VA = "0x182749940", Slot = "49")]
	public virtual bool MoveToFollowing(XPathNodeType type, XPathNavigator end)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x2749F50", Offset = "0x2748550", VA = "0x182749F50", Slot = "50")]
	public virtual bool MoveToNext(string localName, string namespaceURI)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C85")]
	[Address(RVA = "0x2749E20", Offset = "0x2748420", VA = "0x182749E20", Slot = "51")]
	public virtual bool MoveToNext(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C86")]
	public abstract bool IsSamePosition(XPathNavigator other);

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x2749230", Offset = "0x2747830", VA = "0x182749230", Slot = "53")]
	public virtual bool IsDescendant(XPathNavigator nav)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x27487E0", Offset = "0x2746DE0", VA = "0x1827487E0", Slot = "54")]
	public virtual XmlNodeOrder ComparePosition(XPathNavigator nav)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x274A390", Offset = "0x2748990", VA = "0x18274A390", Slot = "56")]
	public virtual XPathNodeIterator Select(string xpath)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	[Address(RVA = "0x274A470", Offset = "0x2748A70", VA = "0x18274A470", Slot = "57")]
	public virtual XPathNodeIterator Select(XPathExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000C8C")]
	[Address(RVA = "0x2748D60", Offset = "0x2747360", VA = "0x182748D60", Slot = "58")]
	public virtual object Evaluate(XPathExpression expr)
	{
		return null;
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x2748D80", Offset = "0x2747380", VA = "0x182748D80", Slot = "59")]
	public virtual object Evaluate(XPathExpression expr, XPathNodeIterator context)
	{
		return null;
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x274A200", Offset = "0x2748800", VA = "0x18274A200", Slot = "60")]
	public virtual XPathNodeIterator SelectChildren(XPathNodeType type)
	{
		return null;
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x274A180", Offset = "0x2748780", VA = "0x18274A180", Slot = "61")]
	public virtual XPathNodeIterator SelectChildren(string name, string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x6000C90")]
	[Address(RVA = "0x274A280", Offset = "0x2748880", VA = "0x18274A280", Slot = "62")]
	public virtual XPathNodeIterator SelectDescendants(XPathNodeType type, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000C91")]
	[Address(RVA = "0x274A300", Offset = "0x2748900", VA = "0x18274A300", Slot = "63")]
	public virtual XPathNodeIterator SelectDescendants(string name, string namespaceURI, bool matchSelf)
	{
		return null;
	}

	[Token(Token = "0x6000C92")]
	[Address(RVA = "0x274A030", Offset = "0x2748630", VA = "0x18274A030")]
	internal bool MoveToNonDescendant()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C93")]
	[Address(RVA = "0x2748FD0", Offset = "0x27475D0", VA = "0x182748FD0")]
	private static int GetDepth(XPathNavigator nav)
	{
		return default(int);
	}

	[Token(Token = "0x6000C94")]
	[Address(RVA = "0x2748BF0", Offset = "0x27471F0", VA = "0x182748BF0")]
	private XmlNodeOrder CompareSiblings(XPathNavigator n1, XPathNavigator n2)
	{
		return default(XmlNodeOrder);
	}

	[Token(Token = "0x6000C95")]
	[Address(RVA = "0x2748F60", Offset = "0x2747560", VA = "0x182748F60")]
	internal static int GetContentKindMask(XPathNodeType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000C96")]
	[Address(RVA = "0x2749020", Offset = "0x2747620", VA = "0x182749020")]
	internal static int GetKindMask(XPathNodeType type)
	{
		return default(int);
	}

	[Token(Token = "0x6000C97")]
	[Address(RVA = "0x27492D0", Offset = "0x27478D0", VA = "0x1827492D0")]
	internal static bool IsText(XPathNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C98")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected XPathNavigator()
	{
	}
}
