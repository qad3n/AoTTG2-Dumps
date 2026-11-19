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

[Token(Token = "0x20002E4")]
[ComVisible(true)]
public abstract class DSA : AsymmetricAlgorithm
{
	[Token(Token = "0x6001936")]
	[Address(RVA = "0x53394E0", Offset = "0x53384E0", VA = "0x53394E0")]
	protected DSA()
	{
	}

	[Token(Token = "0x6001937")]
	[Address(RVA = "0x53394F0", Offset = "0x53384F0", VA = "0x53394F0")]
	public new static DSA Create()
	{
		return null;
	}

	[Token(Token = "0x6001938")]
	[Address(RVA = "0x5339530", Offset = "0x5338530", VA = "0x5339530")]
	public new static DSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x6001939")]
	public abstract byte[] CreateSignature(byte[] rgbHash);

	[Token(Token = "0x600193A")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);

	[Token(Token = "0x600193B")]
	[Address(RVA = "0x53395C0", Offset = "0x53385C0", VA = "0x53395C0", Slot = "27")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600193C")]
	[Address(RVA = "0x5339650", Offset = "0x5338650", VA = "0x5339650", Slot = "28")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600193D")]
	[Address(RVA = "0x5339670", Offset = "0x5338670", VA = "0x5339670")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600193E")]
	[Address(RVA = "0x53396E0", Offset = "0x53386E0", VA = "0x53396E0", Slot = "29")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600193F")]
	[Address(RVA = "0x53398A0", Offset = "0x53388A0", VA = "0x53398A0", Slot = "30")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001940")]
	[Address(RVA = "0x5339950", Offset = "0x5338950", VA = "0x5339950")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001941")]
	[Address(RVA = "0x53399D0", Offset = "0x53389D0", VA = "0x53399D0", Slot = "31")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001942")]
	[Address(RVA = "0x5339B50", Offset = "0x5338B50", VA = "0x5339B50", Slot = "32")]
	public virtual bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001943")]
	[Address(RVA = "0x5339C40", Offset = "0x5338C40", VA = "0x5339C40", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001944")]
	[Address(RVA = "0x533A3D0", Offset = "0x53393D0", VA = "0x533A3D0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001945")]
	public abstract DSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001946")]
	public abstract void ImportParameters(DSAParameters parameters);

	[Token(Token = "0x6001947")]
	[Address(RVA = "0x53395E0", Offset = "0x53385E0", VA = "0x53395E0")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x6001948")]
	[Address(RVA = "0x5339820", Offset = "0x5338820", VA = "0x5339820")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x6001949")]
	[Address(RVA = "0x533A800", Offset = "0x5339800", VA = "0x533A800")]
	public static DSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x600194A")]
	[Address(RVA = "0x533A8F0", Offset = "0x53398F0", VA = "0x533A8F0")]
	public static DSA Create(DSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x600194B")]
	[Address(RVA = "0x533AA10", Offset = "0x5339A10", VA = "0x533AA10", Slot = "35")]
	public virtual bool TryCreateSignature(ReadOnlySpan<byte> hash, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600194C")]
	[Address(RVA = "0x533AB00", Offset = "0x5339B00", VA = "0x533AB00", Slot = "36")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600194D")]
	[Address(RVA = "0x533AE00", Offset = "0x5339E00", VA = "0x533AE00", Slot = "37")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600194E")]
	[Address(RVA = "0x533AF40", Offset = "0x5339F40", VA = "0x533AF40", Slot = "38")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x600194F")]
	[Address(RVA = "0x533B2A0", Offset = "0x533A2A0", VA = "0x533B2A0", Slot = "39")]
	public virtual bool VerifySignature(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature)
	{
		return default(bool);
	}
}
