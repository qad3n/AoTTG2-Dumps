// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiRequest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiRequest.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007C7")]
public sealed class AottgApiRequest
{
	[Token(Token = "0x4002557")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x4002558")]
	[FieldOffset(Offset = "0x18")]
	public string Path;

	[Token(Token = "0x4002559")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x400255A")]
	[FieldOffset(Offset = "0x28")]
	public string BearerToken;

	[Token(Token = "0x400255B")]
	[FieldOffset(Offset = "0x30")]
	public int? TimeoutSeconds;

	[Token(Token = "0x400255C")]
	[FieldOffset(Offset = "0x38")]
	public bool ParseJson;

	[Token(Token = "0x400255D")]
	[FieldOffset(Offset = "0x39")]
	public bool ReportNetworkError;

	[Token(Token = "0x6004A8E")]
	[Address(RVA = "0x43C4FF0", Offset = "0x43C4FF0", VA = "0x43C4FF0")]
	public AottgApiRequest()
	{
	}
}
