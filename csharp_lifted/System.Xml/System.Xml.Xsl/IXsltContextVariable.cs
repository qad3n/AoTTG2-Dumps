// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Xsl.IXsltContextVariable
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
