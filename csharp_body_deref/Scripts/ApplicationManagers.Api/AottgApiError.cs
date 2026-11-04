// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiError
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiError.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000953")]
public static class AottgApiError
{
	[Token(Token = "0x4002E26")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x4002E27")]
	public const string BadResponse = "bad_response";

	[Token(Token = "0x4002E28")]
	public const string Canceled = "canceled";

	[Token(Token = "0x6005706")]
	[Address(RVA = "0x23607E0", Offset = "0x235EDE0", VA = "0x1823607E0")]
	public static string Http(long statusCode)
	{
		return null;
	}
}
