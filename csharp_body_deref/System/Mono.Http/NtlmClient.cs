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
	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<HttpWebRequest, NtlmSession> cache;

	[Token(Token = "0x17000056")]
	public string AuthenticationType
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x249E9F0", Offset = "0x249CFF0", VA = "0x18249E9F0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x249E5C0", Offset = "0x249CBC0", VA = "0x18249E5C0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public NtlmClient()
	{
	}
}
