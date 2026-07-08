using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000046")]
internal class XmlAsyncCheckReaderWithLineInfoNS : XmlAsyncCheckReaderWithLineInfo, IXmlNamespaceResolver
{
	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x28")]
	private readonly IXmlNamespaceResolver readerAsIXmlNamespaceResolver;

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x44587B0", Offset = "0x44587B0", VA = "0x44587B0")]
	public XmlAsyncCheckReaderWithLineInfoNS(XmlReader reader)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4459A10", Offset = "0x4459A10", VA = "0x4459A10", Slot = "59")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4459AC0", Offset = "0x4459AC0", VA = "0x4459AC0", Slot = "60")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4459B70", Offset = "0x4459B70", VA = "0x4459B70", Slot = "61")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
