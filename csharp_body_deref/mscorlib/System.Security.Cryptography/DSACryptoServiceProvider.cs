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

[Token(Token = "0x200031F")]
[ComVisible(true)]
public sealed class DSACryptoServiceProvider : DSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000D58")]
	private const int PROV_DSS_DH = 13;

	[Token(Token = "0x4000D59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000D5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000D5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000D5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000D5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000D5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.DSAManaged dsa;

	[Token(Token = "0x4000D5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useMachineKeyStore;

	[Token(Token = "0x170002FC")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001B62")]
		[Address(RVA = "0x535AF00", Offset = "0x5359F00", VA = "0x535AF00", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FD")]
	public override int KeySize
	{
		[Token(Token = "0x6001B63")]
		[Address(RVA = "0x535AF10", Offset = "0x5359F10", VA = "0x535AF10", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FE")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001B64")]
		[Address(RVA = "0x535AF40", Offset = "0x5359F40", VA = "0x535AF40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B65")]
		[Address(RVA = "0x535AF50", Offset = "0x5359F50", VA = "0x535AF50")]
		set
		{
		}
	}

	[Token(Token = "0x170002FF")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001B66")]
		[Address(RVA = "0x535AF60", Offset = "0x5359F60", VA = "0x535AF60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000300")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001B67")]
		[Address(RVA = "0x535AF80", Offset = "0x5359F80", VA = "0x535AF80", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000301")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001B68")]
		[Address(RVA = "0x535AFB0", Offset = "0x5359FB0", VA = "0x535AFB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B69")]
		[Address(RVA = "0x535AFF0", Offset = "0x5359FF0", VA = "0x535AFF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000302")]
	[ComVisible(false)]
	[System.MonoTODO("call into KeyPairPersistence to get details")]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001B78")]
		[Address(RVA = "0x535B8C0", Offset = "0x535A8C0", VA = "0x535B8C0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B5B")]
	[Address(RVA = "0x53580C0", Offset = "0x53570C0", VA = "0x53580C0")]
	public DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B5C")]
	[Address(RVA = "0x535AAD0", Offset = "0x5359AD0", VA = "0x535AAD0")]
	public DSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B5D")]
	[Address(RVA = "0x535AAA0", Offset = "0x5359AA0", VA = "0x535AAA0")]
	public DSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001B5E")]
	[Address(RVA = "0x535AB20", Offset = "0x5359B20", VA = "0x535AB20")]
	public DSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B5F")]
	[Address(RVA = "0x535AB70", Offset = "0x5359B70", VA = "0x535AB70")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001B60")]
	[Address(RVA = "0x535ADA0", Offset = "0x5359DA0", VA = "0x535ADA0")]
	private void Common(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B61")]
	[Address(RVA = "0x535AE60", Offset = "0x5359E60", VA = "0x535AE60", Slot = "1")]
	~DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x535B030", Offset = "0x535A030", VA = "0x535B030", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x535B0F0", Offset = "0x535A0F0", VA = "0x535B0F0", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x6001B6C")]
	[Address(RVA = "0x535B120", Offset = "0x535A120", VA = "0x535B120", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B6D")]
	[Address(RVA = "0x535B150", Offset = "0x535A150", VA = "0x535B150")]
	public byte[] SignData(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001B6E")]
	[Address(RVA = "0x535B1D0", Offset = "0x535A1D0", VA = "0x535B1D0")]
	public byte[] SignData(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001B6F")]
	[Address(RVA = "0x535B270", Offset = "0x535A270", VA = "0x535B270")]
	public byte[] SignData(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001B70")]
	[Address(RVA = "0x535B2F0", Offset = "0x535A2F0", VA = "0x535B2F0")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001B71")]
	[Address(RVA = "0x535B3F0", Offset = "0x535A3F0", VA = "0x535B3F0")]
	public bool VerifyData(byte[] rgbData, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B72")]
	[Address(RVA = "0x535B480", Offset = "0x535A480", VA = "0x535B480")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B73")]
	[Address(RVA = "0x535B5D0", Offset = "0x535A5D0", VA = "0x535B5D0", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B74")]
	[Address(RVA = "0x535B600", Offset = "0x535A600", VA = "0x535B600", Slot = "27")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B75")]
	[Address(RVA = "0x535B700", Offset = "0x535A700", VA = "0x535B700", Slot = "28")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B76")]
	[Address(RVA = "0x535B7F0", Offset = "0x535A7F0", VA = "0x535B7F0", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B77")]
	[Address(RVA = "0x535B840", Offset = "0x535A840", VA = "0x535B840")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001B79")]
	[Address(RVA = "0x535B8D0", Offset = "0x535A8D0", VA = "0x535B8D0", Slot = "41")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001B7A")]
	[Address(RVA = "0x535B8F0", Offset = "0x535A8F0", VA = "0x535B8F0", Slot = "42")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
