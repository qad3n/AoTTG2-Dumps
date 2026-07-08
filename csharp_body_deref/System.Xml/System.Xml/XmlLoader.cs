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
	[Address(RVA = "0x4493910", Offset = "0x4493910", VA = "0x4493910")]
	public XmlLoader()
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4497D70", Offset = "0x4497D70", VA = "0x4497D70")]
	internal void Load(XmlDocument doc, XmlReader reader, bool preserveWhitespace)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4498000", Offset = "0x4498000", VA = "0x4498000")]
	private void LoadDocSequence(XmlDocument parentDoc)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x44987A0", Offset = "0x44987A0", VA = "0x44987A0")]
	internal XmlNode ReadCurrentNode(XmlDocument doc, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4498080", Offset = "0x4498080", VA = "0x4498080")]
	private XmlNode LoadNode(bool skipOverWhitespace)
	{
		return null;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x44988E0", Offset = "0x44988E0", VA = "0x44988E0")]
	private XmlAttribute LoadAttributeNode()
	{
		return null;
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4499480", Offset = "0x4499480", VA = "0x4499480")]
	private XmlAttribute LoadDefaultAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x4499620", Offset = "0x4499620", VA = "0x4499620")]
	private void LoadAttributeValue(XmlNode parent, bool direct)
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x4498C40", Offset = "0x4498C40", VA = "0x4498C40")]
	private XmlEntityReference LoadEntityReferenceNode(bool direct)
	{
		return null;
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x4498F40", Offset = "0x4498F40", VA = "0x4498F40")]
	private XmlDeclaration LoadDeclarationNode()
	{
		return null;
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x4499160", Offset = "0x4499160", VA = "0x4499160")]
	private XmlDocumentType LoadDocumentTypeNode()
	{
		return null;
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x44999C0", Offset = "0x44999C0", VA = "0x44999C0")]
	private XmlNode LoadNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x449B260", Offset = "0x449B260", VA = "0x449B260")]
	private XmlAttribute LoadAttributeNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x44942E0", Offset = "0x44942E0", VA = "0x44942E0")]
	internal void ParseDocumentType(XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x449B550", Offset = "0x449B550", VA = "0x449B550")]
	private void ParseDocumentType(XmlDocumentType dtNode, bool bUseResolver, XmlResolver resolver)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x449A1C0", Offset = "0x449A1C0", VA = "0x449A1C0")]
	private void LoadDocumentType(IDtdInfo dtdInfo, XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x449B9E0", Offset = "0x449B9E0", VA = "0x449B9E0")]
	private XmlParserContext GetContext(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x4493920", Offset = "0x4493920", VA = "0x4493920")]
	internal XmlNamespaceManager ParsePartialContent(XmlNode parentNode, string innerxmltext, XmlNodeType nt)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x44962F0", Offset = "0x44962F0", VA = "0x44962F0")]
	internal void LoadInnerXmlElement(XmlElement node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x449CAE0", Offset = "0x449CAE0", VA = "0x449CAE0")]
	internal void LoadInnerXmlAttribute(XmlAttribute node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x449C7C0", Offset = "0x449C7C0", VA = "0x449C7C0")]
	private void RemoveDuplicateNamespace(XmlElement elem, XmlNamespaceManager mgr, bool fCheckElemAttrs)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x449CAF0", Offset = "0x449CAF0", VA = "0x449CAF0")]
	private string EntitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x4496970", Offset = "0x4496970", VA = "0x4496970")]
	internal void ExpandEntity(XmlEntity ent)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x4496E20", Offset = "0x4496E20", VA = "0x4496E20")]
	internal void ExpandEntityReference(XmlEntityReference eref)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x449C500", Offset = "0x449C500", VA = "0x449C500")]
	private XmlReader CreateInnerXmlReader(string xmlFragment, XmlNodeType nt, XmlParserContext context, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4499F40", Offset = "0x4499F40", VA = "0x4499F40")]
	internal static void ParseXmlDeclarationValue(string strValue, out string version, out string encoding, out string standalone)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x4499390", Offset = "0x4499390", VA = "0x4499390")]
	internal static Exception UnexpectedNodeType(XmlNodeType nodetype)
	{
		return null;
	}
}
