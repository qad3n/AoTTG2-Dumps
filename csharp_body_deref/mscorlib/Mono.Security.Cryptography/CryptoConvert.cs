using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000042")]
internal sealed class CryptoConvert
{
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4DF7F30", Offset = "0x4DF7F30", VA = "0x4DF7F30")]
	private static int ToInt32LE(byte[] bytes, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4DF7F90", Offset = "0x4DF7F90", VA = "0x4DF7F90")]
	private static uint ToUInt32LE(byte[] bytes, int offset)
	{
		return default(uint);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4DF7FF0", Offset = "0x4DF7FF0", VA = "0x4DF7FF0")]
	private static byte[] GetBytesLE(int val)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4DF8060", Offset = "0x4DF8060", VA = "0x4DF8060")]
	private static byte[] Trim(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4DF80F0", Offset = "0x4DF80F0", VA = "0x4DF80F0")]
	public static RSA FromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4DF81C0", Offset = "0x4DF81C0", VA = "0x4DF81C0")]
	private static RSAParameters GetParametersFromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4DF8A80", Offset = "0x4DF8A80", VA = "0x4DF8A80")]
	public static DSA FromCapiPrivateKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4DF91D0", Offset = "0x4DF91D0", VA = "0x4DF91D0")]
	public static byte[] ToCapiPrivateKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4DF9580", Offset = "0x4DF9580", VA = "0x4DF9580")]
	public static byte[] ToCapiPrivateKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4DF9860", Offset = "0x4DF9860", VA = "0x4DF9860")]
	public static RSA FromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x4DF9A00", Offset = "0x4DF9A00", VA = "0x4DF9A00")]
	private static RSAParameters GetParametersFromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4DF9FA0", Offset = "0x4DF9FA0", VA = "0x4DF9FA0")]
	public static DSA FromCapiPublicKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4DFA710", Offset = "0x4DFA710", VA = "0x4DFA710")]
	public static byte[] ToCapiPublicKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4DFA910", Offset = "0x4DFA910", VA = "0x4DFA910")]
	public static byte[] ToCapiPublicKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4DFABF0", Offset = "0x4DFABF0", VA = "0x4DFABF0")]
	public static RSA FromCapiKeyBlob(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4DFAC00", Offset = "0x4DFAC00", VA = "0x4DFAC00")]
	public static RSA FromCapiKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4DFADE0", Offset = "0x4DFADE0", VA = "0x4DFADE0")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4DFADF0", Offset = "0x4DFADF0", VA = "0x4DFADF0")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}
}
