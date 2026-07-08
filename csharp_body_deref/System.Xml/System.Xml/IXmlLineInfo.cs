using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BF")]
public interface IXmlLineInfo
{
	[Token(Token = "0x170002E2")]
	int LineNumber
	{
		[Token(Token = "0x6000A78")]
		get;
	}

	[Token(Token = "0x170002E3")]
	int LinePosition
	{
		[Token(Token = "0x6000A79")]
		get;
	}

	[Token(Token = "0x6000A77")]
	bool HasLineInfo();
}
