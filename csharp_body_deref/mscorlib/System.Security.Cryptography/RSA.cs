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

[Token(Token = "0x2000327")]
[ComVisible(true)]
public abstract class RSA : AsymmetricAlgorithm
{
	[Token(Token = "0x170002C6")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x6001A47")]
		[Address(RVA = "0x19C8AF0", Offset = "0x19C70F0", VA = "0x1819C8AF0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C7")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x6001A48")]
		[Address(RVA = "0x19C8B20", Offset = "0x19C7120", VA = "0x1819C8B20", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected RSA()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x19C6400", Offset = "0x19C4A00", VA = "0x1819C6400")]
	public new static RSA Create()
	{
		return null;
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x19C6330", Offset = "0x19C4930", VA = "0x1819C6330")]
	public new static RSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x19C6780", Offset = "0x19C4D80", VA = "0x1819C6780", Slot = "25")]
	public virtual byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x19C6680", Offset = "0x19C4C80", VA = "0x1819C6680", Slot = "26")]
	public virtual byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A39")]
	[Address(RVA = "0x19C74F0", Offset = "0x19C5AF0", VA = "0x1819C74F0", Slot = "27")]
	public virtual byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x19C8AC0", Offset = "0x19C70C0", VA = "0x1819C8AC0", Slot = "28")]
	public virtual bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A3B")]
	[Address(RVA = "0x19C6FE0", Offset = "0x19C55E0", VA = "0x1819C6FE0", Slot = "29")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A3C")]
	[Address(RVA = "0x19C6FB0", Offset = "0x19C55B0", VA = "0x1819C6FB0", Slot = "30")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x19C7460", Offset = "0x19C5A60", VA = "0x1819C7460")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x19C7090", Offset = "0x19C5690", VA = "0x1819C7090", Slot = "31")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x19C72E0", Offset = "0x19C58E0", VA = "0x1819C72E0", Slot = "32")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x19C85B0", Offset = "0x19C6BB0", VA = "0x1819C85B0")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x19C8300", Offset = "0x19C6900", VA = "0x1819C8300", Slot = "33")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x19C8120", Offset = "0x19C6720", VA = "0x1819C8120")]
	public bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x19C66B0", Offset = "0x19C4CB0", VA = "0x1819C66B0")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x19C6F20", Offset = "0x19C5520", VA = "0x1819C6F20")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x19C6620", Offset = "0x19C4C20", VA = "0x1819C6620", Slot = "34")]
	public virtual byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A46")]
	[Address(RVA = "0x19C6720", Offset = "0x19C4D20", VA = "0x1819C6720", Slot = "35")]
	public virtual byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x19C6830", Offset = "0x19C4E30", VA = "0x1819C6830", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x19C7520", Offset = "0x19C5B20", VA = "0x1819C7520", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001A4B")]
	public abstract RSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001A4C")]
	public abstract void ImportParameters(RSAParameters parameters);

	[Token(Token = "0x6001A4D")]
	[Address(RVA = "0x19C6460", Offset = "0x19C4A60", VA = "0x1819C6460")]
	public static RSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x6001A4E")]
	[Address(RVA = "0x19C6520", Offset = "0x19C4B20", VA = "0x1819C6520")]
	public static RSA Create(RSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6001A4F")]
	[Address(RVA = "0x19C78D0", Offset = "0x19C5ED0", VA = "0x1819C78D0", Slot = "38")]
	public virtual bool TryDecrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A50")]
	[Address(RVA = "0x19C79E0", Offset = "0x19C5FE0", VA = "0x1819C79E0", Slot = "39")]
	public virtual bool TryEncrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A51")]
	[Address(RVA = "0x19C7B70", Offset = "0x19C6170", VA = "0x1819C7B70", Slot = "40")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A52")]
	[Address(RVA = "0x19C8000", Offset = "0x19C6600", VA = "0x1819C8000", Slot = "41")]
	public virtual bool TrySignHash(ReadOnlySpan<byte> hash, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A53")]
	[Address(RVA = "0x19C7DB0", Offset = "0x19C63B0", VA = "0x1819C7DB0", Slot = "42")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A54")]
	[Address(RVA = "0x19C8650", Offset = "0x19C6C50", VA = "0x1819C8650", Slot = "43")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A55")]
	[Address(RVA = "0x19C8A30", Offset = "0x19C7030", VA = "0x1819C8A30", Slot = "44")]
	public virtual bool VerifyHash(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A56")]
	[Address(RVA = "0x19C67B0", Offset = "0x19C4DB0", VA = "0x1819C67B0", Slot = "45")]
	public virtual byte[] ExportRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x6001A57")]
	[Address(RVA = "0x19C67F0", Offset = "0x19C4DF0", VA = "0x1819C67F0", Slot = "46")]
	public virtual byte[] ExportRSAPublicKey()
	{
		return null;
	}

	[Token(Token = "0x6001A58")]
	[Address(RVA = "0x19C7010", Offset = "0x19C5610", VA = "0x1819C7010", Slot = "47")]
	public virtual void ImportRSAPrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001A59")]
	[Address(RVA = "0x19C7050", Offset = "0x19C5650", VA = "0x1819C7050", Slot = "48")]
	public virtual void ImportRSAPublicKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x6001A5A")]
	[Address(RVA = "0x19C7AF0", Offset = "0x19C60F0", VA = "0x1819C7AF0", Slot = "49")]
	public virtual bool TryExportRSAPrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A5B")]
	[Address(RVA = "0x19C7B30", Offset = "0x19C6130", VA = "0x1819C7B30", Slot = "50")]
	public virtual bool TryExportRSAPublicKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
