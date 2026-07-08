using Il2CppDummyDll;

namespace Mono.Security.X509.Extensions;

[Token(Token = "0x200001B")]
public class AuthorityKeyIdentifierExtension : X509Extension
{
	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x28")]
	private byte[] aki;

	[Token(Token = "0x1700004A")]
	public byte[] Identifier
	{
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x3A4A280", Offset = "0x3A4A280", VA = "0x3A4A280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3A49DE0", Offset = "0x3A49DE0", VA = "0x3A49DE0")]
	public AuthorityKeyIdentifierExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3A49DF0", Offset = "0x3A49DF0", VA = "0x3A49DF0", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3A4A050", Offset = "0x3A4A050", VA = "0x3A4A050", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3A4A2F0", Offset = "0x3A4A2F0", VA = "0x3A4A2F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
