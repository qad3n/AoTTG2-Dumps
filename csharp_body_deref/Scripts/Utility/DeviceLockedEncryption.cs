// ==================== AoTTG2 cross-reference ====================
// Type: Utility.DeviceLockedEncryption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/DeviceLockedEncryption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000735")]
internal class DeviceLockedEncryption
{
	[Token(Token = "0x4002296")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string SecretSalt;

	[Token(Token = "0x60046BD")]
	[Address(RVA = "0x438F2D0", Offset = "0x438F2D0", VA = "0x438F2D0")]
	private static byte[] GetDeviceSpecificKey()
	{
		return null;
	}

	[Token(Token = "0x60046BE")]
	[Address(RVA = "0x438F4E0", Offset = "0x438F4E0", VA = "0x438F4E0")]
	public static string Encrypt(string plainText)
	{
		return null;
	}

	[Token(Token = "0x60046BF")]
	[Address(RVA = "0x438FC50", Offset = "0x438FC50", VA = "0x438FC50")]
	public static string Decrypt(string cipherText)
	{
		return null;
	}

	[Token(Token = "0x60046C0")]
	[Address(RVA = "0x4390430", Offset = "0x4390430", VA = "0x4390430")]
	public DeviceLockedEncryption()
	{
	}
}
