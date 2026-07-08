using Il2CppDummyDll;

namespace Newtonsoft.Json.Converters;

[Token(Token = "0x20001C5")]
internal interface IXmlDeclaration : IXmlNode
{
	[Token(Token = "0x1700026A")]
	string? Version
	{
		[Token(Token = "0x6000F3C")]
		get;
	}

	[Token(Token = "0x1700026B")]
	string? Encoding
	{
		[Token(Token = "0x6000F3D")]
		get;
		[Token(Token = "0x6000F3E")]
		set;
	}

	[Token(Token = "0x1700026C")]
	string? Standalone
	{
		[Token(Token = "0x6000F3F")]
		get;
		[Token(Token = "0x6000F40")]
		set;
	}
}
