using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Math;

namespace Mono.Security.Cryptography;

[Token(Token = "0x2000051")]
public class RSAManaged : RSA
{
	[Token(Token = "0x2000052")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x20")]
	private bool isCRTpossible;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x21")]
	private bool keyBlinding;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x22")]
	private bool keypairGenerated;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x23")]
	private bool m_disposed;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x28")]
	private BigInteger d;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x30")]
	private BigInteger p;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x38")]
	private BigInteger q;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x40")]
	private BigInteger dp;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x48")]
	private BigInteger dq;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x50")]
	private BigInteger qInv;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x58")]
	private BigInteger n;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x60")]
	private BigInteger e;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private KeyGeneratedEventHandler KeyGenerated;

	[Token(Token = "0x17000081")]
	public override int KeySize
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x193D1D0", Offset = "0x193B7D0", VA = "0x18193D1D0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000082")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x193D1A0", Offset = "0x193B7A0", VA = "0x18193D1A0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public bool PublicOnly
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x193D280", Offset = "0x193B880", VA = "0x18193D280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000084")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x193D320", Offset = "0x193B920", VA = "0x18193D320", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x193CFD0", Offset = "0x193B5D0", VA = "0x18193CFD0")]
	public RSAManaged()
	{
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x193D0C0", Offset = "0x193B6C0", VA = "0x18193D0C0")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x193BC60", Offset = "0x193A260", VA = "0x18193BC60")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x193AC80", Offset = "0x1939280", VA = "0x18193AC80", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x193B5E0", Offset = "0x1939BE0", VA = "0x18193B5E0", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x193B7E0", Offset = "0x1939DE0", VA = "0x18193B7E0", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x193C280", Offset = "0x193A880", VA = "0x18193C280", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x193B190", Offset = "0x1939790", VA = "0x18193B190", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x193CA30", Offset = "0x193B030", VA = "0x18193CA30", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x193C1D0", Offset = "0x193A7D0", VA = "0x18193C1D0")]
	private byte[] GetPaddedValue(BigInteger value, int length)
	{
		return null;
	}
}
