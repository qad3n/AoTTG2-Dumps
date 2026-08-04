// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DSACryptoServiceProvider
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B51910", Offset = "0x3B51910", VA = "0x3B51910", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FC")]
	public override int KeySize
	{
		[Token(Token = "0x6001B1E")]
		[Address(RVA = "0x3B51920", Offset = "0x3B51920", VA = "0x3B51920", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FD")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001B1F")]
		[Address(RVA = "0x3B51950", Offset = "0x3B51950", VA = "0x3B51950")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B20")]
		[Address(RVA = "0x3B51960", Offset = "0x3B51960", VA = "0x3B51960")]
		set
		{
		}
	}

	[Token(Token = "0x170002FE")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001B21")]
		[Address(RVA = "0x3B51970", Offset = "0x3B51970", VA = "0x3B51970")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002FF")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001B22")]
		[Address(RVA = "0x3B51990", Offset = "0x3B51990", VA = "0x3B51990", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000300")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001B23")]
		[Address(RVA = "0x3B519C0", Offset = "0x3B519C0", VA = "0x3B519C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B24")]
		[Address(RVA = "0x3B51A00", Offset = "0x3B51A00", VA = "0x3B51A00")]
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
		[Address(RVA = "0x3B52330", Offset = "0x3B52330", VA = "0x3B52330", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x3B4EA50", Offset = "0x3B4EA50", VA = "0x3B4EA50")]
	public DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x3B514F0", Offset = "0x3B514F0", VA = "0x3B514F0")]
	public DSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x3B514C0", Offset = "0x3B514C0", VA = "0x3B514C0")]
	public DSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x3B51540", Offset = "0x3B51540", VA = "0x3B51540")]
	public DSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x3B51590", Offset = "0x3B51590", VA = "0x3B51590")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x3B517C0", Offset = "0x3B517C0", VA = "0x3B517C0")]
	private void Common(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x3B51880", Offset = "0x3B51880", VA = "0x3B51880", Slot = "1")]
	~DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x3B51A40", Offset = "0x3B51A40", VA = "0x3B51A40", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x3B51B00", Offset = "0x3B51B00", VA = "0x3B51B00", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x3B51B90", Offset = "0x3B51B90", VA = "0x3B51B90", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x3B51BC0", Offset = "0x3B51BC0", VA = "0x3B51BC0")]
	public byte[] SignData(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x3B51C40", Offset = "0x3B51C40", VA = "0x3B51C40")]
	public byte[] SignData(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x3B51CE0", Offset = "0x3B51CE0", VA = "0x3B51CE0")]
	public byte[] SignData(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x3B51D60", Offset = "0x3B51D60", VA = "0x3B51D60")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x3B51E60", Offset = "0x3B51E60", VA = "0x3B51E60")]
	public bool VerifyData(byte[] rgbData, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x3B51EF0", Offset = "0x3B51EF0", VA = "0x3B51EF0")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x3B52040", Offset = "0x3B52040", VA = "0x3B52040", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x3B52070", Offset = "0x3B52070", VA = "0x3B52070", Slot = "27")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x3B52170", Offset = "0x3B52170", VA = "0x3B52170", Slot = "28")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x3B52260", Offset = "0x3B52260", VA = "0x3B52260", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x3B522B0", Offset = "0x3B522B0", VA = "0x3B522B0")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x3B52340", Offset = "0x3B52340", VA = "0x3B52340", Slot = "41")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x3B52360", Offset = "0x3B52360", VA = "0x3B52360", Slot = "42")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
