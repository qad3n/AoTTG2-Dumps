// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3AB6F40", Offset = "0x3AB6F40", VA = "0x3AB6F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x3AB6AA0", Offset = "0x3AB6AA0", VA = "0x3AB6AA0")]
	public AuthorityKeyIdentifierExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x3AB6AB0", Offset = "0x3AB6AB0", VA = "0x3AB6AB0", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x3AB6D10", Offset = "0x3AB6D10", VA = "0x3AB6D10", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x3AB6FB0", Offset = "0x3AB6FB0", VA = "0x3AB6FB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
