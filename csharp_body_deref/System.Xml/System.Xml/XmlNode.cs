using System.Collections;
using System.Diagnostics;
using System.Reflection;
using System.Text;
using System.Xml.Schema;
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000AF")]
[DebuggerDisplay("{debuggerDisplayProxy}")]
[DefaultMember("Item")]
public abstract class XmlNode : ICloneable, IEnumerable, IXPathNavigable
{
	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x10")]
	internal XmlNode parentNode;

	[Token(Token = "0x17000273")]
	public abstract string Name
	{
		[Token(Token = "0x600096C")]
		get;
	}

	[Token(Token = "0x17000274")]
	public virtual string Value
	{
		[Token(Token = "0x600096D")]
		[Address(RVA = "0x449EA80", Offset = "0x449EA80", VA = "0x449EA80", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x449EA90", Offset = "0x449EA90", VA = "0x449EA90", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000275")]
	public abstract XmlNodeType NodeType
	{
		[Token(Token = "0x600096F")]
		get;
	}

	[Token(Token = "0x17000276")]
	public virtual XmlNode ParentNode
	{
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x449EB60", Offset = "0x449EB60", VA = "0x449EB60", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public virtual XmlNodeList ChildNodes
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x449EC40", Offset = "0x449EC40", VA = "0x449EC40", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000278")]
	public virtual XmlNode PreviousSibling
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x449EC90", Offset = "0x449EC90", VA = "0x449EC90", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000279")]
	public virtual XmlNode NextSibling
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x449ECA0", Offset = "0x449ECA0", VA = "0x449ECA0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual XmlAttributeCollection Attributes
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x449ECB0", Offset = "0x449ECB0", VA = "0x449ECB0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0x449ECC0", Offset = "0x449ECC0", VA = "0x449ECC0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual XmlNode FirstChild
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x449ED60", Offset = "0x449ED60", VA = "0x449ED60", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual XmlNode LastChild
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x449ED80", Offset = "0x449ED80", VA = "0x449ED80", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027E")]
	internal virtual bool IsContainer
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x449EDA0", Offset = "0x449EDA0", VA = "0x449EDA0", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	internal virtual XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x449EDB0", Offset = "0x449EDB0", VA = "0x449EDB0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600097A")]
		[Address(RVA = "0x449EDC0", Offset = "0x449EDC0", VA = "0x449EDC0", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public virtual bool HasChildNodes
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x44A0740", Offset = "0x44A0740", VA = "0x44A0740", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000281")]
	public virtual string NamespaceURI
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x44A0800", Offset = "0x44A0800", VA = "0x44A0800", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public virtual string Prefix
	{
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x44A0820", Offset = "0x44A0820", VA = "0x44A0820", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x44A0840", Offset = "0x44A0840", VA = "0x44A0840", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x17000283")]
	public abstract string LocalName
	{
		[Token(Token = "0x600098D")]
		get;
	}

	[Token(Token = "0x17000284")]
	public virtual bool IsReadOnly
	{
		[Token(Token = "0x600098E")]
		[Address(RVA = "0x44A0850", Offset = "0x44A0850", VA = "0x44A0850", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000285")]
	public virtual string InnerText
	{
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x4496370", Offset = "0x4496370", VA = "0x4496370", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x44A0C80", Offset = "0x44A0C80", VA = "0x44A0C80", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public virtual string InnerXml
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x44A0D60", Offset = "0x44A0D60", VA = "0x44A0D60", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x44A0DC0", Offset = "0x44A0DC0", VA = "0x44A0DC0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public virtual string BaseURI
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x44A0E30", Offset = "0x44A0E30", VA = "0x44A0E30", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	internal XmlDocument Document
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x44A0F40", Offset = "0x44A0F40", VA = "0x44A0F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	internal virtual XmlSpace XmlSpace
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x44A1700", Offset = "0x44A1700", VA = "0x44A1700", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700028B")]
	internal virtual string XmlLang
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x44A1870", Offset = "0x44A1870", VA = "0x44A1870", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	internal virtual XPathNodeType XPNodeType
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x44A1970", Offset = "0x44A1970", VA = "0x44A1970", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700028D")]
	internal virtual string XPLocalName
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x44A1980", Offset = "0x44A1980", VA = "0x44A1980", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	internal virtual bool IsText
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x44A19A0", Offset = "0x44A19A0", VA = "0x44A19A0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual XmlNode PreviousText
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x44A19B0", Offset = "0x44A19B0", VA = "0x44A19B0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x44937A0", Offset = "0x44937A0", VA = "0x44937A0")]
	internal XmlNode()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x44966E0", Offset = "0x44966E0", VA = "0x44966E0")]
	internal XmlNode(XmlDocument doc)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x449E8A0", Offset = "0x449E8A0", VA = "0x449E8A0", Slot = "7")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x449E940", Offset = "0x449E940", VA = "0x449E940")]
	public XmlNode SelectSingleNode(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x449E9F0", Offset = "0x449E9F0", VA = "0x449E9F0")]
	public XmlNodeList SelectNodes(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x449EDD0", Offset = "0x449EDD0", VA = "0x449EDD0")]
	internal bool AncestorNode(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x449EE40", Offset = "0x449EE40", VA = "0x449EE40")]
	internal bool IsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x449EEB0", Offset = "0x449EEB0", VA = "0x449EEB0", Slot = "23")]
	public virtual XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x449F520", Offset = "0x449F520", VA = "0x449F520", Slot = "24")]
	public virtual XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x449FB30", Offset = "0x449FB30", VA = "0x449FB30", Slot = "25")]
	public virtual XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x449FBA0", Offset = "0x449FBA0", VA = "0x449FBA0", Slot = "26")]
	public virtual XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x449FFE0", Offset = "0x449FFE0", VA = "0x449FFE0", Slot = "27")]
	public virtual XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x44A0020", Offset = "0x44A0020", VA = "0x44A0020", Slot = "28")]
	public virtual XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x44A0540", Offset = "0x44A0540", VA = "0x44A0540", Slot = "29")]
	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x44A0710", Offset = "0x44A0710", VA = "0x44A0710", Slot = "30")]
	internal virtual bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x44A0720", Offset = "0x44A0720", VA = "0x44A0720", Slot = "31")]
	internal virtual bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x44A0730", Offset = "0x44A0730", VA = "0x44A0730", Slot = "32")]
	internal virtual bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	public abstract XmlNode CloneNode(bool deep);

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x44A0760", Offset = "0x44A0760", VA = "0x44A0760", Slot = "35")]
	internal virtual void CopyChildren(XmlDocument doc, XmlNode container, bool deep)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x44A0940", Offset = "0x44A0940", VA = "0x44A0940")]
	internal static bool HasReadOnlyParent(XmlNode n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x44A0A30", Offset = "0x44A0A30", VA = "0x44A0A30", Slot = "4")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x44A0A50", Offset = "0x44A0A50", VA = "0x44A0A50", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x4494120", Offset = "0x4494120", VA = "0x4494120")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x44A0AA0", Offset = "0x44A0AA0", VA = "0x44A0AA0")]
	private void AppendChildText(StringBuilder builder)
	{
	}

	[Token(Token = "0x6000999")]
	public abstract void WriteTo(XmlWriter w);

	[Token(Token = "0x600099A")]
	public abstract void WriteContentTo(XmlWriter w);

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x4496160", Offset = "0x4496160", VA = "0x4496160", Slot = "48")]
	public virtual void RemoveAll()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x44A0FD0", Offset = "0x44A0FD0", VA = "0x44A0FD0", Slot = "49")]
	public virtual string GetPrefixOfNamespace(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x44A1000", Offset = "0x44A1000", VA = "0x44A1000")]
	internal string GetPrefixOfNamespaceStrict(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x4496DD0", Offset = "0x4496DD0", VA = "0x4496DD0", Slot = "50")]
	internal virtual void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x44A1450", Offset = "0x44A1450", VA = "0x44A1450", Slot = "51")]
	internal virtual void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x44A1460", Offset = "0x44A1460", VA = "0x44A1460")]
	internal static void SplitName(string name, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x44A1510", Offset = "0x44A1510", VA = "0x44A1510", Slot = "52")]
	internal virtual XmlNode FindChild(XmlNodeType type)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x44A1570", Offset = "0x44A1570", VA = "0x44A1570", Slot = "53")]
	internal virtual XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x44A1680", Offset = "0x44A1680", VA = "0x44A1680", Slot = "54")]
	internal virtual void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x44A16C0", Offset = "0x44A16C0", VA = "0x44A16C0", Slot = "55")]
	internal virtual void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x4495470", Offset = "0x4495470", VA = "0x4495470")]
	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x449F4E0", Offset = "0x449F4E0", VA = "0x449F4E0")]
	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}
}
