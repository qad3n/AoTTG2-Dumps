// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.IXmlElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C7")]
internal interface IXmlElement : IXmlNode
{
	[Token(Token = "0x17000271")]
	bool IsEmpty
	{
		[Token(Token = "0x6000F47")]
		get;
	}

	[Token(Token = "0x6000F45")]
	void SetAttributeNode(IXmlNode attribute);

	[Token(Token = "0x6000F46")]
	string GetPrefixOfNamespace(string namespaceUri);
}
