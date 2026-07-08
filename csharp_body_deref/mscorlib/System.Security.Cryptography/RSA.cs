using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002F8")]
[ComVisible(true)]
public abstract class RSA : AsymmetricAlgorithm
{
	[Token(Token = "0x170002C4")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60019DF")]
		[Address(RVA = "0x4E57EA0", Offset = "0x4E57EA0", VA = "0x4E57EA0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C5")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60019E0")]
		[Address(RVA = "0x4E57ED0", Offset = "0x4E57ED0", VA = "0x4E57ED0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x4E572E0", Offset = "0x4E572E0", VA = "0x4E572E0")]
	protected RSA()
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x4E572F0", Offset = "0x4E572F0", VA = "0x4E572F0")]
	public new static RSA Create()
	{
		return null;
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x4E57370", Offset = "0x4E57370", VA = "0x4E57370")]
	public new static RSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x4E574F0", Offset = "0x4E574F0", VA = "0x4E574F0", Slot = "25")]
	public virtual byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x4E57580", Offset = "0x4E57580", VA = "0x4E57580", Slot = "26")]
	public virtual byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x4E575A0", Offset = "0x4E575A0", VA = "0x4E575A0", Slot = "27")]
	public virtual byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x4E575C0", Offset = "0x4E575C0", VA = "0x4E575C0", Slot = "28")]
	public virtual bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x4E575E0", Offset = "0x4E575E0", VA = "0x4E575E0", Slot = "29")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x4E57600", Offset = "0x4E57600", VA = "0x4E57600", Slot = "30")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x4E57620", Offset = "0x4E57620", VA = "0x4E57620")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x4E576A0", Offset = "0x4E576A0", VA = "0x4E576A0", Slot = "31")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x4E578E0", Offset = "0x4E578E0", VA = "0x4E578E0", Slot = "32")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x4E57A10", Offset = "0x4E57A10", VA = "0x4E57A10")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x4E57A90", Offset = "0x4E57A90", VA = "0x4E57A90", Slot = "33")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x4E57C80", Offset = "0x4E57C80", VA = "0x4E57C80")]
	public bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x4E57510", Offset = "0x4E57510", VA = "0x4E57510")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x4E57860", Offset = "0x4E57860", VA = "0x4E57860")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x4E57DE0", Offset = "0x4E57DE0", VA = "0x4E57DE0", Slot = "34")]
	public virtual byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x4E57E40", Offset = "0x4E57E40", VA = "0x4E57E40", Slot = "35")]
	public virtual byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x4E57F00", Offset = "0x4E57F00", VA = "0x4E57F00", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x4E58930", Offset = "0x4E58930", VA = "0x4E58930", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60019E3")]
	public abstract RSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x60019E4")]
	public abstract void ImportParameters(RSAParameters parameters);

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x4E58D00", Offset = "0x4E58D00", VA = "0x4E58D00")]
	public static RSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x4E58E10", Offset = "0x4E58E10", VA = "0x4E58E10")]
	public static RSA Create(RSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x4E58F80", Offset = "0x4E58F80", VA = "0x4E58F80", Slot = "38")]
	public virtual bool TryDecrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x4E59080", Offset = "0x4E59080", VA = "0x4E59080", Slot = "39")]
	public virtual bool TryEncrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x4E59180", Offset = "0x4E59180", VA = "0x4E59180", Slot = "40")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x4E59470", Offset = "0x4E59470", VA = "0x4E59470", Slot = "41")]
	public virtual bool TrySignHash(ReadOnlySpan<byte> hash, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x4E59580", Offset = "0x4E59580", VA = "0x4E59580", Slot = "42")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x4E59750", Offset = "0x4E59750", VA = "0x4E59750", Slot = "43")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x4E59B80", Offset = "0x4E59B80", VA = "0x4E59B80", Slot = "44")]
	public virtual bool VerifyHash(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x4E59C20", Offset = "0x4E59C20", VA = "0x4E59C20", Slot = "45")]
	public virtual byte[] ExportRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x4E59C60", Offset = "0x4E59C60", VA = "0x4E59C60", Slot = "46")]
	public virtual byte[] ExportRSAPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x4E59CA0", Offset = "0x4E59CA0", VA = "0x4E59CA0", Slot = "47")]
	public virtual void ImportRSAPrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x4E59CE0", Offset = "0x4E59CE0", VA = "0x4E59CE0", Slot = "48")]
	public virtual void ImportRSAPublicKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x4E59D20", Offset = "0x4E59D20", VA = "0x4E59D20", Slot = "49")]
	public virtual bool TryExportRSAPrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x4E59D60", Offset = "0x4E59D60", VA = "0x4E59D60", Slot = "50")]
	public virtual bool TryExportRSAPublicKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
