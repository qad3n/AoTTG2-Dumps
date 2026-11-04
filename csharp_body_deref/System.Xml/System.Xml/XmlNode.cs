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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x273B960", Offset = "0x2739F60", VA = "0x18273B960", Slot = "10")]
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
		[Address(RVA = "0x273B460", Offset = "0x2739A60", VA = "0x18273B460", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000277")]
	public virtual XmlNodeList ChildNodes
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x273B040", Offset = "0x2739640", VA = "0x18273B040", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000278")]
	public virtual XmlNode PreviousSibling
	{
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000279")]
	public virtual XmlNode NextSibling
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027A")]
	public virtual XmlAttributeCollection Attributes
	{
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027B")]
	public virtual XmlDocument OwnerDocument
	{
		[Token(Token = "0x6000975")]
		[Address(RVA = "0x273B3A0", Offset = "0x27399A0", VA = "0x18273B3A0", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	public virtual XmlNode FirstChild
	{
		[Token(Token = "0x6000976")]
		[Address(RVA = "0x273B140", Offset = "0x2739740", VA = "0x18273B140", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027D")]
	public virtual XmlNode LastChild
	{
		[Token(Token = "0x6000977")]
		[Address(RVA = "0x273B380", Offset = "0x2739980", VA = "0x18273B380", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027E")]
	internal virtual bool IsContainer
	{
		[Token(Token = "0x6000978")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027F")]
	internal virtual XmlLinkedNode LastNode
	{
		[Token(Token = "0x6000979")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "21")]
		get
		{
			return null;
		}
		[Token(Token = "0x600097A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "22")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	public virtual bool HasChildNodes
	{
		[Token(Token = "0x6000987")]
		[Address(RVA = "0x273B170", Offset = "0x2739770", VA = "0x18273B170", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000281")]
	public virtual string NamespaceURI
	{
		[Token(Token = "0x600098A")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "36")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public virtual string Prefix
	{
		[Token(Token = "0x600098B")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "37")]
		get
		{
			return null;
		}
		[Token(Token = "0x600098C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "38")]
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
		[Address(RVA = "0x273B2A0", Offset = "0x27398A0", VA = "0x18273B2A0", Slot = "40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000285")]
	public virtual string InnerText
	{
		[Token(Token = "0x6000994")]
		[Address(RVA = "0x273B190", Offset = "0x2739790", VA = "0x18273B190", Slot = "41")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000995")]
		[Address(RVA = "0x273B800", Offset = "0x2739E00", VA = "0x18273B800", Slot = "42")]
		set
		{
		}
	}

	[Token(Token = "0x17000286")]
	public virtual string InnerXml
	{
		[Token(Token = "0x6000996")]
		[Address(RVA = "0x273B900", Offset = "0x2739F00", VA = "0x18273B900", Slot = "43")]
		set
		{
		}
	}

	[Token(Token = "0x17000287")]
	public virtual IXmlSchemaInfo SchemaInfo
	{
		[Token(Token = "0x6000997")]
		[Address(RVA = "0x273B550", Offset = "0x2739B50", VA = "0x18273B550", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public virtual string BaseURI
	{
		[Token(Token = "0x6000998")]
		[Address(RVA = "0x273AF40", Offset = "0x2739540", VA = "0x18273AF40", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	internal XmlDocument Document
	{
		[Token(Token = "0x600099C")]
		[Address(RVA = "0x273B0A0", Offset = "0x27396A0", VA = "0x18273B0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	internal virtual XmlSpace XmlSpace
	{
		[Token(Token = "0x60009A6")]
		[Address(RVA = "0x273B680", Offset = "0x2739C80", VA = "0x18273B680", Slot = "56")]
		get
		{
			return default(XmlSpace);
		}
	}

	[Token(Token = "0x1700028B")]
	internal virtual string XmlLang
	{
		[Token(Token = "0x60009A7")]
		[Address(RVA = "0x273B5A0", Offset = "0x2739BA0", VA = "0x18273B5A0", Slot = "57")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028C")]
	internal virtual XPathNodeType XPNodeType
	{
		[Token(Token = "0x60009A8")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "58")]
		get
		{
			return default(XPathNodeType);
		}
	}

	[Token(Token = "0x1700028D")]
	internal virtual string XPLocalName
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "59")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028E")]
	internal virtual bool IsText
	{
		[Token(Token = "0x60009AA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028F")]
	public virtual XmlNode PreviousText
	{
		[Token(Token = "0x60009AB")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "61")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000967")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal XmlNode()
	{
	}

	[Token(Token = "0x6000968")]
	[Address(RVA = "0x273AEB0", Offset = "0x27394B0", VA = "0x18273AEB0")]
	internal XmlNode(XmlDocument doc)
	{
	}

	[Token(Token = "0x6000969")]
	[Address(RVA = "0x2738EB0", Offset = "0x27374B0", VA = "0x182738EB0", Slot = "7")]
	public virtual XPathNavigator CreateNavigator()
	{
		return null;
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x273AC40", Offset = "0x2739240", VA = "0x18273AC40")]
	public XmlNode SelectSingleNode(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x273ABA0", Offset = "0x27391A0", VA = "0x18273ABA0")]
	public XmlNodeList SelectNodes(string xpath)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x2738450", Offset = "0x2736A50", VA = "0x182738450")]
	internal bool AncestorNode(XmlNode node)
	{
		return default(bool);
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x273A530", Offset = "0x2738B30", VA = "0x18273A530")]
	internal bool IsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x600097D")]
	[Address(RVA = "0x2739DC0", Offset = "0x27383C0", VA = "0x182739DC0", Slot = "23")]
	public virtual XmlNode InsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x2739660", Offset = "0x2737C60", VA = "0x182739660", Slot = "24")]
	public virtual XmlNode InsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return null;
	}

	[Token(Token = "0x600097F")]
	[Address(RVA = "0x273AB10", Offset = "0x2739110", VA = "0x18273AB10", Slot = "25")]
	public virtual XmlNode ReplaceChild(XmlNode newChild, XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000980")]
	[Address(RVA = "0x273A690", Offset = "0x2738C90", VA = "0x18273A690", Slot = "26")]
	public virtual XmlNode RemoveChild(XmlNode oldChild)
	{
		return null;
	}

	[Token(Token = "0x6000981")]
	[Address(RVA = "0x273A5C0", Offset = "0x2738BC0", VA = "0x18273A5C0", Slot = "27")]
	public virtual XmlNode PrependChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000982")]
	[Address(RVA = "0x27387A0", Offset = "0x2736DA0", VA = "0x1827387A0", Slot = "28")]
	public virtual XmlNode AppendChild(XmlNode newChild)
	{
		return null;
	}

	[Token(Token = "0x6000983")]
	[Address(RVA = "0x27384C0", Offset = "0x2736AC0", VA = "0x1827384C0", Slot = "29")]
	internal virtual XmlNode AppendChildForLoad(XmlNode newChild, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000984")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "30")]
	internal virtual bool IsValidChildType(XmlNodeType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000985")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "31")]
	internal virtual bool CanInsertBefore(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000986")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "32")]
	internal virtual bool CanInsertAfter(XmlNode newChild, XmlNode refChild)
	{
		return default(bool);
	}

	[Token(Token = "0x6000988")]
	public abstract XmlNode CloneNode(bool deep);

	[Token(Token = "0x6000989")]
	[Address(RVA = "0x2738E00", Offset = "0x2737400", VA = "0x182738E00", Slot = "35")]
	internal virtual void CopyChildren(XmlDocument doc, XmlNode container, bool deep)
	{
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x2739590", Offset = "0x2737B90", VA = "0x182739590")]
	internal static bool HasReadOnlyParent(XmlNode n)
	{
		return default(bool);
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x2715BE0", Offset = "0x27141E0", VA = "0x182715BE0", Slot = "4")]
	private object System_002EICloneable_002EClone()
	{
		return null;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x273AE10", Offset = "0x2739410", VA = "0x18273AE10", Slot = "5")]
	private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x2738FE0", Offset = "0x27375E0", VA = "0x182738FE0")]
	public IEnumerator GetEnumerator()
	{
		return null;
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x2738690", Offset = "0x2736C90", VA = "0x182738690")]
	private void AppendChildText(StringBuilder builder)
	{
	}

	[Token(Token = "0x6000999")]
	public abstract void WriteTo(XmlWriter w);

	[Token(Token = "0x600099A")]
	public abstract void WriteContentTo(XmlWriter w);

	[Token(Token = "0x600099B")]
	[Address(RVA = "0x273A610", Offset = "0x2738C10", VA = "0x18273A610", Slot = "48")]
	public virtual void RemoveAll()
	{
	}

	[Token(Token = "0x600099D")]
	[Address(RVA = "0x2739560", Offset = "0x2737B60", VA = "0x182739560", Slot = "49")]
	public virtual string GetPrefixOfNamespace(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099E")]
	[Address(RVA = "0x2739140", Offset = "0x2737740", VA = "0x182739140")]
	internal string GetPrefixOfNamespaceStrict(string namespaceURI)
	{
		return null;
	}

	[Token(Token = "0x600099F")]
	[Address(RVA = "0x273ACF0", Offset = "0x27392F0", VA = "0x18273ACF0", Slot = "50")]
	internal virtual void SetParent(XmlNode node)
	{
	}

	[Token(Token = "0x60009A0")]
	[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "51")]
	internal virtual void SetParentForLoad(XmlNode node)
	{
	}

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x273AD40", Offset = "0x2739340", VA = "0x18273AD40")]
	internal static void SplitName(string name, out string prefix, out string localName)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x2738F60", Offset = "0x2737560", VA = "0x182738F60", Slot = "52")]
	internal virtual XmlNode FindChild(XmlNodeType type)
	{
		return null;
	}

	[Token(Token = "0x60009A3")]
	[Address(RVA = "0x2739040", Offset = "0x2737640", VA = "0x182739040", Slot = "53")]
	internal virtual XmlNodeChangedEventArgs GetEventArgs(XmlNode node, XmlNode oldParent, XmlNode newParent, string oldValue, string newValue, XmlNodeChangedAction action)
	{
		return null;
	}

	[Token(Token = "0x60009A4")]
	[Address(RVA = "0x2738DB0", Offset = "0x27373B0", VA = "0x182738DB0", Slot = "54")]
	internal virtual void BeforeEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009A5")]
	[Address(RVA = "0x2738400", Offset = "0x2736A00", VA = "0x182738400", Slot = "55")]
	internal virtual void AfterEvent(XmlNodeChangedEventArgs args)
	{
	}

	[Token(Token = "0x60009AC")]
	[Address(RVA = "0x273A590", Offset = "0x2738B90", VA = "0x18273A590")]
	internal static void NestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x273AE70", Offset = "0x2739470", VA = "0x18273AE70")]
	internal static void UnnestTextNodes(XmlNode prevNode, XmlNode nextNode)
	{
	}
}
