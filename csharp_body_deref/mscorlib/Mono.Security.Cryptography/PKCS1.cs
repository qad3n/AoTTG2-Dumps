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

[Token(Token = "0x2000049")]
internal sealed class PKCS1
{
	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] emptySHA1;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] emptySHA256;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] emptySHA384;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] emptySHA512;

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x3AE3DA0", Offset = "0x3AE3DA0", VA = "0x3AE3DA0")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x3AE3DF0", Offset = "0x3AE3DF0", VA = "0x3AE3DF0")]
	private static byte[] xor(byte[] array1, byte[] array2)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x3AE3EA0", Offset = "0x3AE3EA0", VA = "0x3AE3EA0")]
	private static byte[] GetEmptyHash(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x3AE4080", Offset = "0x3AE4080", VA = "0x3AE4080")]
	public static byte[] I2OSP(int x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x3AE4160", Offset = "0x3AE4160", VA = "0x3AE4160")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x3AE41D0", Offset = "0x3AE41D0", VA = "0x3AE41D0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3AE4270", Offset = "0x3AE4270", VA = "0x3AE4270")]
	public static byte[] RSAEP(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3AE4290", Offset = "0x3AE4290", VA = "0x3AE4290")]
	public static byte[] RSADP(RSA rsa, byte[] c)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3AE42B0", Offset = "0x3AE42B0", VA = "0x3AE42B0")]
	public static byte[] RSASP1(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3AE42D0", Offset = "0x3AE42D0", VA = "0x3AE42D0")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3AE42F0", Offset = "0x3AE42F0", VA = "0x3AE42F0")]
	public static byte[] Encrypt_OAEP(RSA rsa, HashAlgorithm hash, RandomNumberGenerator rng, byte[] M)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3AE4820", Offset = "0x3AE4820", VA = "0x3AE4820")]
	public static byte[] Decrypt_OAEP(RSA rsa, HashAlgorithm hash, byte[] C)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3AE4B80", Offset = "0x3AE4B80", VA = "0x3AE4B80")]
	public static byte[] Sign_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3AE4FA0", Offset = "0x3AE4FA0", VA = "0x3AE4FA0")]
	internal static byte[] Sign_v15(RSA rsa, string hashName, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3AE56C0", Offset = "0x3AE56C0", VA = "0x3AE56C0")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3AE59B0", Offset = "0x3AE59B0", VA = "0x3AE59B0")]
	internal static bool Verify_v15(RSA rsa, string hashName, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3AE5730", Offset = "0x3AE5730", VA = "0x3AE5730")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3AE4C80", Offset = "0x3AE4C80", VA = "0x3AE4C80")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3AE4610", Offset = "0x3AE4610", VA = "0x3AE4610")]
	public static byte[] MGF1(HashAlgorithm hash, byte[] mgfSeed, int maskLen)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3AE5160", Offset = "0x3AE5160", VA = "0x3AE5160")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
