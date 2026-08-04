// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.SafeBag
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3AA1AB0", Offset = "0x3AA1AB0", VA = "0x3AA1AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000017")]
	public ASN1 ASN1
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3AA1AC0", Offset = "0x3AA1AC0", VA = "0x3AA1AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3AA1A70", Offset = "0x3AA1A70", VA = "0x3AA1A70")]
	public SafeBag(string bagOID, ASN1 asn1)
	{
	}
}
