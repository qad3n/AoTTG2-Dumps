// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Http.NtlmClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x452BFD0", Offset = "0x452BFD0", VA = "0x452BFD0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x452BBF0", Offset = "0x452BBF0", VA = "0x452BBF0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x452BFC0", Offset = "0x452BFC0", VA = "0x452BFC0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x452C000", Offset = "0x452C000", VA = "0x452C000")]
	public NtlmClient()
	{
	}
}
