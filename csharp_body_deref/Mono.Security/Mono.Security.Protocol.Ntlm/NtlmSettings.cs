// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.NtlmSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3ABA5E0", Offset = "0x3ABA5E0", VA = "0x3ABA5E0")]
		get
		{
			return default(NtlmAuthLevel);
		}
	}
}
