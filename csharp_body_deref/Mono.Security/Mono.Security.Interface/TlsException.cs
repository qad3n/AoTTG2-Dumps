using System;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x2000033")]
public sealed class TlsException : Exception
{
	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x90")]
	private Alert alert;

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3A4FCE0", Offset = "0x3A4FCE0", VA = "0x3A4FCE0")]
	public TlsException(Alert alert, string message)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x3A4FD50", Offset = "0x3A4FD50", VA = "0x3A4FD50")]
	public TlsException(AlertDescription description, string message)
	{
	}
}
