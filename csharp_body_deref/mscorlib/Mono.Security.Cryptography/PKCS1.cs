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

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x52EE5A0", Offset = "0x52ED5A0", VA = "0x52EE5A0")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x52EE600", Offset = "0x52ED600", VA = "0x52EE600")]
	private static byte[] xor(byte[] array1, byte[] array2)
	{
		return null;
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x52EE6B0", Offset = "0x52ED6B0", VA = "0x52EE6B0")]
	private static byte[] GetEmptyHash(HashAlgorithm hash)
	{
		return null;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x52EE890", Offset = "0x52ED890", VA = "0x52EE890")]
	public static byte[] I2OSP(int x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x52EE970", Offset = "0x52ED970", VA = "0x52EE970")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x52EE9E0", Offset = "0x52ED9E0", VA = "0x52EE9E0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x52EEA90", Offset = "0x52EDA90", VA = "0x52EEA90")]
	public static byte[] RSAEP(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x52EEAB0", Offset = "0x52EDAB0", VA = "0x52EEAB0")]
	public static byte[] RSADP(RSA rsa, byte[] c)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x52EEAD0", Offset = "0x52EDAD0", VA = "0x52EEAD0")]
	public static byte[] RSASP1(RSA rsa, byte[] m)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x52EEAF0", Offset = "0x52EDAF0", VA = "0x52EEAF0")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x52EEB10", Offset = "0x52EDB10", VA = "0x52EEB10")]
	public static byte[] Encrypt_OAEP(RSA rsa, HashAlgorithm hash, RandomNumberGenerator rng, byte[] M)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x52EF020", Offset = "0x52EE020", VA = "0x52EF020")]
	public static byte[] Decrypt_OAEP(RSA rsa, HashAlgorithm hash, byte[] C)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x52EF390", Offset = "0x52EE390", VA = "0x52EF390")]
	public static byte[] Sign_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x52EF7D0", Offset = "0x52EE7D0", VA = "0x52EF7D0")]
	internal static byte[] Sign_v15(RSA rsa, string hashName, byte[] hashValue)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x52EFE90", Offset = "0x52EEE90", VA = "0x52EFE90")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x52F0190", Offset = "0x52EF190", VA = "0x52F0190")]
	internal static bool Verify_v15(RSA rsa, string hashName, byte[] hashValue, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x52EFF00", Offset = "0x52EEF00", VA = "0x52EFF00")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x52EF490", Offset = "0x52EE490", VA = "0x52EF490")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x52EEE20", Offset = "0x52EDE20", VA = "0x52EEE20")]
	public static byte[] MGF1(HashAlgorithm hash, byte[] mgfSeed, int maskLen)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x52EF940", Offset = "0x52EE940", VA = "0x52EF940")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
