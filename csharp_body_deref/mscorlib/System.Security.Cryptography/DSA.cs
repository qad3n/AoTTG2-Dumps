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

[Token(Token = "0x200030B")]
[ComVisible(true)]
public abstract class DSA : AsymmetricAlgorithm
{
	[Token(Token = "0x6001959")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected DSA()
	{
	}

	[Token(Token = "0x600195A")]
	[Address(RVA = "0x19A5840", Offset = "0x19A3E40", VA = "0x1819A5840")]
	public new static DSA Create()
	{
		return null;
	}

	[Token(Token = "0x600195B")]
	[Address(RVA = "0x19A5940", Offset = "0x19A3F40", VA = "0x1819A5940")]
	public new static DSA Create(string algName)
	{
		return null;
	}

	[Token(Token = "0x600195C")]
	public abstract byte[] CreateSignature(byte[] rgbHash);

	[Token(Token = "0x600195D")]
	public abstract bool VerifySignature(byte[] rgbHash, byte[] rgbSignature);

	[Token(Token = "0x600195E")]
	[Address(RVA = "0x19A6670", Offset = "0x19A4C70", VA = "0x1819A6670", Slot = "27")]
	protected virtual byte[] HashData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x600195F")]
	[Address(RVA = "0x19A6640", Offset = "0x19A4C40", VA = "0x1819A6640", Slot = "28")]
	protected virtual byte[] HashData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001960")]
	[Address(RVA = "0x19A66A0", Offset = "0x19A4CA0", VA = "0x1819A66A0")]
	public byte[] SignData(byte[] data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001961")]
	[Address(RVA = "0x19A6730", Offset = "0x19A4D30", VA = "0x1819A6730", Slot = "29")]
	public virtual byte[] SignData(byte[] data, int offset, int count, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001962")]
	[Address(RVA = "0x19A68D0", Offset = "0x19A4ED0", VA = "0x1819A68D0", Slot = "30")]
	public virtual byte[] SignData(Stream data, HashAlgorithmName hashAlgorithm)
	{
		return null;
	}

	[Token(Token = "0x6001963")]
	[Address(RVA = "0x19A72B0", Offset = "0x19A58B0", VA = "0x1819A72B0")]
	public bool VerifyData(byte[] data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001964")]
	[Address(RVA = "0x19A7340", Offset = "0x19A5940", VA = "0x1819A7340", Slot = "31")]
	public virtual bool VerifyData(byte[] data, int offset, int count, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001965")]
	[Address(RVA = "0x19A7540", Offset = "0x19A5B40", VA = "0x1819A7540", Slot = "32")]
	public virtual bool VerifyData(Stream data, byte[] signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001966")]
	[Address(RVA = "0x19A5B30", Offset = "0x19A4130", VA = "0x1819A5B30", Slot = "11")]
	public override void FromXmlString(string xmlString)
	{
	}

	[Token(Token = "0x6001967")]
	[Address(RVA = "0x19A69B0", Offset = "0x19A4FB0", VA = "0x1819A69B0", Slot = "12")]
	public override string ToXmlString(bool includePrivateParameters)
	{
		return null;
	}

	[Token(Token = "0x6001968")]
	public abstract DSAParameters ExportParameters(bool includePrivateParameters);

	[Token(Token = "0x6001969")]
	public abstract void ImportParameters(DSAParameters parameters);

	[Token(Token = "0x600196A")]
	[Address(RVA = "0x19A5AC0", Offset = "0x19A40C0", VA = "0x1819A5AC0")]
	private static Exception DerivedClassMustOverride()
	{
		return null;
	}

	[Token(Token = "0x600196B")]
	[Address(RVA = "0x19A65B0", Offset = "0x19A4BB0", VA = "0x1819A65B0")]
	internal static Exception HashAlgorithmNameNullOrEmpty()
	{
		return null;
	}

	[Token(Token = "0x600196C")]
	[Address(RVA = "0x19A5890", Offset = "0x19A3E90", VA = "0x1819A5890")]
	public static DSA Create(int keySizeInBits)
	{
		return null;
	}

	[Token(Token = "0x600196D")]
	[Address(RVA = "0x19A59E0", Offset = "0x19A3FE0", VA = "0x1819A59E0")]
	public static DSA Create(DSAParameters parameters)
	{
		return null;
	}

	[Token(Token = "0x600196E")]
	[Address(RVA = "0x19A6DC0", Offset = "0x19A53C0", VA = "0x1819A6DC0", Slot = "35")]
	public virtual bool TryCreateSignature(ReadOnlySpan<byte> hash, Span<byte> destination, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x600196F")]
	[Address(RVA = "0x19A6EC0", Offset = "0x19A54C0", VA = "0x1819A6EC0", Slot = "36")]
	protected virtual bool TryHashData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001970")]
	[Address(RVA = "0x19A7100", Offset = "0x19A5700", VA = "0x1819A7100", Slot = "37")]
	public virtual bool TrySignData(ReadOnlySpan<byte> data, Span<byte> destination, HashAlgorithmName hashAlgorithm, out int bytesWritten)
	{
		return default(bool);
	}

	[Token(Token = "0x6001971")]
	[Address(RVA = "0x19A7670", Offset = "0x19A5C70", VA = "0x1819A7670", Slot = "38")]
	public virtual bool VerifyData(ReadOnlySpan<byte> data, ReadOnlySpan<byte> signature, HashAlgorithmName hashAlgorithm)
	{
		return default(bool);
	}

	[Token(Token = "0x6001972")]
	[Address(RVA = "0x19A79B0", Offset = "0x19A5FB0", VA = "0x1819A79B0", Slot = "39")]
	public virtual bool VerifySignature(ReadOnlySpan<byte> hash, ReadOnlySpan<byte> signature)
	{
		return default(bool);
	}
}
