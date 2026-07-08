using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200011C")]
public sealed class InvalidOperatorException : OperatorException
{
	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x49E4FF0", Offset = "0x49E4FF0", VA = "0x49E4FF0")]
	public InvalidOperatorException(string symbol, Type type)
	{
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x49E5160", Offset = "0x49E5160", VA = "0x49E5160")]
	public InvalidOperatorException(string symbol, Type leftType, Type rightType)
	{
	}
}
