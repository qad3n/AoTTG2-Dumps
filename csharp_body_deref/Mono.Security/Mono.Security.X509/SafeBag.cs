using Il2CppDummyDll;

namespace Mono.Security.X509;

[Token(Token = "0x200000B")]
internal class SafeBag
{
	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x10")]
	private string _bagOID;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x18")]
	private ASN1 _asn1;

	[Token(Token = "0x17000016")]
	public string BagOID
	{
		[Token(Token = "0x6000042")]
		[Address(RVA = "0x3A34DF0", Offset = "0x3A34DF0", VA = "0x3A34DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public ASN1 ASN1
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3A34E00", Offset = "0x3A34E00", VA = "0x3A34E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3A34DB0", Offset = "0x3A34DB0", VA = "0x3A34DB0")]
	public SafeBag(string bagOID, ASN1 asn1)
	{
	}
}
