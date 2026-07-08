using System;
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200005E")]
public class ResultException : Exception
{
	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x8C")]
	public readonly Result Result;

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x232C710", Offset = "0x232C710", VA = "0x232C710")]
	public ResultException(Result result)
	{
	}
}
