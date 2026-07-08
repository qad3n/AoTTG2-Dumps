using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000022")]
public static class NtlmSettings
{
	[Token(Token = "0x400009D")]
	[FieldOffset(Offset = "0x0")]
	private static NtlmAuthLevel defaultAuthLevel;

	[Token(Token = "0x17000052")]
	public static NtlmAuthLevel DefaultAuthLevel
	{
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x3A4D920", Offset = "0x3A4D920", VA = "0x3A4D920")]
		get
		{
			return default(NtlmAuthLevel);
		}
	}
}
