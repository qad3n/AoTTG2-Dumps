// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.CryptoConvert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000042")]
internal sealed class CryptoConvert
{
	[Token(Token = "0x6000117")]
	[Address(RVA = "0x3ADDA50", Offset = "0x3ADDA50", VA = "0x3ADDA50")]
	private static int ToInt32LE(byte[] bytes, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x3ADDAB0", Offset = "0x3ADDAB0", VA = "0x3ADDAB0")]
	private static uint ToUInt32LE(byte[] bytes, int offset)
	{
		return default(uint);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x3ADDB10", Offset = "0x3ADDB10", VA = "0x3ADDB10")]
	private static byte[] GetBytesLE(int val)
	{
		return null;
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x3ADDB80", Offset = "0x3ADDB80", VA = "0x3ADDB80")]
	private static byte[] Trim(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x3ADDC10", Offset = "0x3ADDC10", VA = "0x3ADDC10")]
	public static RSA FromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x3ADDCE0", Offset = "0x3ADDCE0", VA = "0x3ADDCE0")]
	private static RSAParameters GetParametersFromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x3ADE5A0", Offset = "0x3ADE5A0", VA = "0x3ADE5A0")]
	public static DSA FromCapiPrivateKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3ADECF0", Offset = "0x3ADECF0", VA = "0x3ADECF0")]
	public static byte[] ToCapiPrivateKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x3ADF0A0", Offset = "0x3ADF0A0", VA = "0x3ADF0A0")]
	public static byte[] ToCapiPrivateKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3ADF380", Offset = "0x3ADF380", VA = "0x3ADF380")]
	public static RSA FromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3ADF520", Offset = "0x3ADF520", VA = "0x3ADF520")]
	private static RSAParameters GetParametersFromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x3ADFAC0", Offset = "0x3ADFAC0", VA = "0x3ADFAC0")]
	public static DSA FromCapiPublicKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x3AE0230", Offset = "0x3AE0230", VA = "0x3AE0230")]
	public static byte[] ToCapiPublicKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3AE0430", Offset = "0x3AE0430", VA = "0x3AE0430")]
	public static byte[] ToCapiPublicKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3AE0710", Offset = "0x3AE0710", VA = "0x3AE0710")]
	public static RSA FromCapiKeyBlob(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x3AE0720", Offset = "0x3AE0720", VA = "0x3AE0720")]
	public static RSA FromCapiKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x3AE0900", Offset = "0x3AE0900", VA = "0x3AE0900")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3AE0910", Offset = "0x3AE0910", VA = "0x3AE0910")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}
}
