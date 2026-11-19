// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000020")]
public enum NtlmAuthLevel
{
	[Token(Token = "0x400008E")]
	LM_and_NTLM,
	[Token(Token = "0x400008F")]
	LM_and_NTLM_and_try_NTLMv2_Session,
	[Token(Token = "0x4000090")]
	NTLM_only,
	[Token(Token = "0x4000091")]
	NTLMv2_only
}
