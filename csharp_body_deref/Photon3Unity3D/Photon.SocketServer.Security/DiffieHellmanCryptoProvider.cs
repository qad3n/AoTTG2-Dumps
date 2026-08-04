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
		[Address(RVA = "0x3EA3E10", Offset = "0x3EA3E10", VA = "0x3EA3E10", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	public byte[] PublicKey
	{
		[Token(Token = "0x60003E8")]
		[Address(RVA = "0x3EA3E20", Offset = "0x3EA3E20", VA = "0x3EA3E20", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x3EA3A10", Offset = "0x3EA3A10", VA = "0x3EA3A10")]
	public DiffieHellmanCryptoProvider()
	{
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x3EA3D20", Offset = "0x3EA3D20", VA = "0x3EA3D20")]
	public DiffieHellmanCryptoProvider(byte[] cryptoKey)
	{
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x3EA3F10", Offset = "0x3EA3F10", VA = "0x3EA3F10", Slot = "6")]
	public void DeriveSharedKey(byte[] otherPartyPublicKey)
	{
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x3EA4290", Offset = "0x3EA4290", VA = "0x3EA4290")]
	private byte[] PhotonBigIntArrayToMsBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x3EA3E80", Offset = "0x3EA3E80", VA = "0x3EA3E80")]
	private byte[] MsBigIntArrayToPhotonBigIntArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x3EA43C0", Offset = "0x3EA43C0", VA = "0x3EA43C0", Slot = "7")]
	public byte[] Encrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x3EA43E0", Offset = "0x3EA43E0", VA = "0x3EA43E0", Slot = "8")]
	public byte[] Encrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x3EA4620", Offset = "0x3EA4620", VA = "0x3EA4620", Slot = "9")]
	public byte[] Decrypt(byte[] data)
	{
		return null;
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x3EA4640", Offset = "0x3EA4640", VA = "0x3EA4640", Slot = "10")]
	public byte[] Decrypt(byte[] data, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x3EA4880", Offset = "0x3EA4880", VA = "0x3EA4880", Slot = "11")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x3EA48F0", Offset = "0x3EA48F0", VA = "0x3EA48F0")]
	protected void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x3EA3C60", Offset = "0x3EA3C60", VA = "0x3EA3C60")]
	private BigInteger CalculatePublicKey()
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x3EA4330", Offset = "0x3EA4330", VA = "0x3EA4330")]
	private BigInteger CalculateSharedKey(BigInteger otherPartyPublicKey)
	{
		return default(BigInteger);
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x3EA3AD0", Offset = "0x3EA3AD0", VA = "0x3EA3AD0")]
	private BigInteger GenerateRandomSecret(int secretLength)
	{
		return default(BigInteger);
	}
}
