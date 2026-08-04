// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Converters.IXmlNode
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Xml;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C8")]
internal interface IXmlNode
{
	[Token(Token = "0x17000272")]
	XmlNodeType NodeType
	{
		[Token(Token = "0x6000F48")]
		get;
	}

	[Token(Token = "0x17000273")]
	string? LocalName
	{
		[Token(Token = "0x6000F49")]
		get;
	}

	[Token(Token = "0x17000274")]
	List<IXmlNode> ChildNodes
	{
		[Token(Token = "0x6000F4A")]
		get;
	}

	[Token(Token = "0x17000275")]
	List<IXmlNode> Attributes
	{
		[Token(Token = "0x6000F4B")]
		get;
	}

	[Token(Token = "0x17000276")]
	IXmlNode? ParentNode
	{
		[Token(Token = "0x6000F4C")]
		get;
	}

	[Token(Token = "0x17000277")]
	string? Value
	{
		[Token(Token = "0x6000F4D")]
		get;
		[Token(Token = "0x6000F4E")]
		set;
	}

	[Token(Token = "0x17000278")]
	string? NamespaceUri
	{
		[Token(Token = "0x6000F50")]
		get;
	}

	[Token(Token = "0x17000279")]
	object? WrappedNode
	{
		[Token(Token = "0x6000F51")]
		get;
	}

	[Token(Token = "0x6000F4F")]
	IXmlNode AppendChild(IXmlNode newChild);
}
