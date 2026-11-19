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
	[Address(RVA = "0x60D44A0", Offset = "0x60D34A0", VA = "0x60D44A0")]
	public XmlLoader()
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x60D8550", Offset = "0x60D7550", VA = "0x60D8550")]
	internal void Load(XmlDocument doc, XmlReader reader, bool preserveWhitespace)
	{
	}

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x60D87D0", Offset = "0x60D77D0", VA = "0x60D87D0")]
	private void LoadDocSequence(XmlDocument parentDoc)
	{
	}

	[Token(Token = "0x600091C")]
	[Address(RVA = "0x60D8F70", Offset = "0x60D7F70", VA = "0x60D8F70")]
	internal XmlNode ReadCurrentNode(XmlDocument doc, XmlReader reader)
	{
		return null;
	}

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x60D8850", Offset = "0x60D7850", VA = "0x60D8850")]
	private XmlNode LoadNode(bool skipOverWhitespace)
	{
		return null;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x60D90B0", Offset = "0x60D80B0", VA = "0x60D90B0")]
	private XmlAttribute LoadAttributeNode()
	{
		return null;
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x60D9C70", Offset = "0x60D8C70", VA = "0x60D9C70")]
	private XmlAttribute LoadDefaultAttribute()
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x60D9E20", Offset = "0x60D8E20", VA = "0x60D9E20")]
	private void LoadAttributeValue(XmlNode parent, bool direct)
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x60D9410", Offset = "0x60D8410", VA = "0x60D9410")]
	private XmlEntityReference LoadEntityReferenceNode(bool direct)
	{
		return null;
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x60D9760", Offset = "0x60D8760", VA = "0x60D9760")]
	private XmlDeclaration LoadDeclarationNode()
	{
		return null;
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x60D9960", Offset = "0x60D8960", VA = "0x60D9960")]
	private XmlDocumentType LoadDocumentTypeNode()
	{
		return null;
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x60DA1C0", Offset = "0x60D91C0", VA = "0x60DA1C0")]
	private XmlNode LoadNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x60DB920", Offset = "0x60DA920", VA = "0x60DB920")]
	private XmlAttribute LoadAttributeNodeDirect()
	{
		return null;
	}

	[Token(Token = "0x6000926")]
	[Address(RVA = "0x60D4DB0", Offset = "0x60D3DB0", VA = "0x60D4DB0")]
	internal void ParseDocumentType(XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x60DBC10", Offset = "0x60DAC10", VA = "0x60DBC10")]
	private void ParseDocumentType(XmlDocumentType dtNode, bool bUseResolver, XmlResolver resolver)
	{
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x60DA9E0", Offset = "0x60D99E0", VA = "0x60DA9E0")]
	private void LoadDocumentType(IDtdInfo dtdInfo, XmlDocumentType dtNode)
	{
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x60DC090", Offset = "0x60DB090", VA = "0x60DC090")]
	private XmlParserContext GetContext(XmlNode node)
	{
		return null;
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x60D44B0", Offset = "0x60D34B0", VA = "0x60D44B0")]
	internal XmlNamespaceManager ParsePartialContent(XmlNode parentNode, string innerxmltext, XmlNodeType nt)
	{
		return null;
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x60D6C80", Offset = "0x60D5C80", VA = "0x60D6C80")]
	internal void LoadInnerXmlElement(XmlElement node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x60DD050", Offset = "0x60DC050", VA = "0x60DD050")]
	internal void LoadInnerXmlAttribute(XmlAttribute node, string innerxmltext)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x60DCD30", Offset = "0x60DBD30", VA = "0x60DCD30")]
	private void RemoveDuplicateNamespace(XmlElement elem, XmlNamespaceManager mgr, bool fCheckElemAttrs)
	{
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x60DD060", Offset = "0x60DC060", VA = "0x60DD060")]
	private string EntitizeName(string name)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x60D7300", Offset = "0x60D6300", VA = "0x60D7300")]
	internal void ExpandEntity(XmlEntity ent)
	{
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x60D77A0", Offset = "0x60D67A0", VA = "0x60D77A0")]
	internal void ExpandEntityReference(XmlEntityReference eref)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x60DCA60", Offset = "0x60DBA60", VA = "0x60DCA60")]
	private XmlReader CreateInnerXmlReader(string xmlFragment, XmlNodeType nt, XmlParserContext context, XmlDocument doc)
	{
		return null;
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x60DA740", Offset = "0x60D9740", VA = "0x60DA740")]
	internal static void ParseXmlDeclarationValue(string strValue, out string version, out string encoding, out string standalone)
	{
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x60D9B80", Offset = "0x60D8B80", VA = "0x60D9B80")]
	internal static Exception UnexpectedNodeType(XmlNodeType nodetype)
	{
		return null;
	}
}
