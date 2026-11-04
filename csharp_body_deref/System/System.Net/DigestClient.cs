// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.DigestClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200031A")]
internal class DigestClient : IAuthenticationModule
{
	[Token(Token = "0x4000BDE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Hashtable cache;

	[Token(Token = "0x17000485")]
	private static Hashtable Cache
	{
		[Token(Token = "0x6001565")]
		[Address(RVA = "0x27DE670", Offset = "0x27DCC70", VA = "0x1827DE670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000486")]
	public string AuthenticationType
	{
		[Token(Token = "0x6001569")]
		[Address(RVA = "0x27DE640", Offset = "0x27DCC40", VA = "0x1827DE640", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001566")]
	[Address(RVA = "0x27DDD50", Offset = "0x27DC350", VA = "0x1827DDD50")]
	private static void CheckExpired(int count)
	{
	}

	[Token(Token = "0x6001567")]
	[Address(RVA = "0x27DDA10", Offset = "0x27DC010", VA = "0x1827DDA10", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x27DE420", Offset = "0x27DCA20", VA = "0x1827DE420", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DigestClient()
	{
	}
}
