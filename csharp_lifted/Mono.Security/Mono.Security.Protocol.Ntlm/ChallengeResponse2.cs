// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Protocol.Ntlm.ChallengeResponse2
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.Protocol.Ntlm;

[Token(Token = "0x200001E")]
public static class ChallengeResponse2
{
	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] magic;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] nullEncMagic;

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x52C4440", Offset = "0x52C3440", VA = "0x52C4440")]
	private static byte[] Compute_LM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x52C4C80", Offset = "0x52C3C80", VA = "0x52C4C80")]
	private static byte[] Compute_NTLM_Password(string password)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x52C4D80", Offset = "0x52C3D80", VA = "0x52C4D80")]
	private static byte[] Compute_NTLM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x52C4DE0", Offset = "0x52C3DE0", VA = "0x52C4DE0")]
	private static void Compute_NTLMv2_Session(string password, byte[] challenge, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x52C5010", Offset = "0x52C4010", VA = "0x52C5010")]
	private static byte[] Compute_NTLMv2(Type2Message type2, string username, string password, string domain)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x52C56A0", Offset = "0x52C46A0", VA = "0x52C56A0")]
	public static void Compute(Type2Message type2, NtlmAuthLevel level, string username, string password, string domain, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x52C4930", Offset = "0x52C3930", VA = "0x52C4930")]
	private static byte[] GetResponse(byte[] challenge, byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x52C5AC0", Offset = "0x52C4AC0", VA = "0x52C5AC0")]
	private static byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x52C47D0", Offset = "0x52C37D0", VA = "0x52C47D0")]
	private static byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
