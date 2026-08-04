// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XPath.XPathExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.XPath;

[Token(Token = "0x20000F8")]
public abstract class XPathExpression
{
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x4804240", Offset = "0x4804240", VA = "0x4804240")]
	internal XPathExpression()
	{
	}

	[Token(Token = "0x6000C4A")]
	public abstract void SetContext(IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x4804250", Offset = "0x4804250", VA = "0x4804250")]
	public static XPathExpression Compile(string xpath)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x4804260", Offset = "0x4804260", VA = "0x4804260")]
	public static XPathExpression Compile(string xpath, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
