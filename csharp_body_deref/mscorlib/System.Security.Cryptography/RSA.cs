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

[Token(Token = "0x20002F8")]
[ComVisible(true)]
public abstract class RSA : AsymmetricAlgorithm
{
	[Token(Token = "0x170002C4")]
	public override string KeyExchangeAlgorithm
	{
		[Token(Token = "0x60019DF")]
		[Address(RVA = "0x3B3D9C0", Offset = "0x3B3D9C0", VA = "0x3B3D9C0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002C5")]
	public override string SignatureAlgorithm
	{
		[Token(Token = "0x60019E0")]
		[Address(RVA = "0x3B3D9F0", Offset = "0x3B3D9F0", VA = "0x3B3D9F0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60019CC")]
	[Address(RVA = "0x3B3CE00", Offset = "0x3B3CE00", VA = "0x3B3CE00")]
	protected RSA()
	{
	}

	[Token(Token = "0x60019CD")]
	[Address(RVA = "0x3B3CE10", Offset = "0x3B3CE10", VA = "0x3B3CE10")]
	public new static RSA Create()
	{
		return null;
	}

	[Token(Token = "0x60019CE")]
	[Address(RVA = "0x3B3CE90", Offset = "0x3B3CE90", VA = "0x3B3CE90")]
	public new static RSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60019CF")]
	[Address(RVA = "0x3B3D010", Offset = "0x3B3D010", VA = "0x3B3D010", Slot = "25")]
	public virtual byte[] Encrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D0")]
	[Address(RVA = "0x3B3D0A0", Offset = "0x3B3D0A0", VA = "0x3B3D0A0", Slot = "26")]
	public virtual byte[] Decrypt(byte[] data, RSAEncryptionPadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D1")]
	[Address(RVA = "0x3B3D0C0", Offset = "0x3B3D0C0", VA = "0x3B3D0C0", Slot = "27")]
	public virtual byte[] SignHash(byte[] hash, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D2")]
	[Address(RVA = "0x3B3D0E0", Offset = "0x3B3D0E0", VA = "0x3B3D0E0", Slot = "28")]
	public virtual bool VerifyHash(byte[] hash, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D3")]
	[Address(RVA = "0x3B3D100", Offset = "0x3B3D100", VA = "0x3B3D100", Slot = "29")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019D4")]
	[Address(RVA = "0x3B3D120", Offset = "0x3B3D120", VA = "0x3B3D120", Slot = "30")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60019D5")]
	[Address(RVA = "0x3B3D140", Offset = "0x3B3D140", VA = "0x3B3D140")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D6")]
	[Address(RVA = "0x3B3D1C0", Offset = "0x3B3D1C0", VA = "0x3B3D1C0", Slot = "31")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D7")]
	[Address(RVA = "0x3B3D400", Offset = "0x3B3D400", VA = "0x3B3D400", Slot = "32")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return null;
	}

	[Token(Token = "0x60019D8")]
	[Address(RVA = "0x3B3D530", Offset = "0x3B3D530", VA = "0x3B3D530")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x3B3D5B0", Offset = "0x3B3D5B0", VA = "0x3B3D5B0", Slot = "33")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x3B3D7A0", Offset = "0x3B3D7A0", VA = "0x3B3D7A0")]
	public bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x3B3D030", Offset = "0x3B3D030", VA = "0x3B3D030")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x3B3D380", Offset = "0x3B3D380", VA = "0x3B3D380")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x3B3D900", Offset = "0x3B3D900", VA = "0x3B3D900", Slot = "34")]
	public virtual byte[] DecryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x3B3D960", Offset = "0x3B3D960", VA = "0x3B3D960", Slot = "35")]
	public virtual byte[] EncryptValue(byte[] rgb)
	{
		return null;
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x3B3DA20", Offset = "0x3B3DA20", VA = "0x3B3DA20", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x3B3E450", Offset = "0x3B3E450", VA = "0x3B3E450", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x60019E3")]
	public abstract RSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x60019E4")]
	public abstract void ImportParameters(RSAParameters parameters);

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x3B3E820", Offset = "0x3B3E820", VA = "0x3B3E820")]
	public static RSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x3B3E930", Offset = "0x3B3E930", VA = "0x3B3E930")]
	public static RSA Create(RSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x3B3EAA0", Offset = "0x3B3EAA0", VA = "0x3B3EAA0", Slot = "38")]
	public virtual bool TryDecrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x3B3EBA0", Offset = "0x3B3EBA0", VA = "0x3B3EBA0", Slot = "39")]
	public virtual bool TryEncrypt(ReadOnlySpan<byte> data, Span<byte> destination, RSAEncryptionPadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019E9")]
	[Address(RVA = "0x3B3ECA0", Offset = "0x3B3ECA0", VA = "0x3B3ECA0", Slot = "40")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x3B3EF90", Offset = "0x3B3EF90", VA = "0x3B3EF90", Slot = "41")]
	public virtual bool TrySignHash(ReadOnlySpan<byte> hash, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x3B3F0A0", Offset = "0x3B3F0A0", VA = "0x3B3F0A0", Slot = "42")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x3B3F270", Offset = "0x3B3F270", VA = "0x3B3F270", Slot = "43")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x3B3F6A0", Offset = "0x3B3F6A0", VA = "0x3B3F6A0", Slot = "44")]
	public virtual bool VerifyHash(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm, RSASignaturePadding padding)
	{
		return default(bool);
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x3B3F740", Offset = "0x3B3F740", VA = "0x3B3F740", Slot = "45")]
	public virtual byte[] ExportRSAPrivateKey()
	{
		return null;
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x3B3F780", Offset = "0x3B3F780", VA = "0x3B3F780", Slot = "46")]
	public virtual byte[] ExportRSAPublicKey()
	{
		return null;
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x3B3F7C0", Offset = "0x3B3F7C0", VA = "0x3B3F7C0", Slot = "47")]
	public virtual void ImportRSAPrivateKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x3B3F800", Offset = "0x3B3F800", VA = "0x3B3F800", Slot = "48")]
	public virtual void ImportRSAPublicKey(ReadOnlySpan<byte> source, out int bytesRead)
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x3B3F840", Offset = "0x3B3F840", VA = "0x3B3F840", Slot = "49")]
	public virtual bool TryExportRSAPrivateKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x3B3F880", Offset = "0x3B3F880", VA = "0x3B3F880", Slot = "50")]
	public virtual bool TryExportRSAPublicKey(Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}
}
