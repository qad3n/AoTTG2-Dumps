using System;
using System.Runtime.CompilerServices;
using System.Security.Cryptography;
using Il2CppDummyDll;
using Mono.Math;

namespace Mono.Security.Cryptography;

[Token(Token = "0x200004D")]
internal class DSAManaged : DSA
{
	[Token(Token = "0x200004E")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x20")]
	private bool keypairGenerated;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x21")]
	private bool m_disposed;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x28")]
	private Mono.Math.BigInteger p;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Math.BigInteger q;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x38")]
	private Mono.Math.BigInteger g;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x40")]
	private Mono.Math.BigInteger x;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x48")]
	private Mono.Math.BigInteger y;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x50")]
	private Mono.Math.BigInteger j;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x58")]
	private Mono.Math.BigInteger seed;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x60")]
	private int counter;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x64")]
	private bool j_missing;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x68")]
	private RandomNumberGenerator rng;

	[Token(Token = "0x1700002D")]
	private RandomNumberGenerator Random
	{
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x4E062F0", Offset = "0x4E062F0", VA = "0x4E062F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public override int KeySize
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4E06730", Offset = "0x4E06730", VA = "0x4E06730", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002F")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x4E06750", Offset = "0x4E06750", VA = "0x4E06750", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public bool PublicOnly
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x4E06760", Offset = "0x4E06760", VA = "0x4E06760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x4E067C0", Offset = "0x4E067C0", VA = "0x4E067C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000002")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x4E08300", Offset = "0x4E08300", VA = "0x4E08300")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x4E08390", Offset = "0x4E08390", VA = "0x4E08390")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4E05600", Offset = "0x4E05600", VA = "0x4E05600")]
	public DSAManaged(int dwKeySize)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4E056C0", Offset = "0x4E056C0", VA = "0x4E056C0", Slot = "1")]
	~DSAManaged()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4E05750", Offset = "0x4E05750", VA = "0x4E05750")]
	private void Generate()
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4E05F50", Offset = "0x4E05F50", VA = "0x4E05F50")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4E06260", Offset = "0x4E06260", VA = "0x4E06260")]
	private void add(byte[] a, byte[] b, int value)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4E05790", Offset = "0x4E05790", VA = "0x4E05790")]
	private void GenerateParams(int keyLength)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4E067F0", Offset = "0x4E067F0", VA = "0x4E067F0")]
	private byte[] NormalizeArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4E06880", Offset = "0x4E06880", VA = "0x4E06880", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x4E06F40", Offset = "0x4E06F40", VA = "0x4E06F40", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4E07310", Offset = "0x4E07310", VA = "0x4E07310", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4E07790", Offset = "0x4E07790", VA = "0x4E07790", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4E07ED0", Offset = "0x4E07ED0", VA = "0x4E07ED0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
