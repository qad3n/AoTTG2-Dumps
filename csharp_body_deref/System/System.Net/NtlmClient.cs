// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NtlmClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001A8")]
internal class NtlmClient : IAuthenticationModule
{
	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x10")]
	private IAuthenticationModule authObject;

	[Token(Token = "0x17000260")]
	public string AuthenticationType
	{
		[Token(Token = "0x6000A4E")]
		[Address(RVA = "0x498C480", Offset = "0x498C480", VA = "0x498C480", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x498C340", Offset = "0x498C340", VA = "0x498C340")]
	public NtlmClient()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x498C3B0", Offset = "0x498C3B0", VA = "0x498C3B0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x498C470", Offset = "0x498C470", VA = "0x498C470", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
