// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.DSA
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DC")]
[ComVisible(true)]
public abstract class DSA : AsymmetricAlgorithm
{
	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x3B2F470", Offset = "0x3B2F470", VA = "0x3B2F470")]
	protected DSA()
	{
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x3B2F480", Offset = "0x3B2F480", VA = "0x3B2F480")]
	public new static DSA Create()
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x3B2F4C0", Offset = "0x3B2F4C0", VA = "0x3B2F4C0")]
	public new static DSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	public abstract byte[] CreateSignature(byte[] rgbHash);

	[Token(Token = "0x60018F5")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x3B2F550", Offset = "0x3B2F550", VA = "0x3B2F550", Slot = "27")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x3B2F5E0", Offset = "0x3B2F5E0", VA = "0x3B2F5E0", Slot = "28")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x3B2F600", Offset = "0x3B2F600", VA = "0x3B2F600")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x3B2F670", Offset = "0x3B2F670", VA = "0x3B2F670", Slot = "29")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x3B2F820", Offset = "0x3B2F820", VA = "0x3B2F820", Slot = "30")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x3B2F8D0", Offset = "0x3B2F8D0", VA = "0x3B2F8D0")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x3B2F950", Offset = "0x3B2F950", VA = "0x3B2F950", Slot = "31")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x3B2FAD0", Offset = "0x3B2FAD0", VA = "0x3B2FAD0", Slot = "32")]
	public virtual bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x3B2FBC0", Offset = "0x3B2FBC0", VA = "0x3B2FBC0", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x3B303C0", Offset = "0x3B303C0", VA = "0x3B303C0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	public abstract DSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001901")]
	public abstract void ImportParameters(DSAParameters parameters);

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x3B2F570", Offset = "0x3B2F570", VA = "0x3B2F570")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x3B2F7A0", Offset = "0x3B2F7A0", VA = "0x3B2F7A0")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x3B307F0", Offset = "0x3B307F0", VA = "0x3B307F0")]
	public static DSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x6001905")]
	[Address(RVA = "0x3B308E0", Offset = "0x3B308E0", VA = "0x3B308E0")]
	public static DSA Create(DSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6001906")]
	[Address(RVA = "0x3B30A30", Offset = "0x3B30A30", VA = "0x3B30A30", Slot = "35")]
	public virtual bool TryCreateSignature(ReadOnlySpan<byte> hash, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001907")]
	[Address(RVA = "0x3B30B20", Offset = "0x3B30B20", VA = "0x3B30B20", Slot = "36")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x3B30E50", Offset = "0x3B30E50", VA = "0x3B30E50", Slot = "37")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x3B30F90", Offset = "0x3B30F90", VA = "0x3B30F90", Slot = "38")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x3B31330", Offset = "0x3B31330", VA = "0x3B31330", Slot = "39")]
	public virtual bool VerifySignature(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature)
	{
		return default(bool);
	}
}
