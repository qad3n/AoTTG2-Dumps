using Il2CppDummyDll;

namespace System.Security.Cryptography.X509Certificates;

[Token(Token = "0x20000F5")]
public sealed class PublicKey
{
	[Token(Token = "0x40004C6")]
	[FieldOffset(Offset = "0x10")]
	private AsnEncodedData _keyValue;

	[Token(Token = "0x40004C7")]
	[FieldOffset(Offset = "0x18")]
	private AsnEncodedData _params;

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x20")]
	private Oid _oid;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x0")]
	private static byte[] Empty;

	[Token(Token = "0x170000FC")]
	public AsnEncodedData EncodedKeyValue
	{
		[Token(Token = "0x6000555")]
		[Address(RVA = "0x460B8D0", Offset = "0x460B8D0", VA = "0x460B8D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	public AsnEncodedData EncodedParameters
	{
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x460B8E0", Offset = "0x460B8E0", VA = "0x460B8E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	public AsymmetricAlgorithm Key
	{
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x460B8F0", Offset = "0x460B8F0", VA = "0x460B8F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public Oid Oid
	{
		[Token(Token = "0x6000558")]
		[Address(RVA = "0x460C7E0", Offset = "0x460C7E0", VA = "0x460C7E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x460B750", Offset = "0x460B750", VA = "0x460B750")]
	public PublicKey(Oid oid, AsnEncodedData parameters, AsnEncodedData keyValue)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x460C7F0", Offset = "0x460C7F0", VA = "0x460C7F0")]
	private static byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x460BFD0", Offset = "0x460BFD0", VA = "0x460BFD0")]
	internal static DSA DecodeDSA(byte[] rawPublicKey, byte[] rawParameters)
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x460BA90", Offset = "0x460BA90", VA = "0x460BA90")]
	internal static RSA DecodeRSA(byte[] rawPublicKey)
	{
		return null;
	}
}
