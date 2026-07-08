using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C4")]
internal interface IXmlDocument : IXmlNode
{
	[Token(Token = "0x17000269")]
	IXmlElement? DocumentElement
	{
		[Token(Token = "0x6000F3B")]
		get;
	}

	[Token(Token = "0x6000F2F")]
	IXmlNode CreateComment(string? text);

	[Token(Token = "0x6000F30")]
	IXmlNode CreateTextNode(string? text);

	[Token(Token = "0x6000F31")]
	IXmlNode CreateCDataSection(string? data);

	[Token(Token = "0x6000F32")]
	IXmlNode CreateWhitespace(string? text);

	[Token(Token = "0x6000F33")]
	IXmlNode CreateSignificantWhitespace(string? text);

	[Token(Token = "0x6000F34")]
	IXmlNode CreateXmlDeclaration(string version, string? encoding, string? standalone);

	[Token(Token = "0x6000F35")]
	IXmlNode? CreateXmlDocumentType(string name, string? publicId, string? systemId, string? internalSubset);

	[Token(Token = "0x6000F36")]
	IXmlNode CreateProcessingInstruction(string target, string data);

	[Token(Token = "0x6000F37")]
	IXmlElement CreateElement(string elementName);

	[Token(Token = "0x6000F38")]
	IXmlElement CreateElement(string qualifiedName, string namespaceUri);

	[Token(Token = "0x6000F39")]
	IXmlNode CreateAttribute(string name, string value);

	[Token(Token = "0x6000F3A")]
	IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value);
}
