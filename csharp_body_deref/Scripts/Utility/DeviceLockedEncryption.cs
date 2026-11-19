// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DeviceLockedEncryption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DeviceLockedEncryption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000924")]
internal class DeviceLockedEncryption
{
	[Token(Token = "0x4002E0C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string SecretSalt;

	[Token(Token = "0x600566D")]
	[Address(RVA = "0x5CEB530", Offset = "0x5CEA530", VA = "0x5CEB530")]
	private static byte[] GetDeviceSpecificKey()
	{
		return null;
	}

	[Token(Token = "0x600566E")]
	[Address(RVA = "0x5CEB6F0", Offset = "0x5CEA6F0", VA = "0x5CEB6F0")]
	public static string Encrypt(string plainText)
	{
		return null;
	}

	[Token(Token = "0x600566F")]
	[Address(RVA = "0x5CEBD80", Offset = "0x5CEAD80", VA = "0x5CEBD80")]
	public static string Decrypt(string cipherText)
	{
		return null;
	}

	[Token(Token = "0x6005670")]
	[Address(RVA = "0x5CEC420", Offset = "0x5CEB420", VA = "0x5CEC420")]
	public DeviceLockedEncryption()
	{
	}
}
