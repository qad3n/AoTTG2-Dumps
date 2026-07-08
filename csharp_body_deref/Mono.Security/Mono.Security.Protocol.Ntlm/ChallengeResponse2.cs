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
	[Address(RVA = "0x3A4BBA0", Offset = "0x3A4BBA0", VA = "0x3A4BBA0")]
	private static byte[] Compute_LM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x3A4C3F0", Offset = "0x3A4C3F0", VA = "0x3A4C3F0")]
	private static byte[] Compute_NTLM_Password(string password)
	{
		return null;
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x3A4C4F0", Offset = "0x3A4C4F0", VA = "0x3A4C4F0")]
	private static byte[] Compute_NTLM(string password, byte[] challenge)
	{
		return null;
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3A4C550", Offset = "0x3A4C550", VA = "0x3A4C550")]
	private static void Compute_NTLMv2_Session(string password, byte[] challenge, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3A4C780", Offset = "0x3A4C780", VA = "0x3A4C780")]
	private static byte[] Compute_NTLMv2(Type2Message type2, string username, string password, string domain)
	{
		return null;
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3A4CE10", Offset = "0x3A4CE10", VA = "0x3A4CE10")]
	public static void Compute(Type2Message type2, NtlmAuthLevel level, string username, string password, string domain, out byte[] lm, out byte[] ntlm)
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3A4C0A0", Offset = "0x3A4C0A0", VA = "0x3A4C0A0")]
	private static byte[] GetResponse(byte[] challenge, byte[] pwd)
	{
		return null;
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3A4D200", Offset = "0x3A4D200", VA = "0x3A4D200")]
	private static byte[] PrepareDESKey(byte[] key56bits, int position)
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3A4BF40", Offset = "0x3A4BF40", VA = "0x3A4BF40")]
	private static byte[] PasswordToKey(string password, int position)
	{
		return null;
	}
}
