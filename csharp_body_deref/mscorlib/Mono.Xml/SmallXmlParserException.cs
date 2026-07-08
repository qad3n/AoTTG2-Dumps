using System;
using Il2CppDummyDll;

namespace Mono.Xml;

[Token(Token = "0x200002E")]
internal class SmallXmlParserException : SystemException
{
	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x8C")]
	private int line;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x90")]
	private int column;

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x4DE9250", Offset = "0x4DE9250", VA = "0x4DE9250")]
	public SmallXmlParserException(string msg, int line, int column)
	{
	}
}
