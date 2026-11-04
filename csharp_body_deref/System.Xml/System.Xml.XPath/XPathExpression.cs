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
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	internal XPathExpression()
	{
	}

	[Token(Token = "0x6000C4A")]
	public abstract void SetContext(IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2748310", Offset = "0x2746910", VA = "0x182748310")]
	public static XPathExpression Compile(string xpath)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x27483E0", Offset = "0x27469E0", VA = "0x1827483E0")]
	public static XPathExpression Compile(string xpath, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
