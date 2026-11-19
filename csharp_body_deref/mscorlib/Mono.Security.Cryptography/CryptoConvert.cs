// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.CryptoConvert
// Update status: CHANGED in this game update
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
	[Token(Token = "0x6000119")]
	[Address(RVA = "0x52E8A40", Offset = "0x52E7A40", VA = "0x52E8A40")]
	private static int ToInt32LE(byte[] bytes, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x52E8AA0", Offset = "0x52E7AA0", VA = "0x52E8AA0")]
	private static uint ToUInt32LE(byte[] bytes, int offset)
	{
		return default(uint);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x52E8B00", Offset = "0x52E7B00", VA = "0x52E8B00")]
	private static byte[] GetBytesLE(int val)
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x52E8B70", Offset = "0x52E7B70", VA = "0x52E8B70")]
	private static byte[] Trim(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x52E8C00", Offset = "0x52E7C00", VA = "0x52E8C00")]
	public static RSA FromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x52E8C80", Offset = "0x52E7C80", VA = "0x52E8C80")]
	private static RSAParameters GetParametersFromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x52E92D0", Offset = "0x52E82D0", VA = "0x52E92D0")]
	public static DSA FromCapiPrivateKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x52E9870", Offset = "0x52E8870", VA = "0x52E9870")]
	public static byte[] ToCapiPrivateKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x52E9C50", Offset = "0x52E8C50", VA = "0x52E9C50")]
	public static byte[] ToCapiPrivateKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x52E9F40", Offset = "0x52E8F40", VA = "0x52E9F40")]
	public static RSA FromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x52EA080", Offset = "0x52E9080", VA = "0x52EA080")]
	private static RSAParameters GetParametersFromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x52EA550", Offset = "0x52E9550", VA = "0x52EA550")]
	public static DSA FromCapiPublicKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x52EAB00", Offset = "0x52E9B00", VA = "0x52EAB00")]
	public static byte[] ToCapiPublicKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x52EAD10", Offset = "0x52E9D10", VA = "0x52EAD10")]
	public static byte[] ToCapiPublicKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x52EB020", Offset = "0x52EA020", VA = "0x52EB020")]
	public static RSA FromCapiKeyBlob(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x52EB030", Offset = "0x52EA030", VA = "0x52EB030")]
	public static RSA FromCapiKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x52EB1C0", Offset = "0x52EA1C0", VA = "0x52EB1C0")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x52EB1D0", Offset = "0x52EA1D0", VA = "0x52EB1D0")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}
}
