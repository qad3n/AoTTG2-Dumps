// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.Utils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x200031A")]
internal static class Utils
{
	[Token(Token = "0x4000D44")]
	internal const int DefaultRsaProviderType = 1;

	[Token(Token = "0x4000D45")]
	[FieldOffset(Offset = "0x0")]
	private static RNGCryptoServiceProvider _rng;

	[Token(Token = "0x170002E8")]
	internal static RNGCryptoServiceProvider StaticRandomNumberGenerator
	{
		[Token(Token = "0x6001B14")]
		[Address(RVA = "0x5355640", Offset = "0x5354640", VA = "0x5355640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x53557E0", Offset = "0x53547E0", VA = "0x53557E0")]
	internal static byte[] GenerateRandom(int keySize)
	{
		return null;
	}

	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x53552B0", Offset = "0x53542B0", VA = "0x53552B0")]
	internal static bool HasAlgorithm(int dwCalg, int dwKeySize)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x5347DD0", Offset = "0x5346DD0", VA = "0x5347DD0")]
	internal static string DiscardWhiteSpaces(string inputBuffer)
	{
		return null;
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x5355870", Offset = "0x5354870", VA = "0x5355870")]
	internal static string DiscardWhiteSpaces(string inputBuffer, int inputOffset, int inputCount)
	{
		return null;
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x5355A30", Offset = "0x5354A30", VA = "0x5355A30")]
	internal static int ConvertByteArrayToInt(byte[] input)
	{
		return default(int);
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x5355AB0", Offset = "0x5354AB0", VA = "0x5355AB0")]
	internal static byte[] ConvertIntToByteArray(int dwInput)
	{
		return null;
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x5355BC0", Offset = "0x5354BC0", VA = "0x5355BC0")]
	internal static void ConvertIntToByteArray(uint dwInput, ref byte[] counter)
	{
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x5354EE0", Offset = "0x5353EE0", VA = "0x5354EE0")]
	internal static byte[] FixupKeyParity(byte[] key)
	{
		return null;
	}

	[Token(Token = "0x6001B1D")]
	[Address(RVA = "0x5355C30", Offset = "0x5354C30", VA = "0x5355C30")]
	internal unsafe static void DWORDFromLittleEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B1E")]
	[Address(RVA = "0x5355C90", Offset = "0x5354C90", VA = "0x5355C90")]
	internal static void DWORDToLittleEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x534EC80", Offset = "0x534DC80", VA = "0x534EC80")]
	internal unsafe static void DWORDFromBigEndian(uint* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x534EBA0", Offset = "0x534DBA0", VA = "0x534EBA0")]
	internal static void DWORDToBigEndian(byte[] block, uint[] x, int digits)
	{
	}

	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x53516F0", Offset = "0x53506F0", VA = "0x53516F0")]
	internal unsafe static void QuadWordFromBigEndian(ulong* x, int digits, byte* block)
	{
	}

	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x5351560", Offset = "0x5350560", VA = "0x5351560")]
	internal static void QuadWordToBigEndian(byte[] block, ulong[] x, int digits)
	{
	}

	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x5355D70", Offset = "0x5354D70", VA = "0x5355D70")]
	internal static byte[] Int(uint i)
	{
		return null;
	}

	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x534CC50", Offset = "0x534BC50", VA = "0x534CC50")]
	internal static byte[] RsaOaepEncrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, RandomNumberGenerator rng, byte[] data)
	{
		return null;
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x534C310", Offset = "0x534B310", VA = "0x534C310")]
	internal static byte[] RsaOaepDecrypt(RSA rsa, HashAlgorithm hash, PKCS1MaskGenerationMethod mgf, byte[] encryptedData)
	{
		return null;
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x5355DE0", Offset = "0x5354DE0", VA = "0x5355DE0")]
	internal static byte[] RsaPkcs1Padding(RSA rsa, byte[] oid, byte[] hash)
	{
		return null;
	}

	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x5356050", Offset = "0x5355050", VA = "0x5356050")]
	internal static bool CompareBigIntArrays(byte[] lhs, byte[] rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x5356140", Offset = "0x5355140", VA = "0x5356140")]
	internal static HashAlgorithmName OidToHashAlgorithmName(string oid)
	{
		return default(HashAlgorithmName);
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x534C4B0", Offset = "0x534B4B0", VA = "0x534C4B0")]
	internal static bool DoesRsaKeyOverride(RSA rsaKey, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x5356240", Offset = "0x5355240", VA = "0x5356240")]
	private static bool DoesRsaKeyOverrideSlowPath(Type t, string methodName, Type[] parameterTypes)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x5356300", Offset = "0x5355300", VA = "0x5356300")]
	internal static bool _ProduceLegacyHmacValues()
	{
		return default(bool);
	}
}
