// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiRequest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiRequest.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000954")]
public sealed class AottgApiRequest
{
	[Token(Token = "0x4002E29")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x4002E2A")]
	[FieldOffset(Offset = "0x18")]
	public string Path;

	[Token(Token = "0x4002E2B")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x4002E2C")]
	[FieldOffset(Offset = "0x28")]
	public string BearerToken;

	[Token(Token = "0x4002E2D")]
	[FieldOffset(Offset = "0x30")]
	public int? TimeoutSeconds;

	[Token(Token = "0x4002E2E")]
	[FieldOffset(Offset = "0x38")]
	public bool ParseJson;

	[Token(Token = "0x4002E2F")]
	[FieldOffset(Offset = "0x39")]
	public bool ReportNetworkError;

	[Token(Token = "0x6005707")]
	[Address(RVA = "0x2360830", Offset = "0x235EE30", VA = "0x182360830")]
	public AottgApiRequest()
	{
	}
}
