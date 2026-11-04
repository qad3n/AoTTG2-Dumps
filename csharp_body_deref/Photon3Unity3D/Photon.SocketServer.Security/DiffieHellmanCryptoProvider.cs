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
		[Address(RVA = "0x1D09D20", Offset = "0x1D08320", VA = "0x181D09D20", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public byte[] PublicKey
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x1D09D30", Offset = "0x1D08330", VA = "0x181D09D30", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x1D09A40", Offset = "0x1D08040", VA = "0x181D09A40")]
	public DiffieHellmanCryptoProvider()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x1D09940", Offset = "0x1D07F40", VA = "0x181D09940")]
	public DiffieHellmanCryptoProvider(byte[] cryptoKey)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x1D09010", Offset = "0x1D07610", VA = "0x181D09010", Slot = "6")]
	public void DeriveSharedKey(byte[] otherPartyPublicKey)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x1D09800", Offset = "0x1D07E00", VA = "0x181D09800")]
	private byte[] PhotonBigIntArrayToMsBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x1D09760", Offset = "0x1D07D60", VA = "0x181D09760")]
	private byte[] MsBigIntArrayToPhotonBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x1D09570", Offset = "0x1D07B70", VA = "0x181D09570", Slot = "7")]
	public byte[] Encrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x1D09440", Offset = "0x1D07A40", VA = "0x181D09440", Slot = "8")]
	public byte[] Encrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x1D08EB0", Offset = "0x1D074B0", VA = "0x181D08EB0", Slot = "9")]
	public byte[] Decrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x1D08EE0", Offset = "0x1D074E0", VA = "0x181D08EE0", Slot = "10")]
	public byte[] Decrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x1D093F0", Offset = "0x1D079F0", VA = "0x181D093F0", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x7C0280", Offset = "0x7BE880", VA = "0x1807C0280")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x1D08CE0", Offset = "0x1D072E0", VA = "0x181D08CE0")]
	private BigInteger CalculatePublicKey()
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x1D08DE0", Offset = "0x1D073E0", VA = "0x181D08DE0")]
	private BigInteger CalculateSharedKey(BigInteger otherPartyPublicKey)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x1D095A0", Offset = "0x1D07BA0", VA = "0x181D095A0")]
	private BigInteger GenerateRandomSecret(int secretLength)
	{
		return default(BigInteger);
	}
}
