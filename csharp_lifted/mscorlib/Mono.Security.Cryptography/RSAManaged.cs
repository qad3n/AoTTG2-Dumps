// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.RSAManaged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private KeyGeneratedEventHandler m_KeyGenerated;

	[Token(Token = "0x17000023")]
	public override int KeySize
	{
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x52F1610", Offset = "0x52F0610", VA = "0x52F1610", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000024")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x52F16B0", Offset = "0x52F06B0", VA = "0x52F16B0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public bool PublicOnly
	{
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x52F16E0", Offset = "0x52F06E0", VA = "0x52F16E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x52F1810", Offset = "0x52F0810", VA = "0x52F1810", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsCrtPossible
	{
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x52F3D10", Offset = "0x52F2D10", VA = "0x52F3D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x52F35B0", Offset = "0x52F25B0", VA = "0x52F35B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x52F3640", Offset = "0x52F2640", VA = "0x52F3640")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x52F0560", Offset = "0x52EF560", VA = "0x52F0560")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x52F0640", Offset = "0x52EF640", VA = "0x52F0640", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x52F06E0", Offset = "0x52EF6E0", VA = "0x52F06E0")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x52F1840", Offset = "0x52F0840", VA = "0x52F1840", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x52F23A0", Offset = "0x52F13A0", VA = "0x52F23A0", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x52F2570", Offset = "0x52F1570", VA = "0x52F2570", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x52F2B60", Offset = "0x52F1B60", VA = "0x52F2B60", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x52F3130", Offset = "0x52F2130", VA = "0x52F3130", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x52F36D0", Offset = "0x52F26D0", VA = "0x52F36D0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x52F2310", Offset = "0x52F1310", VA = "0x52F2310")]
	private byte[] GetPaddedValue(Mono.Math.BigInteger value, int length)
	{
		return null;
	}
}
