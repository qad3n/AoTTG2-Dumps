using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000188")]
internal class BasicClient : IAuthenticationModule
{
	[Token(Token = "0x17000222")]
	public string AuthenticationType
	{
		[Token(Token = "0x600097D")]
		[Address(RVA = "0x4658650", Offset = "0x4658650", VA = "0x4658650", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x46581E0", Offset = "0x46581E0", VA = "0x46581E0", Slot = "4")]
	public Authorization Authenticate(string challenge, WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x46585A0", Offset = "0x46585A0", VA = "0x46585A0")]
	private static byte[] GetBytes(string str)
	{
		return null;
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x4658270", Offset = "0x4658270", VA = "0x4658270")]
	private static Authorization InternalAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x4658640", Offset = "0x4658640", VA = "0x4658640", Slot = "5")]
	public Authorization PreAuthenticate(WebRequest webRequest, ICredentials credentials)
	{
		return null;
	}

	[Token(Token = "0x600097E")]
	[Address(RVA = "0x4657510", Offset = "0x4657510", VA = "0x4657510")]
	public BasicClient()
	{
	}
}
