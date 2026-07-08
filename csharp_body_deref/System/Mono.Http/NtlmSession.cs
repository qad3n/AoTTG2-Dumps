using System.Net;
using Il2CppDummyDll;
using Mono.Security.Protocol.Ntlm;

namespace Mono.Http;

[Token(Token = "0x2000068")]
internal class NtlmSession
{
	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0x10")]
	private MessageBase message;

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4545570", Offset = "0x4545570", VA = "0x4545570")]
	public NtlmSession()
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4545580", Offset = "0x4545580", VA = "0x4545580")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
