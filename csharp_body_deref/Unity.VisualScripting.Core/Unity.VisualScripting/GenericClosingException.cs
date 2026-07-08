using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20000EA")]
public sealed class GenericClosingException : Exception
{
	[Token(Token = "0x600059C")]
	[Address(RVA = "0x499D1D0", Offset = "0x499D1D0", VA = "0x499D1D0")]
	public GenericClosingException(string message)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x499D230", Offset = "0x499D230", VA = "0x499D230")]
	public GenericClosingException(Type open, Type closed)
	{
	}
}
