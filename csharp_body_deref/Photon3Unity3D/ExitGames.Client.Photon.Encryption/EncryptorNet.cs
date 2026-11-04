// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.Encryption.EncryptorNet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon.Encryption;

[Token(Token = "0x2000059")]
public class EncryptorNet : IPhotonEncryptor
{
	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected Aes encryptorIn;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected Aes encryptorOut;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected HMACSHA256 hmacsha256In;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected HMACSHA256 hmacsha256Out;

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x1D09F20", Offset = "0x1D08520", VA = "0x181D09F20", Slot = "4")]
	public void Init(byte[] encryptionSecret, byte[] hmacSecret, [Optional] byte[] ivBytes, bool chainingModeGCM = false, int mtu = 1200)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x1D09EE0", Offset = "0x1D084E0", VA = "0x181D09EE0", Slot = "5")]
	public void Encrypt2(byte[] data, int len, byte[] header, byte[] output, int outOffset, ref int outSize)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x1D09EA0", Offset = "0x1D084A0", VA = "0x181D09EA0", Slot = "6")]
	public byte[] Decrypt2(byte[] data, int offset, int len, byte[] header, out int outLen)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x1D09E20", Offset = "0x1D08420", VA = "0x181D09E20", Slot = "7")]
	public int CalculateEncryptedSize(int unencryptedSize)
	{
		return default(int);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x1D09E60", Offset = "0x1D08460", VA = "0x181D09E60", Slot = "8")]
	public int CalculateFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EncryptorNet()
	{
	}
}
