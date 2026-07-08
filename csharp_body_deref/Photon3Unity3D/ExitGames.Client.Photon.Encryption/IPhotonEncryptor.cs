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
