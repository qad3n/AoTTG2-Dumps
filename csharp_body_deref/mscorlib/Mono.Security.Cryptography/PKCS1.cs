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
	[Address(RVA = "0x4DFE280", Offset = "0x4DFE280", VA = "0x4DFE280")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4DFE2D0", Offset = "0x4DFE2D0", VA = "0x4DFE2D0")]
	private static byte[] xor(byte[] array1, byte[] array2)
	{
		return null;
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4DFE380", Offset = "0x4DFE380", VA = "0x4DFE380")]
	private static byte[] GetEmptyHash(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4DFE560", Offset = "0x4DFE560", VA = "0x4DFE560")]
	public static byte[] I2OSP(int x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4DFE640", Offset = "0x4DFE640", VA = "0x4DFE640")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4DFE6B0", Offset = "0x4DFE6B0", VA = "0x4DFE6B0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4DFE750", Offset = "0x4DFE750", VA = "0x4DFE750")]
	public static byte[] RSAEP(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4DFE770", Offset = "0x4DFE770", VA = "0x4DFE770")]
	public static byte[] RSADP(RSA rsa, byte[] c)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4DFE790", Offset = "0x4DFE790", VA = "0x4DFE790")]
	public static byte[] RSASP1(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4DFE7B0", Offset = "0x4DFE7B0", VA = "0x4DFE7B0")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4DFE7D0", Offset = "0x4DFE7D0", VA = "0x4DFE7D0")]
	public static byte[] Encrypt_OAEP(RSA rsa, HashAlgorithm hash, RandomNumberGenerator rng, byte[] M)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4DFED00", Offset = "0x4DFED00", VA = "0x4DFED00")]
	public static byte[] Decrypt_OAEP(RSA rsa, HashAlgorithm hash, byte[] C)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4DFF060", Offset = "0x4DFF060", VA = "0x4DFF060")]
	public static byte[] Sign_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4DFF480", Offset = "0x4DFF480", VA = "0x4DFF480")]
	internal static byte[] Sign_v15(RSA rsa, string hashName, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4DFFBA0", Offset = "0x4DFFBA0", VA = "0x4DFFBA0")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4DFFE90", Offset = "0x4DFFE90", VA = "0x4DFFE90")]
	internal static bool Verify_v15(RSA rsa, string hashName, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4DFFC10", Offset = "0x4DFFC10", VA = "0x4DFFC10")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4DFF160", Offset = "0x4DFF160", VA = "0x4DFF160")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4DFEAF0", Offset = "0x4DFEAF0", VA = "0x4DFEAF0")]
	public static byte[] MGF1(HashAlgorithm hash, byte[] mgfSeed, int maskLen)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4DFF640", Offset = "0x4DFF640", VA = "0x4DFF640")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
