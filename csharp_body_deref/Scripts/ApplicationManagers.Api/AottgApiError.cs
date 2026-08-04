// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiError
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiError.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007C6")]
public static class AottgApiError
{
	[Token(Token = "0x4002554")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x4002555")]
	public const string BadResponse = "bad_response";

	[Token(Token = "0x4002556")]
	public const string Canceled = "canceled";

	[Token(Token = "0x6004A8D")]
	[Address(RVA = "0x43CE570", Offset = "0x43CE570", VA = "0x43CE570")]
	public static string Http(long statusCode)
	{
		return null;
	}
}
