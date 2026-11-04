// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DeviceLockedEncryption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DeviceLockedEncryption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008BA")]
internal class DeviceLockedEncryption
{
	[Token(Token = "0x4002B55")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string SecretSalt;

	[Token(Token = "0x6005319")]
	[Address(RVA = "0x23362D0", Offset = "0x23348D0", VA = "0x1823362D0")]
	private static byte[] GetDeviceSpecificKey()
	{
		return null;
	}

	[Token(Token = "0x600531A")]
	[Address(RVA = "0x2335E40", Offset = "0x2334440", VA = "0x182335E40")]
	public static string Encrypt(string plainText)
	{
		return null;
	}

	[Token(Token = "0x600531B")]
	[Address(RVA = "0x2335990", Offset = "0x2333F90", VA = "0x182335990")]
	public static string Decrypt(string cipherText)
	{
		return null;
	}

	[Token(Token = "0x600531C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DeviceLockedEncryption()
	{
	}
}
