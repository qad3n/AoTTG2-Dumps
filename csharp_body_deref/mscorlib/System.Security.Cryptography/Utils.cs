// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Utils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000341")]
internal static class Utils
{
	[Token(Token = "0x4000DE4")]
	internal const int DefaultRsaProviderType = 1;

	[Token(Token = "0x4000DE5")]
	[FieldOffset(Offset = "0x0")]
	private static RNGCryptoServiceProvider _rng;

	[Token(Token = "0x170002E9")]
	internal static RNGCryptoServiceProvider StaticRandomNumberGenerator
	{
		[Token(Token = "0x6001B37")]
		[Address(RVA = "0x19D1B60", Offset = "0x19D0160", VA = "0x1819D1B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x19D1320", Offset = "0x19CF920", VA = "0x1819D1320")]
	internal static byte[] GenerateRandom(int keySize)
	{
		return null;
	}

	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
	internal static bool HasAlgorithm(int dwCalg, int dwKeySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x19D0CF0", Offset = "0x19CF2F0", VA = "0x1819D0CF0")]
	internal static string DiscardWhiteSpaces(string inputBuffer)
	{
		return null;
	}

	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x19D0E80", Offset = "0x19CF480", VA = "0x1819D0E80")]
	internal static string DiscardWhiteSpaces(string inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x19D08A0", Offset = "0x19CEEA0", VA = "0x1819D08A0")]
	internal static int ConvertByteArrayToInt(byte[] input)
	{
		return default(int);
	}

	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x19D08F0", Offset = "0x19CEEF0", VA = "0x1819D08F0")]
	internal static byte[] ConvertIntToByteArray(int dwInput)
	{
		return null;
	}

	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x19D0A00", Offset = "0x19CF000", VA = "0x1819D0A00")]
	internal static void ConvertIntToByteArray(uint dwInput, ref byte[] counter)
	{
	}

	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x19D1250", Offset = "0x19CF850", VA = "0x1819D1250")]
	internal static byte[] FixupKeyParity(byte[] key)
	{
		return null;
	}

	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x19D0AD0", Offset = "0x19CF0D0", VA = "0x1819D0AD0")]
	internal unsafe static void DWORDFromLittleEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x19D0C10", Offset = "0x19CF210", VA = "0x1819D0C10")]
	internal static void DWORDToLittleEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x19D0A70", Offset = "0x19CF070", VA = "0x1819D0A70")]
	internal unsafe static void DWORDFromBigEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x19D0B30", Offset = "0x19CF130", VA = "0x1819D0B30")]
	internal static void DWORDToBigEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x19D1550", Offset = "0x19CFB50", VA = "0x1819D1550")]
	internal unsafe static void QuadWordFromBigEndian(ulong* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x19D15E0", Offset = "0x19CFBE0", VA = "0x1819D15E0")]
	internal static void QuadWordToBigEndian(byte[] block, ulong[] x, int digits)
	{
	}

	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x19D13B0", Offset = "0x19CF9B0", VA = "0x1819D13B0")]
	internal static byte[] Int(uint i)
	{
		return null;
	}

	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x19D1840", Offset = "0x19CFE40", VA = "0x1819D1840")]
	internal static byte[] RsaOaepEncrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, RandomNumberGenerator rng, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x19D1770", Offset = "0x19CFD70", VA = "0x1819D1770")]
	internal static byte[] RsaOaepDecrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x19D18C0", Offset = "0x19CFEC0", VA = "0x1819D18C0")]
	internal static byte[] RsaPkcs1Padding(RSA rsa, byte[] oid, byte[] hash)
	{
		return null;
	}

	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x19D07A0", Offset = "0x19CEDA0", VA = "0x1819D07A0")]
	internal static bool CompareBigIntArrays(byte[] lhs, byte[] rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x19D1440", Offset = "0x19CFA40", VA = "0x1819D1440")]
	internal static HashAlgorithmName OidToHashAlgorithmName(string oid)
	{
		return default(HashAlgorithmName);
	}

	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x19D10C0", Offset = "0x19CF6C0", VA = "0x1819D10C0")]
	internal static bool DoesRsaKeyOverride(RSA rsaKey, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x19D0FF0", Offset = "0x19CF5F0", VA = "0x1819D0FF0")]
	private static bool DoesRsaKeyOverrideSlowPath(Type t, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B4E")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
	internal static bool _ProduceLegacyHmacValues()
	{
		return default(bool);
	}
}
