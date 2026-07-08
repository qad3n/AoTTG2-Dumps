using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000312")]
internal static class Utils
{
	[Token(Token = "0x4000DD7")]
	internal const int DefaultRsaProviderType = 1;

	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x0")]
	private static RNGCryptoServiceProvider _rng;

	[Token(Token = "0x170002E7")]
	internal static RNGCryptoServiceProvider StaticRandomNumberGenerator
	{
		[Token(Token = "0x6001ACF")]
		[Address(RVA = "0x4E66330", Offset = "0x4E66330", VA = "0x4E66330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x4E664D0", Offset = "0x4E664D0", VA = "0x4E664D0")]
	internal static byte[] GenerateRandom(int keySize)
	{
		return null;
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x4E65FA0", Offset = "0x4E65FA0", VA = "0x4E65FA0")]
	internal static bool HasAlgorithm(int dwCalg, int dwKeySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x4E588D0", Offset = "0x4E588D0", VA = "0x4E588D0")]
	internal static string DiscardWhiteSpaces(string inputBuffer)
	{
		return null;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x4E66560", Offset = "0x4E66560", VA = "0x4E66560")]
	internal static string DiscardWhiteSpaces(string inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x4E66730", Offset = "0x4E66730", VA = "0x4E66730")]
	internal static int ConvertByteArrayToInt(byte[] input)
	{
		return default(int);
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x4E66780", Offset = "0x4E66780", VA = "0x4E66780")]
	internal static byte[] ConvertIntToByteArray(int dwInput)
	{
		return null;
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x4E66890", Offset = "0x4E66890", VA = "0x4E66890")]
	internal static void ConvertIntToByteArray(uint dwInput, ref byte[] counter)
	{
	}

	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x4E65C00", Offset = "0x4E65C00", VA = "0x4E65C00")]
	internal static byte[] FixupKeyParity(byte[] key)
	{
		return null;
	}

	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x4E668F0", Offset = "0x4E668F0", VA = "0x4E668F0")]
	internal unsafe static void DWORDFromLittleEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x4E66950", Offset = "0x4E66950", VA = "0x4E66950")]
	internal static void DWORDToLittleEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x4E5F7D0", Offset = "0x4E5F7D0", VA = "0x4E5F7D0")]
	internal unsafe static void DWORDFromBigEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x4E5F6F0", Offset = "0x4E5F6F0", VA = "0x4E5F6F0")]
	internal static void DWORDToBigEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x4E62300", Offset = "0x4E62300", VA = "0x4E62300")]
	internal unsafe static void QuadWordFromBigEndian(ulong* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x4E62170", Offset = "0x4E62170", VA = "0x4E62170")]
	internal static void QuadWordToBigEndian(byte[] block, ulong[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x4E66A30", Offset = "0x4E66A30", VA = "0x4E66A30")]
	internal static byte[] Int(uint i)
	{
		return null;
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x4E5D940", Offset = "0x4E5D940", VA = "0x4E5D940")]
	internal static byte[] RsaOaepEncrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, RandomNumberGenerator rng, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x4E5D000", Offset = "0x4E5D000", VA = "0x4E5D000")]
	internal static byte[] RsaOaepDecrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x4E66AA0", Offset = "0x4E66AA0", VA = "0x4E66AA0")]
	internal static byte[] RsaPkcs1Padding(RSA rsa, byte[] oid, byte[] hash)
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x4E66D20", Offset = "0x4E66D20", VA = "0x4E66D20")]
	internal static bool CompareBigIntArrays(byte[] lhs, byte[] rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x4E66E20", Offset = "0x4E66E20", VA = "0x4E66E20")]
	internal static HashAlgorithmName OidToHashAlgorithmName(string oid)
	{
		return default(HashAlgorithmName);
	}

	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x4E5D1A0", Offset = "0x4E5D1A0", VA = "0x4E5D1A0")]
	internal static bool DoesRsaKeyOverride(RSA rsaKey, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x4E66F20", Offset = "0x4E66F20", VA = "0x4E66F20")]
	private static bool DoesRsaKeyOverrideSlowPath(Type t, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x4E66FE0", Offset = "0x4E66FE0", VA = "0x4E66FE0")]
	internal static bool _ProduceLegacyHmacValues()
	{
		return default(bool);
	}
}
