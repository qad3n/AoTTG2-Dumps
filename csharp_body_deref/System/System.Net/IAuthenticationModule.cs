using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200013D")]
public interface IAuthenticationModule
{
	[Token(Token = "0x170001AF")]
	string AuthenticationType
	{
		[Token(Token = "0x60007C4")]
		get;
	}

	[Token(Token = "0x60007C2")]
	Authorization Authenticate(string challenge, WebRequest request, ICredentials credentials);

	[Token(Token = "0x60007C3")]
	Authorization PreAuthenticate(WebRequest request, ICredentials credentials);
}
