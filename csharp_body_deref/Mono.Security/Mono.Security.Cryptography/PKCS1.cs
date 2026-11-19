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
	[Address(RVA = "0x52C9D00", Offset = "0x52C8D00", VA = "0x52C9D00")]
	private static bool Compare(byte[] array1, byte[] array2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x52C9D60", Offset = "0x52C8D60", VA = "0x52C9D60")]
	public static byte[] I2OSP(byte[] x, int size)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x52C9DD0", Offset = "0x52C8DD0", VA = "0x52C9DD0")]
	public static byte[] OS2IP(byte[] x)
	{
		return null;
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x52C9E80", Offset = "0x52C8E80", VA = "0x52C9E80")]
	public static byte[] RSAVP1(RSA rsa, byte[] s)
	{
		return null;
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x52C9EA0", Offset = "0x52C8EA0", VA = "0x52C9EA0")]
	public static bool Verify_v15(RSA rsa, HashAlgorithm hash, byte[] hashValue, byte[] signature, bool tryNonStandardEncoding)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x52CA130", Offset = "0x52C9130", VA = "0x52CA130")]
	public static byte[] Encode_v15(HashAlgorithm hash, byte[] hashValue, int emLength)
	{
		return null;
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x52CA470", Offset = "0x52C9470", VA = "0x52CA470")]
	internal static string HashNameFromOid(string oid, bool throwOnError = true)
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x52CA850", Offset = "0x52C9850", VA = "0x52CA850")]
	internal static HashAlgorithm CreateFromOid(string oid)
	{
		return null;
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x52CA8A0", Offset = "0x52C98A0", VA = "0x52CA8A0")]
	internal static HashAlgorithm CreateFromName(string name)
	{
		return null;
	}
}
