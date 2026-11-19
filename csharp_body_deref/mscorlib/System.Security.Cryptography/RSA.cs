// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.RSA
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x2000300")]
[ComVisible(true)]
public abstract class RSA : AsymmetricAlgorithm
{
	[Token(Token = "0x170002C5")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x5347400", Offset = "0x5346400", VA = "0x5347400", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C6")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x5347430", Offset = "0x5346430", VA = "0x5347430", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A11")]
	[Address(RVA = "0x5346840", Offset = "0x5345840", VA = "0x5346840")]
	protected RSA()
	{
	}

	[Token(Token = "0x6001A12")]
	[Address(RVA = "0x5346850", Offset = "0x5345850", VA = "0x5346850")]
	public new static RSA Create()
	{
		return null;
	}

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x53468D0", Offset = "0x53458D0", VA = "0x53468D0")]
	public new static RSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x5346A50", Offset = "0x5345A50", VA = "0x5346A50", Slot = "25")]
	public virtual byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x5346AE0", Offset = "0x5345AE0", VA = "0x5346AE0", Slot = "26")]
	public virtual byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x5346B00", Offset = "0x5345B00", VA = "0x5346B00", Slot = "27")]
	public virtual byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x5346B20", Offset = "0x5345B20", VA = "0x5346B20", Slot = "28")]
	public virtual bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x5346B40", Offset = "0x5345B40", VA = "0x5346B40", Slot = "29")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x5346B60", Offset = "0x5345B60", VA = "0x5346B60", Slot = "30")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x5346B80", Offset = "0x5345B80", VA = "0x5346B80")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x5346C00", Offset = "0x5345C00", VA = "0x5346C00", Slot = "31")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x5346E40", Offset = "0x5345E40", VA = "0x5346E40", Slot = "32")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x5346F70", Offset = "0x5345F70", VA = "0x5346F70")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x5346FF0", Offset = "0x5345FF0", VA = "0x5346FF0", Slot = "33")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1F")]
	[Address(RVA = "0x53471E0", Offset = "0x53461E0", VA = "0x53471E0")]
	public bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x5346A70", Offset = "0x5345A70", VA = "0x5346A70")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x5346DC0", Offset = "0x5345DC0", VA = "0x5346DC0")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x5347340", Offset = "0x5346340", VA = "0x5347340", Slot = "34")]
	public virtual byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x53473A0", Offset = "0x53463A0", VA = "0x53473A0", Slot = "35")]
	public virtual byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A26")]
	[Address(RVA = "0x5347460", Offset = "0x5346460", VA = "0x5347460", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x5347E30", Offset = "0x5346E30", VA = "0x5347E30", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A28")]
	public abstract RSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001A29")]
	public abstract void ImportParameters(RSAParameters parameters);

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x5348200", Offset = "0x5347200", VA = "0x5348200")]
	public static RSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x5348300", Offset = "0x5347300", VA = "0x5348300")]
	public static RSA Create(RSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x5348430", Offset = "0x5347430", VA = "0x5348430", Slot = "38")]
	public virtual bool TryDecrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x5348530", Offset = "0x5347530", VA = "0x5348530", Slot = "39")]
	public virtual bool TryEncrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A2E")]
	[Address(RVA = "0x5348630", Offset = "0x5347630", VA = "0x5348630", Slot = "40")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x5348910", Offset = "0x5347910", VA = "0x5348910", Slot = "41")]
	public virtual bool TrySignHash(ReadOnlySpan<byte> hash, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x5348A20", Offset = "0x5347A20", VA = "0x5348A20", Slot = "42")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x5348BF0", Offset = "0x5347BF0", VA = "0x5348BF0", Slot = "43")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x5348FE0", Offset = "0x5347FE0", VA = "0x5348FE0", Slot = "44")]
	public virtual bool VerifyHash(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x5349080", Offset = "0x5348080", VA = "0x5349080", Slot = "45")]
	public virtual byte[] ExportRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x53490C0", Offset = "0x53480C0", VA = "0x53490C0", Slot = "46")]
	public virtual byte[] ExportRSAPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x5349100", Offset = "0x5348100", VA = "0x5349100", Slot = "47")]
	public virtual void ImportRSAPrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x5349140", Offset = "0x5348140", VA = "0x5349140", Slot = "48")]
	public virtual void ImportRSAPublicKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x5349180", Offset = "0x5348180", VA = "0x5349180", Slot = "49")]
	public virtual bool TryExportRSAPrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x53491C0", Offset = "0x53481C0", VA = "0x53491C0", Slot = "50")]
	public virtual bool TryExportRSAPublicKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
