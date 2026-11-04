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

[Token(Token = "0x2000060")]
internal sealed class CryptoConvert
{
	[Token(Token = "0x600012F")]
	[Address(RVA = "0x1944740", Offset = "0x1942D40", VA = "0x181944740")]
	private static int ToInt32LE(byte[] bytes, int offset)
	{
		return default(int);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x1944740", Offset = "0x1942D40", VA = "0x181944740")]
	private static uint ToUInt32LE(byte[] bytes, int offset)
	{
		return default(uint);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x1942D60", Offset = "0x1941360", VA = "0x181942D60")]
	private static byte[] GetBytesLE(int val)
	{
		return null;
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x19447C0", Offset = "0x1942DC0", VA = "0x1819447C0")]
	private static byte[] Trim(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x19425B0", Offset = "0x1940BB0", VA = "0x1819425B0")]
	public static RSA FromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x1942DF0", Offset = "0x19413F0", VA = "0x181942DF0")]
	private static RSAParameters GetParametersFromCapiPrivateKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x1941FF0", Offset = "0x19405F0", VA = "0x181941FF0")]
	public static DSA FromCapiPrivateKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x1943D80", Offset = "0x1942380", VA = "0x181943D80")]
	public static byte[] ToCapiPrivateKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x1943A30", Offset = "0x1942030", VA = "0x181943A30")]
	public static byte[] ToCapiPrivateKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x1942C40", Offset = "0x1941240", VA = "0x181942C40")]
	public static RSA FromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x1943560", Offset = "0x1941B60", VA = "0x181943560")]
	private static RSAParameters GetParametersFromCapiPublicKeyBlob(byte[] blob, int offset)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x1942660", Offset = "0x1940C60", VA = "0x181942660")]
	public static DSA FromCapiPublicKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x1944510", Offset = "0x1942B10", VA = "0x181944510")]
	public static byte[] ToCapiPublicKeyBlob(RSA rsa)
	{
		return null;
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x19441B0", Offset = "0x19427B0", VA = "0x1819441B0")]
	public static byte[] ToCapiPublicKeyBlob(DSA dsa)
	{
		return null;
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x1941DE0", Offset = "0x19403E0", VA = "0x181941DE0")]
	public static RSA FromCapiKeyBlob(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x1941DF0", Offset = "0x19403F0", VA = "0x181941DF0")]
	public static RSA FromCapiKeyBlob(byte[] blob, int offset)
	{
		return null;
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x1941B80", Offset = "0x1940180", VA = "0x181941B80")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob)
	{
		return null;
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x1941CB0", Offset = "0x19402B0", VA = "0x181941CB0")]
	public static DSA FromCapiKeyBlobDSA(byte[] blob, int offset)
	{
		return null;
	}
}
