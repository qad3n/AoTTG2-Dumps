// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.XmlAsyncCheckReaderWithLineInfoNS
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4795F10", Offset = "0x4795F10", VA = "0x4795F10")]
	public XmlAsyncCheckReaderWithLineInfoNS(XmlReader reader)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4797170", Offset = "0x4797170", VA = "0x4797170", Slot = "59")]
	private IDictionary<string, string> System_002EXml_002EIXmlNamespaceResolver_002EGetNamespacesInScope(XmlNamespaceScope scope)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4797220", Offset = "0x4797220", VA = "0x4797220", Slot = "60")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupNamespace(string prefix)
	{
		return null;
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x47972D0", Offset = "0x47972D0", VA = "0x47972D0", Slot = "61")]
	private string System_002EXml_002EIXmlNamespaceResolver_002ELookupPrefix(string namespaceName)
	{
		return null;
	}
}
