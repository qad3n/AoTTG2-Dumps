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
