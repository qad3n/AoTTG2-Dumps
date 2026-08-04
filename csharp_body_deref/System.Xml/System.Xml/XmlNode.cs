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
		[Address(RVA = "0x47DC1E0", Offset = "0x47DC1E0", VA = "0x47DC1E0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x47DC1F0", Offset = "0x47DC1F0", VA = "0x47DC1F0", Slot = "10")]
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
		[Address(RVA = "0x47DC2C0", Offset = "0x47DC2C0", VA = "0x47DC2C0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public virtual XmlNodeList ChildNodes
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x47DC3A0", Offset = "0x47DC3A0", VA = "0x47DC3A0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000278")]
	public virtual XmlNode PreviousSibling
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x47DC3F0", Offset = "0x47DC3F0", VA = "0x47DC3F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000279")]
	public virtual XmlNode NextSibling
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x47DC400", Offset = "0x47DC400", VA = "0x47DC400", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual XmlAttributeCollection Attributes
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x47DC410", Offset = "0x47DC410", VA = "0x47DC410", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0x47DC420", Offset = "0x47DC420", VA = "0x47DC420", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual XmlNode FirstChild
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x47DC4C0", Offset = "0x47DC4C0", VA = "0x47DC4C0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual XmlNode LastChild
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x47DC4E0", Offset = "0x47DC4E0", VA = "0x47DC4E0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027E")]
	internal virtual bool IsContainer
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x47DC500", Offset = "0x47DC500", VA = "0x47DC500", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	internal virtual XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x47DC510", Offset = "0x47DC510", VA = "0x47DC510", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600097A")]
		[Address(RVA = "0x47DC520", Offset = "0x47DC520", VA = "0x47DC520", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public virtual bool HasChildNodes
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x47DDEA0", Offset = "0x47DDEA0", VA = "0x47DDEA0", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000281")]
	public virtual string NamespaceURI
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x47DDF60", Offset = "0x47DDF60", VA = "0x47DDF60", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public virtual string Prefix
	{
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x47DDF80", Offset = "0x47DDF80", VA = "0x47DDF80", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x47DDFA0", Offset = "0x47DDFA0", VA = "0x47DDFA0", Slot = "38")]
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
		[Address(RVA = "0x47DDFB0", Offset = "0x47DDFB0", VA = "0x47DDFB0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000285")]
	public virtual string InnerText
	{
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x47D3AD0", Offset = "0x47D3AD0", VA = "0x47D3AD0", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x47DE3E0", Offset = "0x47DE3E0", VA = "0x47DE3E0", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public virtual string InnerXml
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x47DE4C0", Offset = "0x47DE4C0", VA = "0x47DE4C0", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x47DE520", Offset = "0x47DE520", VA = "0x47DE520", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public virtual string BaseURI
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x47DE590", Offset = "0x47DE590", VA = "0x47DE590", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	internal XmlDocument Document
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x47DE6A0", Offset = "0x47DE6A0", VA = "0x47DE6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	internal virtual XmlSpace XmlSpace
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x47DEE60", Offset = "0x47DEE60", VA = "0x47DEE60", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700028B")]
	internal virtual string XmlLang
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x47DEFD0", Offset = "0x47DEFD0", VA = "0x47DEFD0", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	internal virtual XPathNodeType XPNodeType
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x47DF0D0", Offset = "0x47DF0D0", VA = "0x47DF0D0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700028D")]
	internal virtual string XPLocalName
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x47DF0E0", Offset = "0x47DF0E0", VA = "0x47DF0E0", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	internal virtual bool IsText
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x47DF100", Offset = "0x47DF100", VA = "0x47DF100", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual XmlNode PreviousText
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x47DF110", Offset = "0x47DF110", VA = "0x47DF110", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x47D0F00", Offset = "0x47D0F00", VA = "0x47D0F00")]
	internal XmlNode()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x47D3E40", Offset = "0x47D3E40", VA = "0x47D3E40")]
	internal XmlNode(XmlDocument doc)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x47DC000", Offset = "0x47DC000", VA = "0x47DC000", Slot = "7")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x47DC0A0", Offset = "0x47DC0A0", VA = "0x47DC0A0")]
	public XmlNode SelectSingleNode(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x47DC150", Offset = "0x47DC150", VA = "0x47DC150")]
	public XmlNodeList SelectNodes(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x47DC530", Offset = "0x47DC530", VA = "0x47DC530")]
	internal bool AncestorNode(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x47DC5A0", Offset = "0x47DC5A0", VA = "0x47DC5A0")]
	internal bool IsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x47DC610", Offset = "0x47DC610", VA = "0x47DC610", Slot = "23")]
	public virtual XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x47DCC80", Offset = "0x47DCC80", VA = "0x47DCC80", Slot = "24")]
	public virtual XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x47DD290", Offset = "0x47DD290", VA = "0x47DD290", Slot = "25")]
	public virtual XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x47DD300", Offset = "0x47DD300", VA = "0x47DD300", Slot = "26")]
	public virtual XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x47DD740", Offset = "0x47DD740", VA = "0x47DD740", Slot = "27")]
	public virtual XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x47DD780", Offset = "0x47DD780", VA = "0x47DD780", Slot = "28")]
	public virtual XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x47DDCA0", Offset = "0x47DDCA0", VA = "0x47DDCA0", Slot = "29")]
	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x47DDE70", Offset = "0x47DDE70", VA = "0x47DDE70", Slot = "30")]
	internal virtual bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x47DDE80", Offset = "0x47DDE80", VA = "0x47DDE80", Slot = "31")]
	internal virtual bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x47DDE90", Offset = "0x47DDE90", VA = "0x47DDE90", Slot = "32")]
	internal virtual bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	public abstract XmlNode CloneNode(bool deep);

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x47DDEC0", Offset = "0x47DDEC0", VA = "0x47DDEC0", Slot = "35")]
	internal virtual void CopyChildren(XmlDocument doc, XmlNode container, bool deep)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x47DE0A0", Offset = "0x47DE0A0", VA = "0x47DE0A0")]
	internal static bool HasReadOnlyParent(XmlNode n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x47DE190", Offset = "0x47DE190", VA = "0x47DE190", Slot = "4")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x47DE1B0", Offset = "0x47DE1B0", VA = "0x47DE1B0", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x47D1880", Offset = "0x47D1880", VA = "0x47D1880")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x47DE200", Offset = "0x47DE200", VA = "0x47DE200")]
	private void AppendChildText(StringBuilder builder)
	{
	}

	[Token(Token = "0x6000999")]
	public abstract void WriteTo(XmlWriter w);

	[Token(Token = "0x600099A")]
	public abstract void WriteContentTo(XmlWriter w);

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x47D38C0", Offset = "0x47D38C0", VA = "0x47D38C0", Slot = "48")]
	public virtual void RemoveAll()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x47DE730", Offset = "0x47DE730", VA = "0x47DE730", Slot = "49")]
	public virtual string GetPrefixOfNamespace(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x47DE760", Offset = "0x47DE760", VA = "0x47DE760")]
	internal string GetPrefixOfNamespaceStrict(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x47D4530", Offset = "0x47D4530", VA = "0x47D4530", Slot = "50")]
	internal virtual void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0x47DEBB0", Offset = "0x47DEBB0", VA = "0x47DEBB0", Slot = "51")]
	internal virtual void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x47DEBC0", Offset = "0x47DEBC0", VA = "0x47DEBC0")]
	internal static void SplitName(string name, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x47DEC70", Offset = "0x47DEC70", VA = "0x47DEC70", Slot = "52")]
	internal virtual XmlNode FindChild(XmlNodeType type)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x47DECD0", Offset = "0x47DECD0", VA = "0x47DECD0", Slot = "53")]
	internal virtual XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x47DEDE0", Offset = "0x47DEDE0", VA = "0x47DEDE0", Slot = "54")]
	internal virtual void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x47DEE20", Offset = "0x47DEE20", VA = "0x47DEE20", Slot = "55")]
	internal virtual void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x47D2BD0", Offset = "0x47D2BD0", VA = "0x47D2BD0")]
	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x47DCC40", Offset = "0x47DCC40", VA = "0x47DCC40")]
	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}
}
