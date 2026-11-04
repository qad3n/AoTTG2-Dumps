// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Mono.Security.X509.Extensions;

[Token(Token = "0x200002D")]
public class AuthorityKeyIdentifierExtension : X509Extension
{
	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x28")]
	private byte[] aki;

	[Token(Token = "0x1700004D")]
	public byte[] Identifier
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x19132E0", Offset = "0x19118E0", VA = "0x1819132E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x19132D0", Offset = "0x19118D0", VA = "0x1819132D0")]
	public AuthorityKeyIdentifierExtension(X509Extension extension)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x1912E80", Offset = "0x1911480", VA = "0x181912E80", Slot = "4")]
	protected override void Decode()
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x1912FD0", Offset = "0x19115D0", VA = "0x181912FD0", Slot = "5")]
	protected override void Encode()
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x1913140", Offset = "0x1911740", VA = "0x181913140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
