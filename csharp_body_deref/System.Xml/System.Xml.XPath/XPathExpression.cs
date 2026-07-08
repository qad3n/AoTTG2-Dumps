using Il2CppDummyDll;

namespace System.Xml.XPath;

[Token(Token = "0x20000F8")]
public abstract class XPathExpression
{
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x44C6AE0", Offset = "0x44C6AE0", VA = "0x44C6AE0")]
	internal XPathExpression()
	{
	}

	[Token(Token = "0x6000C4A")]
	public abstract void SetContext(IXmlNamespaceResolver nsResolver);

	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x44C6AF0", Offset = "0x44C6AF0", VA = "0x44C6AF0")]
	public static XPathExpression Compile(string xpath)
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x44C6B00", Offset = "0x44C6B00", VA = "0x44C6B00")]
	public static XPathExpression Compile(string xpath, IXmlNamespaceResolver nsResolver)
	{
		return null;
	}
}
