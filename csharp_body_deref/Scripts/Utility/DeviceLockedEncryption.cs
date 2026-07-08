using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20006E7")]
internal class DeviceLockedEncryption
{
	[Token(Token = "0x4002139")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string SecretSalt;

	[Token(Token = "0x6004455")]
	[Address(RVA = "0x405C2C0", Offset = "0x405C2C0", VA = "0x405C2C0")]
	private static byte[] GetDeviceSpecificKey()
	{
		return null;
	}

	[Token(Token = "0x6004456")]
	[Address(RVA = "0x405C4D0", Offset = "0x405C4D0", VA = "0x405C4D0")]
	public static string Encrypt(string plainText)
	{
		return null;
	}

	[Token(Token = "0x6004457")]
	[Address(RVA = "0x405CC40", Offset = "0x405CC40", VA = "0x405CC40")]
	public static string Decrypt(string cipherText)
	{
		return null;
	}

	[Token(Token = "0x6004458")]
	[Address(RVA = "0x405D420", Offset = "0x405D420", VA = "0x405D420")]
	public DeviceLockedEncryption()
	{
	}
}
