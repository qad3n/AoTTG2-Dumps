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

[Token(Token = "0x2000346")]
[ComVisible(true)]
public sealed class DSACryptoServiceProvider : DSA, ICspAsymmetricAlgorithm
{
	[Token(Token = "0x4000DF8")]
	private const int PROV_DSS_DH = 13;

	[Token(Token = "0x4000DF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Mono.Security.Cryptography.KeyPairPersistence store;

	[Token(Token = "0x4000DFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private bool persistKey;

	[Token(Token = "0x4000DFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
	private bool persisted;

	[Token(Token = "0x4000DFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A")]
	private bool privateKeyExportable;

	[Token(Token = "0x4000DFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B")]
	private bool m_disposed;

	[Token(Token = "0x4000DFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Mono.Security.Cryptography.DSAManaged dsa;

	[Token(Token = "0x4000DFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool useMachineKeyStore;

	[Token(Token = "0x170002FD")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001B85")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002FE")]
	public override int KeySize
	{
		[Token(Token = "0x6001B86")]
		[Address(RVA = "0x19BF590", Offset = "0x19BDB90", VA = "0x1819BF590", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002FF")]
	public bool PersistKeyInCsp
	{
		[Token(Token = "0x6001B87")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B88")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x17000300")]
	[ComVisible(false)]
	public bool PublicOnly
	{
		[Token(Token = "0x6001B89")]
		[Address(RVA = "0x19BF5C0", Offset = "0x19BDBC0", VA = "0x1819BF5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000301")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001B8A")]
		[Address(RVA = "0x19BF5E0", Offset = "0x19BDBE0", VA = "0x1819BF5E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000302")]
	public static bool UseMachineKeyStore
	{
		[Token(Token = "0x6001B8B")]
		[Address(RVA = "0x19BF610", Offset = "0x19BDC10", VA = "0x1819BF610")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001B8C")]
		[Address(RVA = "0x19BF650", Offset = "0x19BDC50", VA = "0x1819BF650")]
		set
		{
		}
	}

	[Token(Token = "0x17000303")]
	[ComVisible(false)]
	[System.MonoTODO("call into KeyPairPersistence to get details")]
	public CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x6001B9B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001B7E")]
	[Address(RVA = "0x19BF380", Offset = "0x19BD980", VA = "0x1819BF380")]
	public DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B7F")]
	[Address(RVA = "0x19BF4A0", Offset = "0x19BDAA0", VA = "0x1819BF4A0")]
	public DSACryptoServiceProvider(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B80")]
	[Address(RVA = "0x19BF340", Offset = "0x19BD940", VA = "0x1819BF340")]
	public DSACryptoServiceProvider(int dwKeySize)
	{
	}

	[Token(Token = "0x6001B81")]
	[Address(RVA = "0x19BF3B0", Offset = "0x19BD9B0", VA = "0x1819BF3B0")]
	public DSACryptoServiceProvider(int dwKeySize, CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B82")]
	[Address(RVA = "0x19BE5F0", Offset = "0x19BCBF0", VA = "0x1819BE5F0")]
	private void Common(int dwKeySize, bool parameters)
	{
	}

	[Token(Token = "0x6001B83")]
	[Address(RVA = "0x19BE520", Offset = "0x19BCB20", VA = "0x1819BE520")]
	private void Common(CspParameters parameters)
	{
	}

	[Token(Token = "0x6001B84")]
	[Address(RVA = "0x193BBF0", Offset = "0x193A1F0", VA = "0x18193BBF0", Slot = "1")]
	~DSACryptoServiceProvider()
	{
	}

	[Token(Token = "0x6001B8D")]
	[Address(RVA = "0x19BE8B0", Offset = "0x19BCEB0", VA = "0x1819BE8B0", Slot = "33")]
	public override DSAParameters ExportParameters(bool includePrivateParameters)
	{
		return default(DSAParameters);
	}

	[Token(Token = "0x6001B8E")]
	[Address(RVA = "0x19BEDD0", Offset = "0x19BD3D0", VA = "0x1819BEDD0", Slot = "34")]
	public override void ImportParameters(DSAParameters parameters)
	{
	}

	[Token(Token = "0x6001B8F")]
	[Address(RVA = "0x19BE810", Offset = "0x19BCE10", VA = "0x1819BE810", Slot = "25")]
	public override byte[] CreateSignature(byte[] rgbHash)
	{
		return null;
	}

	[Token(Token = "0x6001B90")]
	[Address(RVA = "0x19BEEA0", Offset = "0x19BD4A0", VA = "0x1819BEEA0")]
	public byte[] SignData(byte[] buffer)
	{
		return null;
	}

	[Token(Token = "0x6001B91")]
	[Address(RVA = "0x19BEF30", Offset = "0x19BD530", VA = "0x1819BEF30")]
	public byte[] SignData(byte[] buffer, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6001B92")]
	[Address(RVA = "0x19BEFD0", Offset = "0x19BD5D0", VA = "0x1819BEFD0")]
	public byte[] SignData(Stream inputStream)
	{
		return null;
	}

	[Token(Token = "0x6001B93")]
	[Address(RVA = "0x19BF060", Offset = "0x19BD660", VA = "0x1819BF060")]
	public byte[] SignHash(byte[] rgbHash, string str)
	{
		return null;
	}

	[Token(Token = "0x6001B94")]
	[Address(RVA = "0x19BF170", Offset = "0x19BD770", VA = "0x1819BF170")]
	public bool VerifyData(byte[] rgbData, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x19BF200", Offset = "0x19BD800", VA = "0x1819BF200")]
	public bool VerifyHash(byte[] rgbHash, string str, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x19BF310", Offset = "0x19BD910", VA = "0x1819BF310", Slot = "26")]
	public override bool VerifySignature(byte[] rgbHash, byte[] rgbSignature)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x19BEA80", Offset = "0x19BD080", VA = "0x1819BEA80", Slot = "27")]
	protected override byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x19BE970", Offset = "0x19BCF70", VA = "0x1819BE970", Slot = "28")]
	protected override byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001B99")]
	[Address(RVA = "0x19BE840", Offset = "0x19BCE40", VA = "0x1819BE840", Slot = "5")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001B9A")]
	[Address(RVA = "0x19BEE20", Offset = "0x19BD420", VA = "0x1819BEE20")]
	private void OnKeyGenerated(object sender, EventArgs e)
	{
	}

	[Token(Token = "0x6001B9C")]
	[Address(RVA = "0x19BE890", Offset = "0x19BCE90", VA = "0x1819BE890", Slot = "41")]
	[ComVisible(false)]
	public byte[] ExportCspBlob(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001B9D")]
	[Address(RVA = "0x19BEBA0", Offset = "0x19BD1A0", VA = "0x1819BEBA0", Slot = "42")]
	[ComVisible(false)]
	public void ImportCspBlob(byte[] keyBlob)
	{
	}
}
