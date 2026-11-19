// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.PublicKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F6")]
public sealed class PublicKey
{
	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x10")]
	private AsnEncodedData _keyValue;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x18")]
	private AsnEncodedData _params;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x20")]
	private Oid _oid;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x17000106")]
	public AsnEncodedData EncodedKeyValue
	{
		[Token(Token = "0x600057F")]
		[Address(RVA = "0x620C0A0", Offset = "0x620B0A0", VA = "0x620C0A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000107")]
	public AsnEncodedData EncodedParameters
	{
		[Token(Token = "0x6000580")]
		[Address(RVA = "0x620C0B0", Offset = "0x620B0B0", VA = "0x620C0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000108")]
	public AsymmetricAlgorithm Key
	{
		[Token(Token = "0x6000581")]
		[Address(RVA = "0x620C0C0", Offset = "0x620B0C0", VA = "0x620C0C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000109")]
	public Oid Oid
	{
		[Token(Token = "0x6000582")]
		[Address(RVA = "0x620CD30", Offset = "0x620BD30", VA = "0x620CD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x620BF20", Offset = "0x620AF20", VA = "0x620BF20")]
	public PublicKey(Oid oid, AsnEncodedData parameters, AsnEncodedData keyValue)
	{
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x620CD40", Offset = "0x620BD40", VA = "0x620CD40")]
	private static byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x620C6A0", Offset = "0x620B6A0", VA = "0x620C6A0")]
	internal static DSA DecodeDSA(byte[] rawPublicKey, byte[] rawParameters)
	{
		return null;
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x620C260", Offset = "0x620B260", VA = "0x620C260")]
	internal static RSA DecodeRSA(byte[] rawPublicKey)
	{
		return null;
	}
}
