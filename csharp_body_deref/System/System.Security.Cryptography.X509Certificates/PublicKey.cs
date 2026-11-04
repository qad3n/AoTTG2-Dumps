// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.PublicKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x2000135")]
public sealed class PublicKey
{
	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x10")]
	private AsnEncodedData _keyValue;

	[Token(Token = "0x4000599")]
	[FieldOffset(Offset = "0x18")]
	private AsnEncodedData _params;

	[Token(Token = "0x400059A")]
	[FieldOffset(Offset = "0x20")]
	private Oid _oid;

	[Token(Token = "0x400059B")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x17000135")]
	public AsnEncodedData EncodedKeyValue
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000136")]
	public AsnEncodedData EncodedParameters
	{
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000137")]
	public AsymmetricAlgorithm Key
	{
		[Token(Token = "0x6000738")]
		[Address(RVA = "0x287FA70", Offset = "0x287E070", VA = "0x18287FA70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000138")]
	public Oid Oid
	{
		[Token(Token = "0x6000739")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000735")]
	[Address(RVA = "0x287F870", Offset = "0x287DE70", VA = "0x18287F870")]
	public PublicKey(Oid oid, AsnEncodedData parameters, AsnEncodedData keyValue)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x287F760", Offset = "0x287DD60", VA = "0x18287F760")]
	private static byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x287EF10", Offset = "0x287D510", VA = "0x18287EF10")]
	internal static DSA DecodeDSA(byte[] rawPublicKey, byte[] rawParameters)
	{
		return null;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x287F400", Offset = "0x287DA00", VA = "0x18287F400")]
	internal static RSA DecodeRSA(byte[] rawPublicKey)
	{
		return null;
	}
}
