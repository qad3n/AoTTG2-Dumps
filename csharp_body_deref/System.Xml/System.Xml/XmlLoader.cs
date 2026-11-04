// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlLoader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000A9")]
internal class XmlLoader
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x10")]
	private XmlDocument doc;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x18")]
	private XmlReader reader;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x20")]
	private bool preserveWhitespace;

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlLoader()
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x2730C10", Offset = "0x272F210", VA = "0x182730C10")]
	internal void Load(XmlDocument doc, XmlReader reader, bool preserveWhitespace)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x272EA20", Offset = "0x272D020", VA = "0x18272EA20")]
	private void LoadDocSequence(XmlDocument parentDoc)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x27316D0", Offset = "0x272FCD0", VA = "0x1827316D0")]
	internal XmlNode ReadCurrentNode(XmlDocument doc, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x2730540", Offset = "0x272EB40", VA = "0x182730540")]
	private XmlNode LoadNode(bool skipOverWhitespace)
	{
		return null;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x272DE70", Offset = "0x272C470", VA = "0x18272DE70")]
	private XmlAttribute LoadAttributeNode()
	{
		return null;
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x272E840", Offset = "0x272CE40", VA = "0x18272E840")]
	private XmlAttribute LoadDefaultAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x272E350", Offset = "0x272C950", VA = "0x18272E350")]
	private void LoadAttributeValue(XmlNode parent, bool direct)
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x272FA40", Offset = "0x272E040", VA = "0x18272FA40")]
	private XmlEntityReference LoadEntityReferenceNode(bool direct)
	{
		return null;
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x272E650", Offset = "0x272CC50", VA = "0x18272E650")]
	private XmlDeclaration LoadDeclarationNode()
	{
		return null;
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x272EA90", Offset = "0x272D090", VA = "0x18272EA90")]
	private XmlDocumentType LoadDocumentTypeNode()
	{
		return null;
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x272FDF0", Offset = "0x272E3F0", VA = "0x18272FDF0")]
	private XmlNode LoadNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x272DCC0", Offset = "0x272C2C0", VA = "0x18272DCC0")]
	private XmlAttribute LoadAttributeNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x2731160", Offset = "0x272F760", VA = "0x182731160")]
	internal void ParseDocumentType(XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x2730EC0", Offset = "0x272F4C0", VA = "0x182730EC0")]
	private void ParseDocumentType(XmlDocumentType dtNode, bool bUseResolver, XmlResolver resolver)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x272ECD0", Offset = "0x272D2D0", VA = "0x18272ECD0")]
	private void LoadDocumentType(IDtdInfo dtdInfo, XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x272D490", Offset = "0x272BA90", VA = "0x18272D490")]
	private XmlParserContext GetContext(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x27311E0", Offset = "0x272F7E0", VA = "0x1827311E0")]
	internal XmlNamespaceManager ParsePartialContent(XmlNode parentNode, string innerxmltext, XmlNodeType nt)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x272FC80", Offset = "0x272E280", VA = "0x18272FC80")]
	internal void LoadInnerXmlElement(XmlElement node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x272FC60", Offset = "0x272E260", VA = "0x18272FC60")]
	internal void LoadInnerXmlAttribute(XmlAttribute node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x2731880", Offset = "0x272FE80", VA = "0x182731880")]
	private void RemoveDuplicateNamespace(XmlElement elem, XmlNamespaceManager mgr, bool fCheckElemAttrs)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x272CE60", Offset = "0x272B460", VA = "0x18272CE60")]
	private string EntitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x272D3E0", Offset = "0x272B9E0", VA = "0x18272D3E0")]
	internal void ExpandEntity(XmlEntity ent)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x272CEB0", Offset = "0x272B4B0", VA = "0x18272CEB0")]
	internal void ExpandEntityReference(XmlEntityReference eref)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x272CC10", Offset = "0x272B210", VA = "0x18272CC10")]
	private XmlReader CreateInnerXmlReader(string xmlFragment, XmlNodeType nt, XmlParserContext context, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x2731440", Offset = "0x272FA40", VA = "0x182731440")]
	internal static void ParseXmlDeclarationValue(string strValue, out string version, out string encoding, out string standalone)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x2731B80", Offset = "0x2730180", VA = "0x182731B80")]
	internal static Exception UnexpectedNodeType(XmlNodeType nodetype)
	{
		return null;
	}
}
