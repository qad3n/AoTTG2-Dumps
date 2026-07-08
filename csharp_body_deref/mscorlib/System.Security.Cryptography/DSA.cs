using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002DC")]
[ComVisible(true)]
public abstract class DSA : AsymmetricAlgorithm
{
	[Token(Token = "0x60018F1")]
	[Address(RVA = "0x4E49950", Offset = "0x4E49950", VA = "0x4E49950")]
	protected DSA()
	{
	}

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x4E49960", Offset = "0x4E49960", VA = "0x4E49960")]
	public new static DSA Create()
	{
		return null;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x4E499A0", Offset = "0x4E499A0", VA = "0x4E499A0")]
	public new static DSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x60018F4")]
	public abstract byte[] CreateSignature(byte[] rgbHash);

	[Token(Token = "0x60018F5")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x4E49A30", Offset = "0x4E49A30", VA = "0x4E49A30", Slot = "27")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F7")]
	[Address(RVA = "0x4E49AC0", Offset = "0x4E49AC0", VA = "0x4E49AC0", Slot = "28")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F8")]
	[Address(RVA = "0x4E49AE0", Offset = "0x4E49AE0", VA = "0x4E49AE0")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018F9")]
	[Address(RVA = "0x4E49B50", Offset = "0x4E49B50", VA = "0x4E49B50", Slot = "29")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018FA")]
	[Address(RVA = "0x4E49D00", Offset = "0x4E49D00", VA = "0x4E49D00", Slot = "30")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x60018FB")]
	[Address(RVA = "0x4E49DB0", Offset = "0x4E49DB0", VA = "0x4E49DB0")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FC")]
	[Address(RVA = "0x4E49E30", Offset = "0x4E49E30", VA = "0x4E49E30", Slot = "31")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FD")]
	[Address(RVA = "0x4E49FB0", Offset = "0x4E49FB0", VA = "0x4E49FB0", Slot = "32")]
	public virtual bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x60018FE")]
	[Address(RVA = "0x4E4A0A0", Offset = "0x4E4A0A0", VA = "0x4E4A0A0", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x60018FF")]
	[Address(RVA = "0x4E4A8A0", Offset = "0x4E4A8A0", VA = "0x4E4A8A0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001900")]
	public abstract DSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001901")]
	public abstract void ImportParameters(DSAParameters parameters);

	[Token(Token = "0x6001902")]
	[Address(RVA = "0x4E49A50", Offset = "0x4E49A50", VA = "0x4E49A50")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x6001903")]
	[Address(RVA = "0x4E49C80", Offset = "0x4E49C80", VA = "0x4E49C80")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x6001904")]
	[Address(RVA = "0x4E4ACD0", Offset = "0x4E4ACD0", VA = "0x4E4ACD0")]
	public static DSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x6001905")]
	[Address(RVA = "0x4E4ADC0", Offset = "0x4E4ADC0", VA = "0x4E4ADC0")]
	public static DSA Create(DSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x6001906")]
	[Address(RVA = "0x4E4AF10", Offset = "0x4E4AF10", VA = "0x4E4AF10", Slot = "35")]
	public virtual bool TryCreateSignature(ReadOnlySpan<byte> hash, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001907")]
	[Address(RVA = "0x4E4B000", Offset = "0x4E4B000", VA = "0x4E4B000", Slot = "36")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001908")]
	[Address(RVA = "0x4E4B330", Offset = "0x4E4B330", VA = "0x4E4B330", Slot = "37")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001909")]
	[Address(RVA = "0x4E4B470", Offset = "0x4E4B470", VA = "0x4E4B470", Slot = "38")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x600190A")]
	[Address(RVA = "0x4E4B810", Offset = "0x4E4B810", VA = "0x4E4B810", Slot = "39")]
	public virtual bool VerifySignature(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature)
	{
		return default(bool);
	}
}
