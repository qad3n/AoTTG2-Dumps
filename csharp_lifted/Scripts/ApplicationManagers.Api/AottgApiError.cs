// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiError
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiError.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009BA")]
public static class AottgApiError
{
	[Token(Token = "0x40030D4")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x40030D5")]
	public const string BadResponse = "bad_response";

	[Token(Token = "0x40030D6")]
	public const string Canceled = "canceled";

	[Token(Token = "0x6005A5F")]
	[Address(RVA = "0x5D2A580", Offset = "0x5D29580", VA = "0x5D2A580")]
	public static string Http(long statusCode)
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiError.c (ApplicationManagers.Api.AottgApiError$$Http): clean
		String pSVar1;
		long iStack_8;

		iStack_8 = statusCode;
		pSVar1 = iStack_8.ToString();
		pSVar1 = String.Concat("http_", pSVar1);
		return pSVar1;
	}
}
