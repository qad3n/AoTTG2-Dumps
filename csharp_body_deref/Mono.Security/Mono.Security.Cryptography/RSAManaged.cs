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
		[Address(RVA = "0x3A54A80", Offset = "0x3A54A80", VA = "0x3A54A80", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x3A54B20", Offset = "0x3A54B20", VA = "0x3A54B20", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000080")]
	public bool PublicOnly
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x3A54B50", Offset = "0x3A54B50", VA = "0x3A54B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000081")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x3A54C80", Offset = "0x3A54C80", VA = "0x3A54C80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x3A53AD0", Offset = "0x3A53AD0", VA = "0x3A53AD0")]
	public RSAManaged()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x3A53AE0", Offset = "0x3A53AE0", VA = "0x3A53AE0")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x3A53BC0", Offset = "0x3A53BC0", VA = "0x3A53BC0", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x3A53C50", Offset = "0x3A53C50", VA = "0x3A53C50")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x3A54CB0", Offset = "0x3A54CB0", VA = "0x3A54CB0", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x3A55890", Offset = "0x3A55890", VA = "0x3A55890", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x3A55A60", Offset = "0x3A55A60", VA = "0x3A55A60", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x3A55FD0", Offset = "0x3A55FD0", VA = "0x3A55FD0", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x3A56590", Offset = "0x3A56590", VA = "0x3A56590", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x3A56A60", Offset = "0x3A56A60", VA = "0x3A56A60", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x3A55800", Offset = "0x3A55800", VA = "0x3A55800")]
	private byte[] GetPaddedValue(BigInteger value, int length)
	{
		return null;
	}
}
