// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiTransportResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiTransportResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000958")]
public sealed class AottgApiTransportResponse
{
	[Token(Token = "0x4002E41")]
	[FieldOffset(Offset = "0x10")]
	public AottgApiTransportResult Result;

	[Token(Token = "0x4002E42")]
	[FieldOffset(Offset = "0x18")]
	public long StatusCode;

	[Token(Token = "0x4002E43")]
	[FieldOffset(Offset = "0x20")]
	public string Text;

	[Token(Token = "0x4002E44")]
	[FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x600571A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AottgApiTransportResponse()
	{
	}
}
