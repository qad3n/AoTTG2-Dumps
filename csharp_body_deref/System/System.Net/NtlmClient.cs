// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.NtlmClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002F1")]
internal class NtlmClient : IAuthenticationModule
{
	[Token(Token = "0x4000BB6")]
	[FieldOffset(Offset = "0x10")]
	private IAuthenticationModule authObject;

	[Token(Token = "0x17000487")]
	public string AuthenticationType
	{
		[Token(Token = "0x6001451")]
		[Address(RVA = "0x618E510", Offset = "0x618D510", VA = "0x618E510", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600144E")]
	[Address(RVA = "0x617EF00", Offset = "0x617DF00", VA = "0x617EF00")]
	public NtlmClient()
	{
	}

	[Token(Token = "0x600144F")]
	[Address(RVA = "0x618E440", Offset = "0x618D440", VA = "0x618E440", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6001450")]
	[Address(RVA = "0x618E500", Offset = "0x618D500", VA = "0x618E500", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
