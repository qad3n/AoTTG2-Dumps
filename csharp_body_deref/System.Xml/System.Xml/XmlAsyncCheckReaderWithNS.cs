using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000044")]
internal class XmlAsyncCheckReaderWithNS : XmlAsyncCheckReader, IXmlNamespaceResolver
{
	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x20")]
	private readonly IXmlNamespaceResolver readerAsIXmlNamespaceResolver;

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4458910", Offset = "0x4458910", VA = "0x4458910")]
	public XmlAsyncCheckReaderWithNS(XmlReader reader)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4459630", Offset = "0x4459630", VA = "0x4459630", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x44596E0", Offset = "0x44596E0", VA = "0x44596E0", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x4459790", Offset = "0x4459790", VA = "0x4459790", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
