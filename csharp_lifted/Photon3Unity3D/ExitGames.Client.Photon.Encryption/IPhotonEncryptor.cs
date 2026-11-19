// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Encryption.IPhotonEncryptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon.Encryption;

[Token(Token = "0x2000058")]
public interface IPhotonEncryptor
{
	[Token(Token = "0x60003DA")]
	void Init(byte[] encryptionSecret, byte[] hmacSecret, [Optional] byte[] ivBytes, bool chainingModeGCM = false, int mtu = 1200);

	[Token(Token = "0x60003DB")]
	void Encrypt2(byte[] data, int len, byte[] header, byte[] output, int outOffset, ref int outSize);

	[Token(Token = "0x60003DC")]
	byte[] Decrypt2(byte[] data, int offset, int len, byte[] header, out int outLen);

	[Token(Token = "0x60003DD")]
	int CalculateEncryptedSize(int unencryptedSize);

	[Token(Token = "0x60003DE")]
	int CalculateFragmentLength();
}
