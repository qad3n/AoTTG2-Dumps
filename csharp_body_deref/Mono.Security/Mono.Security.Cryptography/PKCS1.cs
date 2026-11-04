using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004D")]
public sealed class PKCS1
{
	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] emptySHA1;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] emptySHA256;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] emptySHA384;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] emptySHA512;

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x1937890", Offset = "0x1935E90", VA = "0x181937890")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x1938620", Offset = "0x1936C20", VA = "0x181938620")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x19386A0", Offset = "0x1936CA0", VA = "0x1819386A0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x1938760", Offset = "0x1936D60", VA = "0x181938760")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1938790", Offset = "0x1936D90", VA = "0x181938790")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x1937F10", Offset = "0x1936510", VA = "0x181937F10")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x1938250", Offset = "0x1936850", VA = "0x181938250")]
	internal static string HashNameFromOid(string oid, bool throwOnError = true)
	{
		return null;
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x1937EB0", Offset = "0x19364B0", VA = "0x181937EB0")]
	internal static HashAlgorithm CreateFromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x1937910", Offset = "0x1935F10", VA = "0x181937910")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
