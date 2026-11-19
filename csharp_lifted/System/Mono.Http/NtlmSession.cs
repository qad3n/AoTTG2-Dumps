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
	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0x10")]
	private MessageBase message;

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x5E3F190", Offset = "0x5E3E190", VA = "0x5E3F190")]
	public NtlmSession()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x5E3F1A0", Offset = "0x5E3E1A0", VA = "0x5E3F1A0")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
