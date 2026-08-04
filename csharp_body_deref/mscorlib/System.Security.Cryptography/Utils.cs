// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Utils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B4BE50", Offset = "0x3B4BE50", VA = "0x3B4BE50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x3B4BFF0", Offset = "0x3B4BFF0", VA = "0x3B4BFF0")]
	internal static byte[] GenerateRandom(int keySize)
	{
		return null;
	}

	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x3B4BAC0", Offset = "0x3B4BAC0", VA = "0x3B4BAC0")]
	internal static bool HasAlgorithm(int dwCalg, int dwKeySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x3B3E3F0", Offset = "0x3B3E3F0", VA = "0x3B3E3F0")]
	internal static string DiscardWhiteSpaces(string inputBuffer)
	{
		return null;
	}

	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x3B4C080", Offset = "0x3B4C080", VA = "0x3B4C080")]
	internal static string DiscardWhiteSpaces(string inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x3B4C250", Offset = "0x3B4C250", VA = "0x3B4C250")]
	internal static int ConvertByteArrayToInt(byte[] input)
	{
		return default(int);
	}

	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x3B4C2A0", Offset = "0x3B4C2A0", VA = "0x3B4C2A0")]
	internal static byte[] ConvertIntToByteArray(int dwInput)
	{
		return null;
	}

	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x3B4C3B0", Offset = "0x3B4C3B0", VA = "0x3B4C3B0")]
	internal static void ConvertIntToByteArray(uint dwInput, ref byte[] counter)
	{
	}

	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x3B4B720", Offset = "0x3B4B720", VA = "0x3B4B720")]
	internal static byte[] FixupKeyParity(byte[] key)
	{
		return null;
	}

	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x3B4C410", Offset = "0x3B4C410", VA = "0x3B4C410")]
	internal unsafe static void DWORDFromLittleEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x3B4C470", Offset = "0x3B4C470", VA = "0x3B4C470")]
	internal static void DWORDToLittleEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x3B452F0", Offset = "0x3B452F0", VA = "0x3B452F0")]
	internal unsafe static void DWORDFromBigEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x3B45210", Offset = "0x3B45210", VA = "0x3B45210")]
	internal static void DWORDToBigEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x3B47E20", Offset = "0x3B47E20", VA = "0x3B47E20")]
	internal unsafe static void QuadWordFromBigEndian(ulong* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x3B47C90", Offset = "0x3B47C90", VA = "0x3B47C90")]
	internal static void QuadWordToBigEndian(byte[] block, ulong[] x, int digits)
	{
	}

	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x3B4C550", Offset = "0x3B4C550", VA = "0x3B4C550")]
	internal static byte[] Int(uint i)
	{
		return null;
	}

	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x3B43460", Offset = "0x3B43460", VA = "0x3B43460")]
	internal static byte[] RsaOaepEncrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, RandomNumberGenerator rng, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x3B42B20", Offset = "0x3B42B20", VA = "0x3B42B20")]
	internal static byte[] RsaOaepDecrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x3B4C5C0", Offset = "0x3B4C5C0", VA = "0x3B4C5C0")]
	internal static byte[] RsaPkcs1Padding(RSA rsa, byte[] oid, byte[] hash)
	{
		return null;
	}

	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x3B4C840", Offset = "0x3B4C840", VA = "0x3B4C840")]
	internal static bool CompareBigIntArrays(byte[] lhs, byte[] rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x3B4C940", Offset = "0x3B4C940", VA = "0x3B4C940")]
	internal static HashAlgorithmName OidToHashAlgorithmName(string oid)
	{
		return default(HashAlgorithmName);
	}

	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x3B42CC0", Offset = "0x3B42CC0", VA = "0x3B42CC0")]
	internal static bool DoesRsaKeyOverride(RSA rsaKey, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x3B4CA40", Offset = "0x3B4CA40", VA = "0x3B4CA40")]
	private static bool DoesRsaKeyOverrideSlowPath(Type t, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x3B4CB00", Offset = "0x3B4CB00", VA = "0x3B4CB00")]
	internal static bool _ProduceLegacyHmacValues()
	{
		return default(bool);
	}
}
