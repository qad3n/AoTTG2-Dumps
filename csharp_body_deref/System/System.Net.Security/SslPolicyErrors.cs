using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x2000236")]
[Flags]
public enum SslPolicyErrors
{
	[Token(Token = "0x4000C86")]
	None = 0,
	[Token(Token = "0x4000C87")]
	RemoteCertificateNotAvailable = 1,
	[Token(Token = "0x4000C88")]
	RemoteCertificateNameMismatch = 2,
	[Token(Token = "0x4000C89")]
	RemoteCertificateChainErrors = 4
}
