using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Mono.Security.Cryptography;

namespace System.Security.Cryptography;

[Token(Token = "0x2000317")]
[ComVisible(true)]
public sealed class DSACryptoServiceProvider : DSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000DEB")]
	private const int PROV_DSS_DH = 13;

	[Token(Token = "0x4000DEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000DED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000DEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000DEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000DF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000DF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.DSAManaged dsa;

	[Token(Token = "0x4000DF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useMachineKeyStore;

	[Token(Token = "0x170002FB")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001B1D")]
		[Address(RVA = "0x4E6BDF0", Offset = "0x4E6BDF0", VA = "0x4E6BDF0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	public override int KeySize
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x4E6BE00", Offset = "0x4E6BE00", VA = "0x4E6BE00", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FD")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001B1F")]
		[Address(RVA = "0x4E6BE30", Offset = "0x4E6BE30", VA = "0x4E6BE30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B20")]
		[Address(RVA = "0x4E6BE40", Offset = "0x4E6BE40", VA = "0x4E6BE40")]
		set
		{
		}
	}

	[Token(Token = "0x170002FE")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001B21")]
		[Address(RVA = "0x4E6BE50", Offset = "0x4E6BE50", VA = "0x4E6BE50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FF")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001B22")]
		[Address(RVA = "0x4E6BE70", Offset = "0x4E6BE70", VA = "0x4E6BE70", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000300")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001B23")]
		[Address(RVA = "0x4E6BEA0", Offset = "0x4E6BEA0", VA = "0x4E6BEA0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B24")]
		[Address(RVA = "0x4E6BEE0", Offset = "0x4E6BEE0", VA = "0x4E6BEE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000301")]
	[System.MonoTODO("call into KeyPairPersistence to get details")]
	[ComVisible(false)]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001B33")]
		[Address(RVA = "0x4E6C810", Offset = "0x4E6C810", VA = "0x4E6C810", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x4E68F30", Offset = "0x4E68F30", VA = "0x4E68F30")]
	public DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x4E6B9D0", Offset = "0x4E6B9D0", VA = "0x4E6B9D0")]
	public DSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x4E6B9A0", Offset = "0x4E6B9A0", VA = "0x4E6B9A0")]
	public DSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x4E6BA20", Offset = "0x4E6BA20", VA = "0x4E6BA20")]
	public DSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x4E6BA70", Offset = "0x4E6BA70", VA = "0x4E6BA70")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x4E6BCA0", Offset = "0x4E6BCA0", VA = "0x4E6BCA0")]
	private void Common(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x4E6BD60", Offset = "0x4E6BD60", VA = "0x4E6BD60", Slot = "1")]
	~DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x4E6BF20", Offset = "0x4E6BF20", VA = "0x4E6BF20", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x4E6BFE0", Offset = "0x4E6BFE0", VA = "0x4E6BFE0", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x4E6C070", Offset = "0x4E6C070", VA = "0x4E6C070", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x4E6C0A0", Offset = "0x4E6C0A0", VA = "0x4E6C0A0")]
	public byte[] SignData(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x4E6C120", Offset = "0x4E6C120", VA = "0x4E6C120")]
	public byte[] SignData(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x4E6C1C0", Offset = "0x4E6C1C0", VA = "0x4E6C1C0")]
	public byte[] SignData(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x4E6C240", Offset = "0x4E6C240", VA = "0x4E6C240")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x4E6C340", Offset = "0x4E6C340", VA = "0x4E6C340")]
	public bool VerifyData(byte[] rgbData, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x4E6C3D0", Offset = "0x4E6C3D0", VA = "0x4E6C3D0")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x4E6C520", Offset = "0x4E6C520", VA = "0x4E6C520", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x4E6C550", Offset = "0x4E6C550", VA = "0x4E6C550", Slot = "27")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x4E6C650", Offset = "0x4E6C650", VA = "0x4E6C650", Slot = "28")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x4E6C740", Offset = "0x4E6C740", VA = "0x4E6C740", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x4E6C790", Offset = "0x4E6C790", VA = "0x4E6C790")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x4E6C820", Offset = "0x4E6C820", VA = "0x4E6C820", Slot = "41")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x4E6C840", Offset = "0x4E6C840", VA = "0x4E6C840", Slot = "42")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
