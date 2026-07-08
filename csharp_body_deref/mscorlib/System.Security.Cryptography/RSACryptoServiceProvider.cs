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
		[Address(RVA = "0x4E59DA0", Offset = "0x4E59DA0", VA = "0x4E59DA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x60019F5")]
		[Address(RVA = "0x4E59DD0", Offset = "0x4E59DD0", VA = "0x4E59DD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019F6")]
		[Address(RVA = "0x4E59E10", Offset = "0x4E59E10", VA = "0x4E59E10")]
		set
		{
		}
	}

	[Token(Token = "0x170002C8")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A06")]
		[Address(RVA = "0x4E5B240", Offset = "0x4E5B240", VA = "0x4E5B240", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C9")]
	public override int KeySize
	{
		[Token(Token = "0x6001A07")]
		[Address(RVA = "0x4E5B270", Offset = "0x4E5B270", VA = "0x4E5B270", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002CA")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001A08")]
		[Address(RVA = "0x4E5B2A0", Offset = "0x4E5B2A0", VA = "0x4E5B2A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A09")]
		[Address(RVA = "0x4E5B2B0", Offset = "0x4E5B2B0", VA = "0x4E5B2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170002CB")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001A0A")]
		[Address(RVA = "0x4E5B340", Offset = "0x4E5B340", VA = "0x4E5B340")]
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
		[Address(RVA = "0x4E5C650", Offset = "0x4E5C650", VA = "0x4E5C650", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019F7")]
	[Address(RVA = "0x4E59E50", Offset = "0x4E59E50", VA = "0x4E59E50", Slot = "29")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019F8")]
	[Address(RVA = "0x4E59E90", Offset = "0x4E59E90", VA = "0x4E59E90", Slot = "30")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019F9")]
	[Address(RVA = "0x4E59EC0", Offset = "0x4E59EC0", VA = "0x4E59EC0")]
	private static int GetAlgorithmId(HashAlgorithmName hashAlgorithm)
	{
		return default(int);
	}

	[Token(Token = "0x60019FA")]
	[Address(RVA = "0x4E5A050", Offset = "0x4E5A050", VA = "0x4E5A050", Slot = "25")]
	public override byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FB")]
	[Address(RVA = "0x4E5A440", Offset = "0x4E5A440", VA = "0x4E5A440", Slot = "26")]
	public override byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FC")]
	[Address(RVA = "0x4E5A890", Offset = "0x4E5A890", VA = "0x4E5A890", Slot = "27")]
	public override byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019FD")]
	[Address(RVA = "0x4E5AAD0", Offset = "0x4E5AAD0", VA = "0x4E5AAD0", Slot = "28")]
	public override bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019FE")]
	[Address(RVA = "0x4E5A3D0", Offset = "0x4E5A3D0", VA = "0x4E5A3D0")]
	private static Exception PaddingModeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x60019FF")]
	[Address(RVA = "0x4E57350", Offset = "0x4E57350", VA = "0x4E57350")]
	public RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A00")]
	[Address(RVA = "0x4E5AD90", Offset = "0x4E5AD90", VA = "0x4E5AD90")]
	public RSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A01")]
	[Address(RVA = "0x4E5AD60", Offset = "0x4E5AD60", VA = "0x4E5AD60")]
	public RSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001A02")]
	[Address(RVA = "0x4E5ADE0", Offset = "0x4E5ADE0", VA = "0x4E5ADE0")]
	public RSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A03")]
	[Address(RVA = "0x4E5AE30", Offset = "0x4E5AE30", VA = "0x4E5AE30")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001A04")]
	[Address(RVA = "0x4E5B080", Offset = "0x4E5B080", VA = "0x4E5B080")]
	private void Common(CspParameters p)
	{
	}

	[Token(Token = "0x6001A05")]
	[Address(RVA = "0x4E5B1B0", Offset = "0x4E5B1B0", VA = "0x4E5B1B0", Slot = "1")]
	~RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x4E5A650", Offset = "0x4E5A650", VA = "0x4E5A650")]
	public byte[] Decrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x4E5B540", Offset = "0x4E5B540", VA = "0x4E5B540", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A0D")]
	[Address(RVA = "0x4E5A320", Offset = "0x4E5A320", VA = "0x4E5A320")]
	public byte[] Encrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x4E5B7B0", Offset = "0x4E5B7B0", VA = "0x4E5B7B0", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A0F")]
	[Address(RVA = "0x4E5B7E0", Offset = "0x4E5B7E0", VA = "0x4E5B7E0", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6001A10")]
	[Address(RVA = "0x4E5B940", Offset = "0x4E5B940", VA = "0x4E5B940", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x4E5B9D0", Offset = "0x4E5B9D0", VA = "0x4E5B9D0")]
	private HashAlgorithm GetHash(object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x4E5BBC0", Offset = "0x4E5BBC0", VA = "0x4E5BBC0")]
	private HashAlgorithm GetHashFromString(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x4E5BE80", Offset = "0x4E5BE80", VA = "0x4E5BE80")]
	public byte[] SignData(byte[] buffer, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x4E5C010", Offset = "0x4E5C010", VA = "0x4E5C010")]
	public byte[] SignData(Stream inputStream, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x4E5BF70", Offset = "0x4E5BF70", VA = "0x4E5BF70")]
	public byte[] SignData(byte[] buffer, int offset, int count, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x4E5BCE0", Offset = "0x4E5BCE0", VA = "0x4E5BCE0")]
	private string GetHashNameFromOID(string oid)
	{
		return null;
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x4E5C090", Offset = "0x4E5C090", VA = "0x4E5C090")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x4E5AA70", Offset = "0x4E5AA70", VA = "0x4E5AA70")]
	private byte[] SignHash(byte[] rgbHash, int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x4E5C170", Offset = "0x4E5C170", VA = "0x4E5C170")]
	private static HashAlgorithm InternalHashToHashAlgorithm(int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x4E5C3E0", Offset = "0x4E5C3E0", VA = "0x4E5C3E0")]
	public bool VerifyData(byte[] buffer, object halg, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x4E5C4F0", Offset = "0x4E5C4F0", VA = "0x4E5C4F0")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x4E5ACF0", Offset = "0x4E5ACF0", VA = "0x4E5ACF0")]
	private bool VerifyHash(byte[] rgbHash, int calgHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x4E5C600", Offset = "0x4E5C600", VA = "0x4E5C600", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x4E5B2C0", Offset = "0x4E5B2C0", VA = "0x4E5B2C0")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x4E5C700", Offset = "0x4E5C700", VA = "0x4E5C700", Slot = "52")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x4E5C780", Offset = "0x4E5C780", VA = "0x4E5C780", Slot = "53")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
