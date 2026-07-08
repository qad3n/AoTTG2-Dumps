using System.Net;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Mono.Http;

[Token(Token = "0x2000069")]
internal class NtlmClient : IAuthenticationModule
{
	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<HttpWebRequest, NtlmSession> cache;

	[Token(Token = "0x17000052")]
	public string AuthenticationType
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x4545DE0", Offset = "0x4545DE0", VA = "0x4545DE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4545A00", Offset = "0x4545A00", VA = "0x4545A00", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4545DD0", Offset = "0x4545DD0", VA = "0x4545DD0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4545E10", Offset = "0x4545E10", VA = "0x4545E10")]
	public NtlmClient()
	{
	}
}
