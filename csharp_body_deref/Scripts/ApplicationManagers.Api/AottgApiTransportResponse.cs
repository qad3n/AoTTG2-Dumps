// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiTransportResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiTransportResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007CB")]
public sealed class AottgApiTransportResponse
{
	[Token(Token = "0x400256F")]
	[FieldOffset(Offset = "0x10")]
	public AottgApiTransportResult Result;

	[Token(Token = "0x4002570")]
	[FieldOffset(Offset = "0x18")]
	public long StatusCode;

	[Token(Token = "0x4002571")]
	[FieldOffset(Offset = "0x20")]
	public string Text;

	[Token(Token = "0x4002572")]
	[FieldOffset(Offset = "0x28")]
	public string Error;

	[Token(Token = "0x6004AA1")]
	[Address(RVA = "0x43CEF00", Offset = "0x43CEF00", VA = "0x43CEF00")]
	public AottgApiTransportResponse()
	{
	}
}
