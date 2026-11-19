// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Xsl.IXsltContextFunction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
