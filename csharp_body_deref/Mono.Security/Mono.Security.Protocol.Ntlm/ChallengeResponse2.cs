// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.ChallengeResponse2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x2000030")]
public static class ChallengeResponse2
{
	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] magic;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] nullEncMagic;

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x1913C10", Offset = "0x1912210", VA = "0x181913C10")]
	private static byte[] Compute_LM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x1913EE0", Offset = "0x19124E0", VA = "0x181913EE0")]
	private static byte[] Compute_NTLM_Password(string password)
	{
		return null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x1913FF0", Offset = "0x19125F0", VA = "0x181913FF0")]
	private static byte[] Compute_NTLM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x1914060", Offset = "0x1912660", VA = "0x181914060")]
	private static void Compute_NTLMv2_Session(string password, byte[] challenge, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x1914290", Offset = "0x1912890", VA = "0x181914290")]
	private static byte[] Compute_NTLMv2(Type2Message type2, string username, string password, string domain)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x19147C0", Offset = "0x1912DC0", VA = "0x1819147C0")]
	public static void Compute(Type2Message type2, NtlmAuthLevel level, string username, string password, string domain, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x19149D0", Offset = "0x1912FD0", VA = "0x1819149D0")]
	private static byte[] GetResponse(byte[] challenge, byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x1914D80", Offset = "0x1913380", VA = "0x181914D80")]
	private static byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x1914C00", Offset = "0x1913200", VA = "0x181914C00")]
	private static byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
