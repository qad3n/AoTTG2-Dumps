using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000764")]
public static class AottgApiError
{
	[Token(Token = "0x40023B6")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x40023B7")]
	public const string BadResponse = "bad_response";

	[Token(Token = "0x40023B8")]
	public const string Canceled = "canceled";

	[Token(Token = "0x600479A")]
	[Address(RVA = "0x40B0BF0", Offset = "0x40B0BF0", VA = "0x40B0BF0")]
	public static string Http(long statusCode)
	{
		return null;
	}
}
