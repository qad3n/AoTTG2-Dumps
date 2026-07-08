using System.Xml.XPath;
using Il2CppDummyDll;

namespace System.Xml.Xsl;

[Token(Token = "0x2000159")]
public interface IXsltContextFunction
{
	[Token(Token = "0x170003E2")]
	XPathResultType ReturnType
	{
		[Token(Token = "0x6000F16")]
		get;
	}

	[Token(Token = "0x6000F17")]
	object Invoke(XsltContext xsltContext, object[] args, XPathNavigator docContext);
}
