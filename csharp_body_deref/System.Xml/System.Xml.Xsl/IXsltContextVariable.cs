using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml.Xsl;

[Token(Token = "0x200015A")]
public interface IXsltContextVariable
{
	[Token(Token = "0x170003E3")]
	XPathResultType VariableType
	{
		[Token(Token = "0x6000F18")]
		get;
	}

	[Token(Token = "0x6000F19")]
	object Evaluate(XsltContext xsltContext);
}
