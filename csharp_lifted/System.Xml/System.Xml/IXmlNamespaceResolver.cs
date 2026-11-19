// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IXmlNamespaceResolver
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000C2")]
public interface IXmlNamespaceResolver
{
	[Token(Token = "0x6000A83")]
	IDictionary<string, string> GetNamespacesInScope(XmlNamespaceScope scope);

	[Token(Token = "0x6000A84")]
	string LookupNamespace(string prefix);

	[Token(Token = "0x6000A85")]
	string LookupPrefix(string namespaceName);
}
