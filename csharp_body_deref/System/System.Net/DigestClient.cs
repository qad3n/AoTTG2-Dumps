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

[Token(Token = "0x2000192")]
internal class DigestClient : IAuthenticationModule
{
	[Token(Token = "0x40007C8")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Hashtable cache;

	[Token(Token = "0x17000230")]
	private static Hashtable Cache
	{
		[Token(Token = "0x60009A5")]
		[Address(RVA = "0x497F860", Offset = "0x497F860", VA = "0x497F860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000231")]
	public string AuthenticationType
	{
		[Token(Token = "0x60009A9")]
		[Address(RVA = "0x4980850", Offset = "0x4980850", VA = "0x4980850", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A6")]
	[Address(RVA = "0x497F9E0", Offset = "0x497F9E0", VA = "0x497F9E0")]
	private static void CheckExpired(int count)
	{
	}

	[Token(Token = "0x60009A7")]
	[Address(RVA = "0x49803A0", Offset = "0x49803A0", VA = "0x49803A0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60009A8")]
	[Address(RVA = "0x49806D0", Offset = "0x49806D0", VA = "0x49806D0", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x4980880", Offset = "0x4980880", VA = "0x4980880")]
	public DigestClient()
	{
	}
}
