using System;
using System.Numerics;
using System.Security.Cryptography;
using Il2CppDummyDll;

namespace Photon.SocketServer.Security;

[Token(Token = "0x200005A")]
internal class DiffieHellmanCryptoProvider : ICryptoProvider, IDisposable
{
	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly BigInteger primeRoot;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x10")]
	private readonly BigInteger prime;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x20")]
	private readonly BigInteger secret;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x30")]
	private readonly BigInteger publicKey;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x40")]
	private Rijndael crypto;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x48")]
	private byte[] sharedKey;

	[Token(Token = "0x170000CA")]
	public bool IsInitialized
	{
		[Token(Token = "0x60003E7")]
		[Address(RVA = "0x3BAE4C0", Offset = "0x3BAE4C0", VA = "0x3BAE4C0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public byte[] PublicKey
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x3BAE4D0", Offset = "0x3BAE4D0", VA = "0x3BAE4D0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x3BAE0C0", Offset = "0x3BAE0C0", VA = "0x3BAE0C0")]
	public DiffieHellmanCryptoProvider()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x3BAE3D0", Offset = "0x3BAE3D0", VA = "0x3BAE3D0")]
	public DiffieHellmanCryptoProvider(byte[] cryptoKey)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x3BAE5C0", Offset = "0x3BAE5C0", VA = "0x3BAE5C0", Slot = "6")]
	public void DeriveSharedKey(byte[] otherPartyPublicKey)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3BAE940", Offset = "0x3BAE940", VA = "0x3BAE940")]
	private byte[] PhotonBigIntArrayToMsBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3BAE530", Offset = "0x3BAE530", VA = "0x3BAE530")]
	private byte[] MsBigIntArrayToPhotonBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3BAEA70", Offset = "0x3BAEA70", VA = "0x3BAEA70", Slot = "7")]
	public byte[] Encrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3BAEA90", Offset = "0x3BAEA90", VA = "0x3BAEA90", Slot = "8")]
	public byte[] Encrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3BAECD0", Offset = "0x3BAECD0", VA = "0x3BAECD0", Slot = "9")]
	public byte[] Decrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3BAECF0", Offset = "0x3BAECF0", VA = "0x3BAECF0", Slot = "10")]
	public byte[] Decrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3BAEF30", Offset = "0x3BAEF30", VA = "0x3BAEF30", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3BAEFA0", Offset = "0x3BAEFA0", VA = "0x3BAEFA0")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3BAE310", Offset = "0x3BAE310", VA = "0x3BAE310")]
	private BigInteger CalculatePublicKey()
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3BAE9E0", Offset = "0x3BAE9E0", VA = "0x3BAE9E0")]
	private BigInteger CalculateSharedKey(BigInteger otherPartyPublicKey)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3BAE180", Offset = "0x3BAE180", VA = "0x3BAE180")]
	private BigInteger GenerateRandomSecret(int secretLength)
	{
		return default(BigInteger);
	}
}
