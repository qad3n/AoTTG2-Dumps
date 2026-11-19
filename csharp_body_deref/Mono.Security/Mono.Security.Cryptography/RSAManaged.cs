using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Math;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200003E")]
public class RSAManaged : RSA
{
	[Token(Token = "0x200003F")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x20")]
	private bool isCRTpossible;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x21")]
	private bool keyBlinding;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x22")]
	private bool keypairGenerated;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x23")]
	private bool m_disposed;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x28")]
	private BigInteger d;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x30")]
	private BigInteger p;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x38")]
	private BigInteger q;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x40")]
	private BigInteger dp;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x48")]
	private BigInteger dq;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x50")]
	private BigInteger qInv;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x58")]
	private BigInteger n;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x60")]
	private BigInteger e;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private KeyGeneratedEventHandler KeyGenerated;

	[Token(Token = "0x1700007E")]
	public override int KeySize
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x52CD3B0", Offset = "0x52CC3B0", VA = "0x52CD3B0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x52CD450", Offset = "0x52CC450", VA = "0x52CD450", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public bool PublicOnly
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x52CD480", Offset = "0x52CC480", VA = "0x52CD480")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000081")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x52CD5B0", Offset = "0x52CC5B0", VA = "0x52CD5B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x52CC2F0", Offset = "0x52CB2F0", VA = "0x52CC2F0")]
	public RSAManaged()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x52CC300", Offset = "0x52CB300", VA = "0x52CC300")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x52CC3E0", Offset = "0x52CB3E0", VA = "0x52CC3E0", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x52CC480", Offset = "0x52CB480", VA = "0x52CC480")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x52CD5E0", Offset = "0x52CC5E0", VA = "0x52CD5E0", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x52CE140", Offset = "0x52CD140", VA = "0x52CE140", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x52CE310", Offset = "0x52CD310", VA = "0x52CE310", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x52CE900", Offset = "0x52CD900", VA = "0x52CE900", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x52CEED0", Offset = "0x52CDED0", VA = "0x52CEED0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x52CF350", Offset = "0x52CE350", VA = "0x52CF350", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x52CE0B0", Offset = "0x52CD0B0", VA = "0x52CE0B0")]
	private byte[] GetPaddedValue(BigInteger value, int length)
	{
		return null;
	}
}
