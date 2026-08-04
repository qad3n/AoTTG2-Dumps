// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.Cryptography.DSAManaged
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
		[Address(RVA = "0x3AEBE10", Offset = "0x3AEBE10", VA = "0x3AEBE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public override int KeySize
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x3AEC250", Offset = "0x3AEC250", VA = "0x3AEC250", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002F")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x3AEC270", Offset = "0x3AEC270", VA = "0x3AEC270", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public bool PublicOnly
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x3AEC280", Offset = "0x3AEC280", VA = "0x3AEC280")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x3AEC2E0", Offset = "0x3AEC2E0", VA = "0x3AEC2E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000002")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x3AEDE20", Offset = "0x3AEDE20", VA = "0x3AEDE20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x3AEDEB0", Offset = "0x3AEDEB0", VA = "0x3AEDEB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x3AEB120", Offset = "0x3AEB120", VA = "0x3AEB120")]
	public DSAManaged(int dwKeySize)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x3AEB1E0", Offset = "0x3AEB1E0", VA = "0x3AEB1E0", Slot = "1")]
	~DSAManaged()
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x3AEB270", Offset = "0x3AEB270", VA = "0x3AEB270")]
	private void Generate()
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3AEBA70", Offset = "0x3AEBA70", VA = "0x3AEBA70")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x3AEBD80", Offset = "0x3AEBD80", VA = "0x3AEBD80")]
	private void add(byte[] a, byte[] b, int value)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x3AEB2B0", Offset = "0x3AEB2B0", VA = "0x3AEB2B0")]
	private void GenerateParams(int keyLength)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x3AEC310", Offset = "0x3AEC310", VA = "0x3AEC310")]
	private byte[] NormalizeArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3AEC3A0", Offset = "0x3AEC3A0", VA = "0x3AEC3A0", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x3AECA60", Offset = "0x3AECA60", VA = "0x3AECA60", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x3AECE30", Offset = "0x3AECE30", VA = "0x3AECE30", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x3AED2B0", Offset = "0x3AED2B0", VA = "0x3AED2B0", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x3AED9F0", Offset = "0x3AED9F0", VA = "0x3AED9F0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
