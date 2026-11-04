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

[Token(Token = "0x2000328")]
[ComVisible(true)]
public sealed class RSACryptoServiceProvider : RSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000D63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CspProviderFlags s_UseMachineKeyStore;

	[Token(Token = "0x4000D64")]
	private const int PROV_RSA_FULL = 1;

	[Token(Token = "0x4000D65")]
	private const int AT_KEYEXCHANGE = 1;

	[Token(Token = "0x4000D66")]
	private const int AT_SIGNATURE = 2;

	[Token(Token = "0x4000D67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000D68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000D69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000D6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000D6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000D6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.RSAManaged rsa;

	[Token(Token = "0x170002C8")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001A5C")]
		[Address(RVA = "0x19C4190", Offset = "0x19C2790", VA = "0x1819C4190", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C9")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001A5D")]
		[Address(RVA = "0x19C41C0", Offset = "0x19C27C0", VA = "0x1819C41C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A5E")]
		[Address(RVA = "0x19C4290", Offset = "0x19C2890", VA = "0x1819C4290")]
		set
		{
		}
	}

	[Token(Token = "0x170002CA")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A6E")]
		[Address(RVA = "0x19C4120", Offset = "0x19C2720", VA = "0x1819C4120", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CB")]
	public override int KeySize
	{
		[Token(Token = "0x6001A6F")]
		[Address(RVA = "0x19C4150", Offset = "0x19C2750", VA = "0x1819C4150", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002CC")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001A70")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A71")]
		[Address(RVA = "0x19C4210", Offset = "0x19C2810", VA = "0x1819C4210")]
		set
		{
		}
	}

	[Token(Token = "0x170002CD")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001A72")]
		[Address(RVA = "0x19C4170", Offset = "0x19C2770", VA = "0x1819C4170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CE")]
	[ComVisible(false)]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001A87")]
		[Address(RVA = "0x19C40A0", Offset = "0x19C26A0", VA = "0x1819C40A0", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x19C2C30", Offset = "0x19C1230", VA = "0x1819C2C30", Slot = "29")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x19C2BF0", Offset = "0x19C11F0", VA = "0x1819C2BF0", Slot = "30")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x19C24E0", Offset = "0x19C0AE0", VA = "0x1819C24E0")]
	private static int GetAlgorithmId(HashAlgorithmName hashAlgorithm)
	{
		return default(int);
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x19C2100", Offset = "0x19C0700", VA = "0x1819C2100", Slot = "25")]
	public override byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x19C1820", Offset = "0x19BFE20", VA = "0x1819C1820", Slot = "26")]
	public override byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A64")]
	[Address(RVA = "0x19C34F0", Offset = "0x19C1AF0", VA = "0x1819C34F0", Slot = "27")]
	public override byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x19C3980", Offset = "0x19C1F80", VA = "0x1819C3980", Slot = "28")]
	public override bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x19C3220", Offset = "0x19C1820", VA = "0x1819C3220")]
	private static Exception PaddingModeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6001A67")]
	[Address(RVA = "0x19C4070", Offset = "0x19C2670", VA = "0x1819C4070")]
	public RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A68")]
	[Address(RVA = "0x19C3F20", Offset = "0x19C2520", VA = "0x1819C3F20")]
	public RSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A69")]
	[Address(RVA = "0x19C3D90", Offset = "0x19C2390", VA = "0x1819C3D90")]
	public RSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001A6A")]
	[Address(RVA = "0x19C3DD0", Offset = "0x19C23D0", VA = "0x1819C3DD0")]
	public RSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A6B")]
	[Address(RVA = "0x19C1420", Offset = "0x19BFA20", VA = "0x1819C1420")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001A6C")]
	[Address(RVA = "0x19C1660", Offset = "0x19BFC60", VA = "0x1819C1660")]
	private void Common(CspParameters p)
	{
	}

	[Token(Token = "0x6001A6D")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A73")]
	[Address(RVA = "0x19C1A00", Offset = "0x19C0000", VA = "0x1819C1A00")]
	public byte[] Decrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A74")]
	[Address(RVA = "0x19C1780", Offset = "0x19BFD80", VA = "0x1819C1780", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A75")]
	[Address(RVA = "0x19C1E60", Offset = "0x19C0460", VA = "0x1819C1E60")]
	public byte[] Encrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A76")]
	[Address(RVA = "0x19C1E30", Offset = "0x19C0430", VA = "0x1819C1E30", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A77")]
	[Address(RVA = "0x19C2350", Offset = "0x19C0950", VA = "0x1819C2350", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6001A78")]
	[Address(RVA = "0x19C2FB0", Offset = "0x19C15B0", VA = "0x1819C2FB0", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6001A79")]
	[Address(RVA = "0x19C2910", Offset = "0x19C0F10", VA = "0x1819C2910")]
	private HashAlgorithm GetHash(object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A7A")]
	[Address(RVA = "0x19C2690", Offset = "0x19C0C90", VA = "0x1819C2690")]
	private HashAlgorithm GetHashFromString(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A7B")]
	[Address(RVA = "0x19C33E0", Offset = "0x19C19E0", VA = "0x1819C33E0")]
	public byte[] SignData(byte[] buffer, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A7C")]
	[Address(RVA = "0x19C3340", Offset = "0x19C1940", VA = "0x1819C3340")]
	public byte[] SignData(Stream inputStream, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A7D")]
	[Address(RVA = "0x19C3290", Offset = "0x19C1890", VA = "0x1819C3290")]
	public byte[] SignData(byte[] buffer, int offset, int count, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A7E")]
	[Address(RVA = "0x19C2760", Offset = "0x19C0D60", VA = "0x1819C2760")]
	private string GetHashNameFromOID(string oid)
	{
		return null;
	}

	[Token(Token = "0x6001A7F")]
	[Address(RVA = "0x19C36D0", Offset = "0x19C1CD0", VA = "0x1819C36D0")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001A80")]
	[Address(RVA = "0x19C37C0", Offset = "0x19C1DC0", VA = "0x1819C37C0")]
	private byte[] SignHash(byte[] rgbHash, int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A81")]
	[Address(RVA = "0x19C3000", Offset = "0x19C1600", VA = "0x1819C3000")]
	private static HashAlgorithm InternalHashToHashAlgorithm(int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A82")]
	[Address(RVA = "0x19C3840", Offset = "0x19C1E40", VA = "0x1819C3840")]
	public bool VerifyData(byte[] buffer, object halg, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A83")]
	[Address(RVA = "0x19C3C50", Offset = "0x19C2250", VA = "0x1819C3C50")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A84")]
	[Address(RVA = "0x19C3BD0", Offset = "0x19C21D0", VA = "0x1819C3BD0")]
	private bool VerifyHash(byte[] rgbHash, int calgHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A85")]
	[Address(RVA = "0x19BE840", Offset = "0x19BCE40", VA = "0x1819BE840", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001A86")]
	[Address(RVA = "0x19C31A0", Offset = "0x19C17A0", VA = "0x1819C31A0")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001A88")]
	[Address(RVA = "0x19C22E0", Offset = "0x19C08E0", VA = "0x1819C22E0", Slot = "52")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A89")]
	[Address(RVA = "0x19C2C90", Offset = "0x19C1290", VA = "0x1819C2C90", Slot = "53")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
