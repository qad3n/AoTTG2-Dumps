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

[Token(Token = "0x2000068")]
internal class RSAManaged : RSA
{
	[Token(Token = "0x2000069")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x20")]
	private bool isCRTpossible;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x21")]
	private bool keyBlinding;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x22")]
	private bool keypairGenerated;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x23")]
	private bool m_disposed;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x28")]
	private Mono.Math.BigInteger d;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Math.BigInteger p;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x38")]
	private Mono.Math.BigInteger q;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x40")]
	private Mono.Math.BigInteger dp;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x48")]
	private Mono.Math.BigInteger dq;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x50")]
	private Mono.Math.BigInteger qInv;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x58")]
	private Mono.Math.BigInteger n;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x60")]
	private Mono.Math.BigInteger e;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x68")]
	[CompilerGenerated]
	private KeyGeneratedEventHandler m_KeyGenerated;

	[Token(Token = "0x17000023")]
	public override int KeySize
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x1964D10", Offset = "0x1963310", VA = "0x181964D10", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000024")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x1964CE0", Offset = "0x19632E0", VA = "0x181964CE0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000025")]
	public bool PublicOnly
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x1964DC0", Offset = "0x19633C0", VA = "0x181964DC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000026")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x1964E60", Offset = "0x1963460", VA = "0x181964E60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000027")]
	public bool IsCrtPossible
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x1964CD0", Offset = "0x19632D0", VA = "0x181964CD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x14000001")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x1964C30", Offset = "0x1963230", VA = "0x181964C30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x1964E90", Offset = "0x1963490", VA = "0x181964E90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x1964B50", Offset = "0x1963150", VA = "0x181964B50")]
	public RSAManaged(int keySize)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~RSAManaged()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x19637E0", Offset = "0x1961DE0", VA = "0x1819637E0")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x1962840", Offset = "0x1960E40", VA = "0x181962840", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x19631D0", Offset = "0x19617D0", VA = "0x1819631D0", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x19633D0", Offset = "0x19619D0", VA = "0x1819633D0", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x1963E00", Offset = "0x1962400", VA = "0x181963E00", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x1962D80", Offset = "0x1961380", VA = "0x181962D80", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x19645B0", Offset = "0x1962BB0", VA = "0x1819645B0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x1963D50", Offset = "0x1962350", VA = "0x181963D50")]
	private byte[] GetPaddedValue(Mono.Math.BigInteger value, int length)
	{
		return null;
	}
}
