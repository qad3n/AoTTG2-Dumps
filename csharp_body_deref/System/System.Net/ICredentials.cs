using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200013F")]
public interface ICredentials
{
	[Token(Token = "0x60007C6")]
	NetworkCredential GetCredential(Uri uri, string authType);
}
