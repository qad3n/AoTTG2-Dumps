// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckReaderWithNS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x26E31F0", Offset = "0x26E17F0", VA = "0x1826E31F0")]
	public XmlAsyncCheckReaderWithNS(XmlReader reader)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x26E30D0", Offset = "0x26E16D0", VA = "0x1826E30D0", Slot = "53")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x26E3130", Offset = "0x26E1730", VA = "0x1826E3130", Slot = "54")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x26E3190", Offset = "0x26E1790", VA = "0x1826E3190", Slot = "55")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
