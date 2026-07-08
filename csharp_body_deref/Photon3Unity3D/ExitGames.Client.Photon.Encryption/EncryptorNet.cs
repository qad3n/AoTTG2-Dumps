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
	[Address(RVA = "0x3BADF70", Offset = "0x3BADF70", VA = "0x3BADF70", Slot = "4")]
	public void Init(byte[] encryptionSecret, byte[] hmacSecret, [Optional] byte[] ivBytes, bool chainingModeGCM = false, int mtu = 1200)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x3BADFB0", Offset = "0x3BADFB0", VA = "0x3BADFB0", Slot = "5")]
	public void Encrypt2(byte[] data, int len, byte[] header, byte[] output, int outOffset, ref int outSize)
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x3BADFF0", Offset = "0x3BADFF0", VA = "0x3BADFF0", Slot = "6")]
	public byte[] Decrypt2(byte[] data, int offset, int len, byte[] header, out int outLen)
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x3BAE030", Offset = "0x3BAE030", VA = "0x3BAE030", Slot = "7")]
	public int CalculateEncryptedSize(int unencryptedSize)
	{
		return default(int);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x3BAE070", Offset = "0x3BAE070", VA = "0x3BAE070", Slot = "8")]
	public int CalculateFragmentLength()
	{
		return default(int);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x3BAE0B0", Offset = "0x3BAE0B0", VA = "0x3BAE0B0")]
	public EncryptorNet()
	{
	}
}
