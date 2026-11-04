// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.BasicClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000310")]
internal class BasicClient : IAuthenticationModule
{
	[Token(Token = "0x17000477")]
	public string AuthenticationType
	{
		[Token(Token = "0x600153D")]
		[Address(RVA = "0x27DCB10", Offset = "0x27DB110", VA = "0x1827DCB10", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x27DC6B0", Offset = "0x27DACB0", VA = "0x1827DC6B0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600153A")]
	[Address(RVA = "0x27DC760", Offset = "0x27DAD60", VA = "0x1827DC760")]
	private static byte[] GetBytes(string str)
	{
		return null;
	}

	[Token(Token = "0x600153B")]
	[Address(RVA = "0x27DC7F0", Offset = "0x27DADF0", VA = "0x1827DC7F0")]
	private static Authorization InternalAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600153C")]
	[Address(RVA = "0x27DCAF0", Offset = "0x27DB0F0", VA = "0x1827DCAF0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600153E")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public BasicClient()
	{
	}
}
