// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Http.NtlmSession
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net;
using Il2CppDummyDll;
using Mono.Security.Protocol.Ntlm;

namespace Mono.Http;

[Token(Token = "0x2000068")]
internal class NtlmSession
{
	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0x10")]
	private MessageBase message;

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public NtlmSession()
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x249EA20", Offset = "0x249D020", VA = "0x18249EA20")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
