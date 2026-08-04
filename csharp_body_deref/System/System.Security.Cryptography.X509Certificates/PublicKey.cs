// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.Cryptography.X509Certificates.PublicKey
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x49309D0", Offset = "0x49309D0", VA = "0x49309D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FD")]
	public AsnEncodedData EncodedParameters
	{
		[Token(Token = "0x6000556")]
		[Address(RVA = "0x49309E0", Offset = "0x49309E0", VA = "0x49309E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FE")]
	public AsymmetricAlgorithm Key
	{
		[Token(Token = "0x6000557")]
		[Address(RVA = "0x49309F0", Offset = "0x49309F0", VA = "0x49309F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public Oid Oid
	{
		[Token(Token = "0x6000558")]
		[Address(RVA = "0x49318E0", Offset = "0x49318E0", VA = "0x49318E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x4930850", Offset = "0x4930850", VA = "0x4930850")]
	public PublicKey(Oid oid, AsnEncodedData parameters, AsnEncodedData keyValue)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x49318F0", Offset = "0x49318F0", VA = "0x49318F0")]
	private static byte[] GetUnsignedBigInteger(byte[] integer)
	{
		return null;
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x49310D0", Offset = "0x49310D0", VA = "0x49310D0")]
	internal static DSA DecodeDSA(byte[] rawPublicKey, byte[] rawParameters)
	{
		return null;
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x4930B90", Offset = "0x4930B90", VA = "0x4930B90")]
	internal static RSA DecodeRSA(byte[] rawPublicKey)
	{
		return null;
	}
}
