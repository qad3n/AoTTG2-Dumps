// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.PKCS1
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000067")]
internal sealed class PKCS1
{
	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] emptySHA1;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] emptySHA256;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] emptySHA384;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] emptySHA512;

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x1937890", Offset = "0x1935E90", VA = "0x181937890")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x1961C20", Offset = "0x1960220", VA = "0x181961C20")]
	private static byte[] xor(byte[] array1, byte[] array2)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x1960BD0", Offset = "0x195F1D0", VA = "0x181960BD0")]
	private static byte[] GetEmptyHash(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x1960E30", Offset = "0x195F430", VA = "0x181960E30")]
	public static byte[] I2OSP(int x, int size)
	{
		return null;
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x1960DB0", Offset = "0x195F3B0", VA = "0x181960DB0")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x1961200", Offset = "0x195F800", VA = "0x181961200")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x1938760", Offset = "0x1936D60", VA = "0x181938760")]
	public static byte[] RSAEP(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x19612C0", Offset = "0x195F8C0", VA = "0x1819612C0")]
	public static byte[] RSADP(RSA rsa, byte[] c)
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x19612C0", Offset = "0x195F8C0", VA = "0x1819612C0")]
	public static byte[] RSASP1(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x1938760", Offset = "0x1936D60", VA = "0x181938760")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x1960700", Offset = "0x195ED00", VA = "0x181960700")]
	public static byte[] Encrypt_OAEP(RSA rsa, HashAlgorithm hash, RandomNumberGenerator rng, byte[] M)
	{
		return null;
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x195FF20", Offset = "0x195E520", VA = "0x18195FF20")]
	public static byte[] Decrypt_OAEP(RSA rsa, HashAlgorithm hash, byte[] C)
	{
		return null;
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x19614F0", Offset = "0x195FAF0", VA = "0x1819614F0")]
	public static byte[] Sign_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x19612F0", Offset = "0x195F8F0", VA = "0x1819612F0")]
	internal static byte[] Sign_v15(RSA rsa, string hashName, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x1961A00", Offset = "0x1960000", VA = "0x181961A00")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x19618D0", Offset = "0x195FED0", VA = "0x1819618D0")]
	internal static bool Verify_v15(RSA rsa, string hashName, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x1961610", Offset = "0x195FC10", VA = "0x181961610")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x19603C0", Offset = "0x195E9C0", VA = "0x1819603C0")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x1960F10", Offset = "0x195F510", VA = "0x181960F10")]
	public static byte[] MGF1(HashAlgorithm hash, byte[] mgfSeed, int maskLen)
	{
		return null;
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x195F880", Offset = "0x195DE80", VA = "0x18195F880")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
