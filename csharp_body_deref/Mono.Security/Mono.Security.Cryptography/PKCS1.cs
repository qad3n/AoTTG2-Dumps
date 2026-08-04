using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200003A")]
public sealed class PKCS1
{
	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] emptySHA1;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x8")]
	private static byte[] emptySHA256;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x10")]
	private static byte[] emptySHA384;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x18")]
	private static byte[] emptySHA512;

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3ABE100", Offset = "0x3ABE100", VA = "0x3ABE100")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3ABE150", Offset = "0x3ABE150", VA = "0x3ABE150")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3ABE1C0", Offset = "0x3ABE1C0", VA = "0x3ABE1C0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x3ABE260", Offset = "0x3ABE260", VA = "0x3ABE260")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3ABE280", Offset = "0x3ABE280", VA = "0x3ABE280")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x3ABE500", Offset = "0x3ABE500", VA = "0x3ABE500")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x3ABE830", Offset = "0x3ABE830", VA = "0x3ABE830")]
	internal static string HashNameFromOid(string oid, bool throwOnError = true)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x3ABEC20", Offset = "0x3ABEC20", VA = "0x3ABEC20")]
	internal static HashAlgorithm CreateFromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x3ABEC70", Offset = "0x3ABEC70", VA = "0x3ABEC70")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
