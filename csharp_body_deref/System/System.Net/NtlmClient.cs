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
		[Address(RVA = "0x4667380", Offset = "0x4667380", VA = "0x4667380", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4B")]
	[Address(RVA = "0x4667240", Offset = "0x4667240", VA = "0x4667240")]
	public NtlmClient()
	{
	}

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x46672B0", Offset = "0x46672B0", VA = "0x46672B0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x4667370", Offset = "0x4667370", VA = "0x4667370", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}
}
