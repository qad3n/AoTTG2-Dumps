// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Xsl.XsltContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml.Xsl;

[Token(Token = "0x200015B")]
public abstract class XsltContext : XmlNamespaceManager
{
	[Token(Token = "0x170003E4")]
	public abstract bool Whitespace
	{
		[Token(Token = "0x6000F1D")]
		get;
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x483D830", Offset = "0x483D830", VA = "0x483D830")]
	internal XsltContext(bool dummy)
	{
	}

	[Token(Token = "0x6000F1B")]
	public abstract IXsltContextVariable ResolveVariable(string prefix, string name);

	[Token(Token = "0x6000F1C")]
	public abstract IXsltContextFunction ResolveFunction(string prefix, string name, XPathResultType[] ArgTypes);

	[Token(Token = "0x6000F1E")]
	public abstract bool PreserveWhitespace(XPathNavigator node);
}
