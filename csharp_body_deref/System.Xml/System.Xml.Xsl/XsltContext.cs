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
	[Address(RVA = "0x45000D0", Offset = "0x45000D0", VA = "0x45000D0")]
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
