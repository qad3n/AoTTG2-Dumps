// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x60DEF10", Offset = "0x60DDF10", VA = "0x60DEF10", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x60DEF20", Offset = "0x60DDF20", VA = "0x60DEF20", Slot = "10")]
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
		[Address(RVA = "0x60DEFF0", Offset = "0x60DDFF0", VA = "0x60DEFF0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public virtual XmlNodeList ChildNodes
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x60DF0D0", Offset = "0x60DE0D0", VA = "0x60DF0D0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000278")]
	public virtual XmlNode PreviousSibling
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x60DF120", Offset = "0x60DE120", VA = "0x60DF120", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000279")]
	public virtual XmlNode NextSibling
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x60DF130", Offset = "0x60DE130", VA = "0x60DF130", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual XmlAttributeCollection Attributes
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x60DF140", Offset = "0x60DE140", VA = "0x60DF140", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0x60DF150", Offset = "0x60DE150", VA = "0x60DF150", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual XmlNode FirstChild
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x60DF1F0", Offset = "0x60DE1F0", VA = "0x60DF1F0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual XmlNode LastChild
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x60DF210", Offset = "0x60DE210", VA = "0x60DF210", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027E")]
	internal virtual bool IsContainer
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x60DF230", Offset = "0x60DE230", VA = "0x60DF230", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	internal virtual XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x60DF240", Offset = "0x60DE240", VA = "0x60DF240", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600097A")]
		[Address(RVA = "0x60DF250", Offset = "0x60DE250", VA = "0x60DF250", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public virtual bool HasChildNodes
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x60E0B60", Offset = "0x60DFB60", VA = "0x60E0B60", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000281")]
	public virtual string NamespaceURI
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x60E0C20", Offset = "0x60DFC20", VA = "0x60E0C20", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public virtual string Prefix
	{
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x60E0C40", Offset = "0x60DFC40", VA = "0x60E0C40", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x60E0C60", Offset = "0x60DFC60", VA = "0x60E0C60", Slot = "38")]
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
		[Address(RVA = "0x60E0C70", Offset = "0x60DFC70", VA = "0x60E0C70", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000285")]
	public virtual string InnerText
	{
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x60D6D00", Offset = "0x60D5D00", VA = "0x60D6D00", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x60E0FC0", Offset = "0x60DFFC0", VA = "0x60E0FC0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public virtual string InnerXml
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x60E10A0", Offset = "0x60E00A0", VA = "0x60E10A0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x60E1100", Offset = "0x60E0100", VA = "0x60E1100", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public virtual string BaseURI
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x60E1170", Offset = "0x60E0170", VA = "0x60E1170", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	internal XmlDocument Document
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x60E1280", Offset = "0x60E0280", VA = "0x60E1280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	internal virtual XmlSpace XmlSpace
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x60E1A10", Offset = "0x60E0A10", VA = "0x60E1A10", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700028B")]
	internal virtual string XmlLang
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x60E1B80", Offset = "0x60E0B80", VA = "0x60E1B80", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	internal virtual XPathNodeType XPNodeType
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x60E1C70", Offset = "0x60E0C70", VA = "0x60E1C70", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700028D")]
	internal virtual string XPLocalName
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x60E1C80", Offset = "0x60E0C80", VA = "0x60E1C80", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	internal virtual bool IsText
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x60E1CA0", Offset = "0x60E0CA0", VA = "0x60E1CA0", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual XmlNode PreviousText
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x60E1CB0", Offset = "0x60E0CB0", VA = "0x60E1CB0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x60D4330", Offset = "0x60D3330", VA = "0x60D4330")]
	internal XmlNode()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x60D7070", Offset = "0x60D6070", VA = "0x60D7070")]
	internal XmlNode(XmlDocument doc)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x60DED40", Offset = "0x60DDD40", VA = "0x60DED40", Slot = "7")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x60DEDD0", Offset = "0x60DDDD0", VA = "0x60DEDD0")]
	public XmlNode SelectSingleNode(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x60DEE80", Offset = "0x60DDE80", VA = "0x60DEE80")]
	public XmlNodeList SelectNodes(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x60DF260", Offset = "0x60DE260", VA = "0x60DF260")]
	internal bool AncestorNode(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x60DF2C0", Offset = "0x60DE2C0", VA = "0x60DF2C0")]
	internal bool IsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x60DF330", Offset = "0x60DE330", VA = "0x60DF330", Slot = "23")]
	public virtual XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x60DF980", Offset = "0x60DE980", VA = "0x60DF980", Slot = "24")]
	public virtual XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x60DFF60", Offset = "0x60DEF60", VA = "0x60DFF60", Slot = "25")]
	public virtual XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x60DFFD0", Offset = "0x60DEFD0", VA = "0x60DFFD0", Slot = "26")]
	public virtual XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x60E0400", Offset = "0x60DF400", VA = "0x60E0400", Slot = "27")]
	public virtual XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x60E0440", Offset = "0x60DF440", VA = "0x60E0440", Slot = "28")]
	public virtual XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x60E0970", Offset = "0x60DF970", VA = "0x60E0970", Slot = "29")]
	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x60E0B30", Offset = "0x60DFB30", VA = "0x60E0B30", Slot = "30")]
	internal virtual bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x60E0B40", Offset = "0x60DFB40", VA = "0x60E0B40", Slot = "31")]
	internal virtual bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x60E0B50", Offset = "0x60DFB50", VA = "0x60E0B50", Slot = "32")]
	internal virtual bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	public abstract XmlNode CloneNode(bool deep);

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x60E0B80", Offset = "0x60DFB80", VA = "0x60E0B80", Slot = "35")]
	internal virtual void CopyChildren(XmlDocument doc, XmlNode container, bool deep)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x60E0D50", Offset = "0x60DFD50", VA = "0x60E0D50")]
	internal static bool HasReadOnlyParent(XmlNode n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x60E0E30", Offset = "0x60DFE30", VA = "0x60E0E30", Slot = "4")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x60E0E50", Offset = "0x60DFE50", VA = "0x60E0E50", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x60D4BF0", Offset = "0x60D3BF0", VA = "0x60D4BF0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x60E0EA0", Offset = "0x60DFEA0", VA = "0x60E0EA0")]
	private void AppendChildText(StringBuilder builder)
	{
	}

	[Token(Token = "0x6000999")]
	public abstract void WriteTo(XmlWriter w);

	[Token(Token = "0x600099A")]
	public abstract void WriteContentTo(XmlWriter w);

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x60D6AF0", Offset = "0x60D5AF0", VA = "0x60D6AF0", Slot = "48")]
	public virtual void RemoveAll()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x60E1310", Offset = "0x60E0310", VA = "0x60E1310", Slot = "49")]
	public virtual string GetPrefixOfNamespace(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x60E1340", Offset = "0x60E0340", VA = "0x60E1340")]
	internal string GetPrefixOfNamespaceStrict(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x60D7750", Offset = "0x60D6750", VA = "0x60D7750", Slot = "50")]
	internal virtual void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x60E1760", Offset = "0x60E0760", VA = "0x60E1760", Slot = "51")]
	internal virtual void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x60E1770", Offset = "0x60E0770", VA = "0x60E1770")]
	internal static void SplitName(string name, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x60E1820", Offset = "0x60E0820", VA = "0x60E1820", Slot = "52")]
	internal virtual XmlNode FindChild(XmlNodeType type)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x60E1880", Offset = "0x60E0880", VA = "0x60E1880", Slot = "53")]
	internal virtual XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x60E1990", Offset = "0x60E0990", VA = "0x60E1990", Slot = "54")]
	internal virtual void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x60E19D0", Offset = "0x60E09D0", VA = "0x60E19D0", Slot = "55")]
	internal virtual void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x60D5E10", Offset = "0x60D4E10", VA = "0x60D5E10")]
	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x60DF940", Offset = "0x60DE940", VA = "0x60DF940")]
	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}
}
