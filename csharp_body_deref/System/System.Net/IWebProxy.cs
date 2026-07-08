using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200017D")]
public interface IWebProxy
{
	[Token(Token = "0x1700021C")]
	ICredentials Credentials
	{
		[Token(Token = "0x600094F")]
		get;
	}

	[Token(Token = "0x600094D")]
	Uri GetProxy(Uri destination);

	[Token(Token = "0x600094E")]
	bool IsBypassed(Uri host);
}
