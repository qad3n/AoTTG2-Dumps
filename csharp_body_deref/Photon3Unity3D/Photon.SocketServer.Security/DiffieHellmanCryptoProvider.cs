// ==================== AoTTG2 cross-reference ====================
// Type: Photon.SocketServer.Security.DiffieHellmanCryptoProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5691520", Offset = "0x5690520", VA = "0x5691520", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public byte[] PublicKey
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x5691530", Offset = "0x5690530", VA = "0x5691530", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x5691110", Offset = "0x5690110", VA = "0x5691110")]
	public DiffieHellmanCryptoProvider()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x5691430", Offset = "0x5690430", VA = "0x5691430")]
	public DiffieHellmanCryptoProvider(byte[] cryptoKey)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x5691620", Offset = "0x5690620", VA = "0x5691620", Slot = "6")]
	public void DeriveSharedKey(byte[] otherPartyPublicKey)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x5691940", Offset = "0x5690940", VA = "0x5691940")]
	private byte[] PhotonBigIntArrayToMsBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x5691590", Offset = "0x5690590", VA = "0x5691590")]
	private byte[] MsBigIntArrayToPhotonBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x5691A60", Offset = "0x5690A60", VA = "0x5691A60", Slot = "7")]
	public byte[] Encrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x5691A80", Offset = "0x5690A80", VA = "0x5691A80", Slot = "8")]
	public byte[] Encrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x5691C70", Offset = "0x5690C70", VA = "0x5691C70", Slot = "9")]
	public byte[] Decrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x5691C90", Offset = "0x5690C90", VA = "0x5691C90", Slot = "10")]
	public byte[] Decrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x5691E80", Offset = "0x5690E80", VA = "0x5691E80", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x5691EF0", Offset = "0x5690EF0", VA = "0x5691EF0")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x5691370", Offset = "0x5690370", VA = "0x5691370")]
	private BigInteger CalculatePublicKey()
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x56919D0", Offset = "0x56909D0", VA = "0x56919D0")]
	private BigInteger CalculateSharedKey(BigInteger otherPartyPublicKey)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x56911D0", Offset = "0x56901D0", VA = "0x56911D0")]
	private BigInteger GenerateRandomSecret(int secretLength)
	{
		return default(BigInteger);
	}
}
