using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Math;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004A")]
internal class RSAManaged : RSA
{
	[Token(Token = "0x200004B")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x20")]
	private bool isCRTpossible;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x21")]
	private bool keyBlinding;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0x22")]
	private bool keypairGenerated;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0x23")]
	private bool m_disposed;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0x28")]
	private Mono.Math.BigInteger d;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Math.BigInteger p;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0x38")]
	private Mono.Math.BigInteger q;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0x40")]
	private Mono.Math.BigInteger dp;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x48")]
	private Mono.Math.BigInteger dq;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x50")]
	private Mono.Math.BigInteger qInv;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x58")]
	private Mono.Math.BigInteger n;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x60")]
	private Mono.Math.BigInteger e;

	[Token(Token = "0x17000023")]
	public override int KeySize
	{
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x4E01280", Offset = "0x4E01280", VA = "0x4E01280", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000024")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x4E01320", Offset = "0x4E01320", VA = "0x4E01320", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public bool PublicOnly
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x4E01350", Offset = "0x4E01350", VA = "0x4E01350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x4E01480", Offset = "0x4E01480", VA = "0x4E01480", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsCrtPossible
	{
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4E03C00", Offset = "0x4E03C00", VA = "0x4E03C00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4E03260", Offset = "0x4E03260", VA = "0x4E03260")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4E032F0", Offset = "0x4E032F0", VA = "0x4E032F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4E002E0", Offset = "0x4E002E0", VA = "0x4E002E0")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4E003C0", Offset = "0x4E003C0", VA = "0x4E003C0", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4E00450", Offset = "0x4E00450", VA = "0x4E00450")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4E014B0", Offset = "0x4E014B0", VA = "0x4E014B0", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4E02090", Offset = "0x4E02090", VA = "0x4E02090", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4E02260", Offset = "0x4E02260", VA = "0x4E02260", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4E027D0", Offset = "0x4E027D0", VA = "0x4E027D0", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4E02D90", Offset = "0x4E02D90", VA = "0x4E02D90", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x4E03380", Offset = "0x4E03380", VA = "0x4E03380", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x4E02000", Offset = "0x4E02000", VA = "0x4E02000")]
	private byte[] GetPaddedValue(Mono.Math.BigInteger value, int length)
	{
		return null;
	}
}
