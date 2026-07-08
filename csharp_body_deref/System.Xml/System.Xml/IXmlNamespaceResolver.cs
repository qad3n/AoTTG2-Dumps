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
