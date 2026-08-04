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
	[Address(RVA = "0x47D1070", Offset = "0x47D1070", VA = "0x47D1070")]
	public XmlLoader()
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x47D54D0", Offset = "0x47D54D0", VA = "0x47D54D0")]
	internal void Load(XmlDocument doc, XmlReader reader, bool preserveWhitespace)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x47D5760", Offset = "0x47D5760", VA = "0x47D5760")]
	private void LoadDocSequence(XmlDocument parentDoc)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x47D5F00", Offset = "0x47D5F00", VA = "0x47D5F00")]
	internal XmlNode ReadCurrentNode(XmlDocument doc, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x47D57E0", Offset = "0x47D57E0", VA = "0x47D57E0")]
	private XmlNode LoadNode(bool skipOverWhitespace)
	{
		return null;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x47D6040", Offset = "0x47D6040", VA = "0x47D6040")]
	private XmlAttribute LoadAttributeNode()
	{
		return null;
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x47D6BE0", Offset = "0x47D6BE0", VA = "0x47D6BE0")]
	private XmlAttribute LoadDefaultAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x47D6D80", Offset = "0x47D6D80", VA = "0x47D6D80")]
	private void LoadAttributeValue(XmlNode parent, bool direct)
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x47D63A0", Offset = "0x47D63A0", VA = "0x47D63A0")]
	private XmlEntityReference LoadEntityReferenceNode(bool direct)
	{
		return null;
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x47D66A0", Offset = "0x47D66A0", VA = "0x47D66A0")]
	private XmlDeclaration LoadDeclarationNode()
	{
		return null;
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x47D68C0", Offset = "0x47D68C0", VA = "0x47D68C0")]
	private XmlDocumentType LoadDocumentTypeNode()
	{
		return null;
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x47D7120", Offset = "0x47D7120", VA = "0x47D7120")]
	private XmlNode LoadNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x47D89C0", Offset = "0x47D89C0", VA = "0x47D89C0")]
	private XmlAttribute LoadAttributeNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x47D1A40", Offset = "0x47D1A40", VA = "0x47D1A40")]
	internal void ParseDocumentType(XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x47D8CB0", Offset = "0x47D8CB0", VA = "0x47D8CB0")]
	private void ParseDocumentType(XmlDocumentType dtNode, bool bUseResolver, XmlResolver resolver)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x47D7920", Offset = "0x47D7920", VA = "0x47D7920")]
	private void LoadDocumentType(IDtdInfo dtdInfo, XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x47D9140", Offset = "0x47D9140", VA = "0x47D9140")]
	private XmlParserContext GetContext(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x47D1080", Offset = "0x47D1080", VA = "0x47D1080")]
	internal XmlNamespaceManager ParsePartialContent(XmlNode parentNode, string innerxmltext, XmlNodeType nt)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x47D3A50", Offset = "0x47D3A50", VA = "0x47D3A50")]
	internal void LoadInnerXmlElement(XmlElement node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x47DA240", Offset = "0x47DA240", VA = "0x47DA240")]
	internal void LoadInnerXmlAttribute(XmlAttribute node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x47D9F20", Offset = "0x47D9F20", VA = "0x47D9F20")]
	private void RemoveDuplicateNamespace(XmlElement elem, XmlNamespaceManager mgr, bool fCheckElemAttrs)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x47DA250", Offset = "0x47DA250", VA = "0x47DA250")]
	private string EntitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x47D40D0", Offset = "0x47D40D0", VA = "0x47D40D0")]
	internal void ExpandEntity(XmlEntity ent)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x47D4580", Offset = "0x47D4580", VA = "0x47D4580")]
	internal void ExpandEntityReference(XmlEntityReference eref)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x47D9C60", Offset = "0x47D9C60", VA = "0x47D9C60")]
	private XmlReader CreateInnerXmlReader(string xmlFragment, XmlNodeType nt, XmlParserContext context, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x47D76A0", Offset = "0x47D76A0", VA = "0x47D76A0")]
	internal static void ParseXmlDeclarationValue(string strValue, out string version, out string encoding, out string standalone)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x47D6AF0", Offset = "0x47D6AF0", VA = "0x47D6AF0")]
	internal static Exception UnexpectedNodeType(XmlNodeType nodetype)
	{
		return null;
	}
}
