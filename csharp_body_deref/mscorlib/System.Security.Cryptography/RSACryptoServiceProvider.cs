// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSACryptoServiceProvider
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

[Token(Token = "0x20002F9")]
[ComVisible(true)]
public sealed class RSACryptoServiceProvider : RSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000D56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CspProviderFlags s_UseMachineKeyStore;

	[Token(Token = "0x4000D57")]
	private const int PROV_RSA_FULL = 1;

	[Token(Token = "0x4000D58")]
	private const int AT_KEYEXCHANGE = 1;

	[Token(Token = "0x4000D59")]
	private const int AT_SIGNATURE = 2;

	[Token(Token = "0x4000D5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000D5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000D5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000D5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000D5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000D5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.RSAManaged rsa;

	[Token(Token = "0x170002C6")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60019F4")]
		[Address(RVA = "0x3B3F8C0", Offset = "0x3B3F8C0", VA = "0x3B3F8C0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x60019F5")]
		[Address(RVA = "0x3B3F8F0", Offset = "0x3B3F8F0", VA = "0x3B3F8F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019F6")]
		[Address(RVA = "0x3B3F930", Offset = "0x3B3F930", VA = "0x3B3F930")]
		set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A06")]
		[Address(RVA = "0x3B40D60", Offset = "0x3B40D60", VA = "0x3B40D60", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C9")]
	public override int KeySize
	{
		[Token(Token = "0x6001A07")]
		[Address(RVA = "0x3B40D90", Offset = "0x3B40D90", VA = "0x3B40D90", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002CA")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001A08")]
		[Address(RVA = "0x3B40DC0", Offset = "0x3B40DC0", VA = "0x3B40DC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x3B40DD0", Offset = "0x3B40DD0", VA = "0x3B40DD0")]
		set
		{
		}
	}

	[Token(Token = "0x170002CB")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001A0A")]
		[Address(RVA = "0x3B40E60", Offset = "0x3B40E60", VA = "0x3B40E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CC")]
	[ComVisible(false)]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x3B42170", Offset = "0x3B42170", VA = "0x3B42170", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x3B3F970", Offset = "0x3B3F970", VA = "0x3B3F970", Slot = "29")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x3B3F9B0", Offset = "0x3B3F9B0", VA = "0x3B3F9B0", Slot = "30")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x3B3F9E0", Offset = "0x3B3F9E0", VA = "0x3B3F9E0")]
	private static int GetAlgorithmId(HashAlgorithmName hashAlgorithm)
	{
		return default(int);
	}

	[Token(Token = "0x60019FA")]
	[Address(RVA = "0x3B3FB70", Offset = "0x3B3FB70", VA = "0x3B3FB70", Slot = "25")]
	public override byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FB")]
	[Address(RVA = "0x3B3FF60", Offset = "0x3B3FF60", VA = "0x3B3FF60", Slot = "26")]
	public override byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FC")]
	[Address(RVA = "0x3B403B0", Offset = "0x3B403B0", VA = "0x3B403B0", Slot = "27")]
	public override byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x3B405F0", Offset = "0x3B405F0", VA = "0x3B405F0", Slot = "28")]
	public override bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x3B3FEF0", Offset = "0x3B3FEF0", VA = "0x3B3FEF0")]
	private static Exception PaddingModeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x3B3CE70", Offset = "0x3B3CE70", VA = "0x3B3CE70")]
	public RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x3B408B0", Offset = "0x3B408B0", VA = "0x3B408B0")]
	public RSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A01")]
	[Address(RVA = "0x3B40880", Offset = "0x3B40880", VA = "0x3B40880")]
	public RSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x3B40900", Offset = "0x3B40900", VA = "0x3B40900")]
	public RSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x3B40950", Offset = "0x3B40950", VA = "0x3B40950")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x3B40BA0", Offset = "0x3B40BA0", VA = "0x3B40BA0")]
	private void Common(CspParameters p)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x3B40CD0", Offset = "0x3B40CD0", VA = "0x3B40CD0", Slot = "1")]
	~RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x3B40170", Offset = "0x3B40170", VA = "0x3B40170")]
	public byte[] Decrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x3B41060", Offset = "0x3B41060", VA = "0x3B41060", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A0D")]
	[Address(RVA = "0x3B3FE40", Offset = "0x3B3FE40", VA = "0x3B3FE40")]
	public byte[] Encrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x3B412D0", Offset = "0x3B412D0", VA = "0x3B412D0", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A0F")]
	[Address(RVA = "0x3B41300", Offset = "0x3B41300", VA = "0x3B41300", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6001A10")]
	[Address(RVA = "0x3B41460", Offset = "0x3B41460", VA = "0x3B41460", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x3B414F0", Offset = "0x3B414F0", VA = "0x3B414F0")]
	private HashAlgorithm GetHash(object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x3B416E0", Offset = "0x3B416E0", VA = "0x3B416E0")]
	private HashAlgorithm GetHashFromString(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x3B419A0", Offset = "0x3B419A0", VA = "0x3B419A0")]
	public byte[] SignData(byte[] buffer, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x3B41B30", Offset = "0x3B41B30", VA = "0x3B41B30")]
	public byte[] SignData(Stream inputStream, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x3B41A90", Offset = "0x3B41A90", VA = "0x3B41A90")]
	public byte[] SignData(byte[] buffer, int offset, int count, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x3B41800", Offset = "0x3B41800", VA = "0x3B41800")]
	private string GetHashNameFromOID(string oid)
	{
		return null;
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x3B41BB0", Offset = "0x3B41BB0", VA = "0x3B41BB0")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x3B40590", Offset = "0x3B40590", VA = "0x3B40590")]
	private byte[] SignHash(byte[] rgbHash, int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x3B41C90", Offset = "0x3B41C90", VA = "0x3B41C90")]
	private static HashAlgorithm InternalHashToHashAlgorithm(int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x3B41F00", Offset = "0x3B41F00", VA = "0x3B41F00")]
	public bool VerifyData(byte[] buffer, object halg, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x3B42010", Offset = "0x3B42010", VA = "0x3B42010")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x3B40810", Offset = "0x3B40810", VA = "0x3B40810")]
	private bool VerifyHash(byte[] rgbHash, int calgHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x3B42120", Offset = "0x3B42120", VA = "0x3B42120", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x3B40DE0", Offset = "0x3B40DE0", VA = "0x3B40DE0")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x3B42220", Offset = "0x3B42220", VA = "0x3B42220", Slot = "52")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x3B422A0", Offset = "0x3B422A0", VA = "0x3B422A0", Slot = "53")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
