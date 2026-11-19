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

[Token(Token = "0x2000301")]
[ComVisible(true)]
public sealed class RSACryptoServiceProvider : RSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000CC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static CspProviderFlags s_UseMachineKeyStore;

	[Token(Token = "0x4000CC4")]
	private const int PROV_RSA_FULL = 1;

	[Token(Token = "0x4000CC5")]
	private const int AT_KEYEXCHANGE = 1;

	[Token(Token = "0x4000CC6")]
	private const int AT_SIGNATURE = 2;

	[Token(Token = "0x4000CC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000CC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000CC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000CCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000CCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000CCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.RSAManaged rsa;

	[Token(Token = "0x170002C7")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001A39")]
		[Address(RVA = "0x5349200", Offset = "0x5348200", VA = "0x5349200", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C8")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001A3A")]
		[Address(RVA = "0x5349230", Offset = "0x5348230", VA = "0x5349230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x5349270", Offset = "0x5348270", VA = "0x5349270")]
		set
		{
		}
	}

	[Token(Token = "0x170002C9")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A4B")]
		[Address(RVA = "0x534A690", Offset = "0x5349690", VA = "0x534A690", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002CA")]
	public override int KeySize
	{
		[Token(Token = "0x6001A4C")]
		[Address(RVA = "0x534A6C0", Offset = "0x53496C0", VA = "0x534A6C0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002CB")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001A4D")]
		[Address(RVA = "0x534A6F0", Offset = "0x53496F0", VA = "0x534A6F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A4E")]
		[Address(RVA = "0x534A700", Offset = "0x5349700", VA = "0x534A700")]
		set
		{
		}
	}

	[Token(Token = "0x170002CC")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001A4F")]
		[Address(RVA = "0x534A790", Offset = "0x5349790", VA = "0x534A790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002CD")]
	[ComVisible(false)]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001A64")]
		[Address(RVA = "0x534BA60", Offset = "0x534AA60", VA = "0x534BA60", Slot = "51")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A3C")]
	[Address(RVA = "0x53492B0", Offset = "0x53482B0", VA = "0x53492B0", Slot = "29")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x53492F0", Offset = "0x53482F0", VA = "0x53492F0", Slot = "30")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x5349320", Offset = "0x5348320", VA = "0x5349320")]
	private static int GetAlgorithmId(HashAlgorithmName hashAlgorithm)
	{
		return default(int);
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x53494B0", Offset = "0x53484B0", VA = "0x53494B0", Slot = "25")]
	public override byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x5349890", Offset = "0x5348890", VA = "0x5349890", Slot = "26")]
	public override byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x5349CE0", Offset = "0x5348CE0", VA = "0x5349CE0", Slot = "27")]
	public override byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x5349F20", Offset = "0x5348F20", VA = "0x5349F20", Slot = "28")]
	public override bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x5349820", Offset = "0x5348820", VA = "0x5349820")]
	private static Exception PaddingModeNotSupported()
	{
		return null;
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x53468B0", Offset = "0x53458B0", VA = "0x53468B0")]
	public RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x534A1E0", Offset = "0x53491E0", VA = "0x534A1E0")]
	public RSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A46")]
	[Address(RVA = "0x534A1B0", Offset = "0x53491B0", VA = "0x534A1B0")]
	public RSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x534A230", Offset = "0x5349230", VA = "0x534A230")]
	public RSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x534A280", Offset = "0x5349280", VA = "0x534A280")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x534A4D0", Offset = "0x53494D0", VA = "0x534A4D0")]
	private void Common(CspParameters p)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x534A5F0", Offset = "0x53495F0", VA = "0x534A5F0", Slot = "1")]
	~RSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x5349AA0", Offset = "0x5348AA0", VA = "0x5349AA0")]
	public byte[] Decrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x534A990", Offset = "0x5349990", VA = "0x534A990", Slot = "34")]
	public override byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x5349770", Offset = "0x5348770", VA = "0x5349770")]
	public byte[] Encrypt(byte[] rgb, bool fOAEP)
	{
		return null;
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x534AC00", Offset = "0x5349C00", VA = "0x534AC00", Slot = "35")]
	public override byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x534AC30", Offset = "0x5349C30", VA = "0x534AC30", Slot = "36")]
	public override RSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(RSAParameters);
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x534ADA0", Offset = "0x5349DA0", VA = "0x534ADA0", Slot = "37")]
	public override void ImportParameters(RSAParameters parameters)
	{
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x534ADD0", Offset = "0x5349DD0", VA = "0x534ADD0")]
	private HashAlgorithm GetHash(object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x534AFD0", Offset = "0x5349FD0", VA = "0x534AFD0")]
	private HashAlgorithm GetHashFromString(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x534B290", Offset = "0x534A290", VA = "0x534B290")]
	public byte[] SignData(byte[] buffer, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x534B420", Offset = "0x534A420", VA = "0x534B420")]
	public byte[] SignData(Stream inputStream, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x534B380", Offset = "0x534A380", VA = "0x534B380")]
	public byte[] SignData(byte[] buffer, int offset, int count, object halg)
	{
		return null;
	}

	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x534B0F0", Offset = "0x534A0F0", VA = "0x534B0F0")]
	private string GetHashNameFromOID(string oid)
	{
		return null;
	}

	[Token(Token = "0x6001A5C")]
	[Address(RVA = "0x534B4A0", Offset = "0x534A4A0", VA = "0x534B4A0")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001A5D")]
	[Address(RVA = "0x5349EC0", Offset = "0x5348EC0", VA = "0x5349EC0")]
	private byte[] SignHash(byte[] rgbHash, int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A5E")]
	[Address(RVA = "0x534B580", Offset = "0x534A580", VA = "0x534B580")]
	private static HashAlgorithm InternalHashToHashAlgorithm(int calgHash)
	{
		return null;
	}

	[Token(Token = "0x6001A5F")]
	[Address(RVA = "0x534B7F0", Offset = "0x534A7F0", VA = "0x534B7F0")]
	public bool VerifyData(byte[] buffer, object halg, byte[] signature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A60")]
	[Address(RVA = "0x534B900", Offset = "0x534A900", VA = "0x534B900")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A61")]
	[Address(RVA = "0x534A140", Offset = "0x5349140", VA = "0x534A140")]
	private bool VerifyHash(byte[] rgbHash, int calgHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A62")]
	[Address(RVA = "0x534BA10", Offset = "0x534AA10", VA = "0x534BA10", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001A63")]
	[Address(RVA = "0x534A710", Offset = "0x5349710", VA = "0x534A710")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001A65")]
	[Address(RVA = "0x534BB10", Offset = "0x534AB10", VA = "0x534BB10", Slot = "52")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A66")]
	[Address(RVA = "0x534BB90", Offset = "0x534AB90", VA = "0x534BB90", Slot = "53")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
