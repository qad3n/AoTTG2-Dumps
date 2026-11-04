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

[Token(Token = "0x200006B")]
internal class DSAManaged : DSA
{
	[Token(Token = "0x200006C")]
	public delegate void KeyGeneratedEventHandler(object sender, EventArgs e);

	[Token(Token = "0x40001F2")]
	[FieldOffset(Offset = "0x20")]
	private bool keypairGenerated;

	[Token(Token = "0x40001F3")]
	[FieldOffset(Offset = "0x21")]
	private bool m_disposed;

	[Token(Token = "0x40001F4")]
	[FieldOffset(Offset = "0x28")]
	private Mono.Math.BigInteger p;

	[Token(Token = "0x40001F5")]
	[FieldOffset(Offset = "0x30")]
	private Mono.Math.BigInteger q;

	[Token(Token = "0x40001F6")]
	[FieldOffset(Offset = "0x38")]
	private Mono.Math.BigInteger g;

	[Token(Token = "0x40001F7")]
	[FieldOffset(Offset = "0x40")]
	private Mono.Math.BigInteger x;

	[Token(Token = "0x40001F8")]
	[FieldOffset(Offset = "0x48")]
	private Mono.Math.BigInteger y;

	[Token(Token = "0x40001F9")]
	[FieldOffset(Offset = "0x50")]
	private Mono.Math.BigInteger j;

	[Token(Token = "0x40001FA")]
	[FieldOffset(Offset = "0x58")]
	private Mono.Math.BigInteger seed;

	[Token(Token = "0x40001FB")]
	[FieldOffset(Offset = "0x60")]
	private int counter;

	[Token(Token = "0x40001FC")]
	[FieldOffset(Offset = "0x64")]
	private bool j_missing;

	[Token(Token = "0x40001FD")]
	[FieldOffset(Offset = "0x68")]
	private RandomNumberGenerator rng;

	[Token(Token = "0x40001FE")]
	[FieldOffset(Offset = "0x70")]
	[CompilerGenerated]
	private KeyGeneratedEventHandler m_KeyGenerated;

	[Token(Token = "0x1700002D")]
	private RandomNumberGenerator Random
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x195BA10", Offset = "0x195A010", VA = "0x18195BA10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002E")]
	public override int KeySize
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x195B980", Offset = "0x1959F80", VA = "0x18195B980", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700002F")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public bool PublicOnly
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x195B9B0", Offset = "0x1959FB0", VA = "0x18195B9B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000031")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x195BA50", Offset = "0x195A050", VA = "0x18195BA50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000002")]
	public event KeyGeneratedEventHandler KeyGenerated
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x195B860", Offset = "0x1959E60", VA = "0x18195B860")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x195BA80", Offset = "0x195A080", VA = "0x18195BA80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x195B790", Offset = "0x1959D90", VA = "0x18195B790")]
	public DSAManaged(int dwKeySize)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~DSAManaged()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x195ACC0", Offset = "0x19592C0", VA = "0x18195ACC0")]
	private void Generate()
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x195A100", Offset = "0x1958700", VA = "0x18195A100")]
	private void GenerateKeyPair()
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x195B900", Offset = "0x1959F00", VA = "0x18195B900")]
	private void add(byte[] a, byte[] b, int value)
	{
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x195A350", Offset = "0x1958950", VA = "0x18195A350")]
	private void GenerateParams(int keyLength)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x195B130", Offset = "0x1959730", VA = "0x18195B130")]
	private byte[] NormalizeArray(byte[] array)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x1959D50", Offset = "0x1958350", VA = "0x181959D50", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x195AD10", Offset = "0x1959310", VA = "0x18195AD10", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x1959510", Offset = "0x1957B10", VA = "0x181959510", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x195B1E0", Offset = "0x19597E0", VA = "0x18195B1E0", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x1959980", Offset = "0x1957F80", VA = "0x181959980", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}
}
