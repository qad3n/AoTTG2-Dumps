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
