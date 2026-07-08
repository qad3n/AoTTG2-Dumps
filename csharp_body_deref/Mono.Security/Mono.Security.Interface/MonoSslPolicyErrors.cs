using System;
using Il2CppDummyDll;

namespace Mono.Security.Interface;

[Token(Token = "0x200002D")]
[Flags]
public enum MonoSslPolicyErrors
{
	[Token(Token = "0x40001DE")]
	None = 0,
	[Token(Token = "0x40001DF")]
	RemoteCertificateNotAvailable = 1,
	[Token(Token = "0x40001E0")]
	RemoteCertificateNameMismatch = 2,
	[Token(Token = "0x40001E1")]
	RemoteCertificateChainErrors = 4
}
