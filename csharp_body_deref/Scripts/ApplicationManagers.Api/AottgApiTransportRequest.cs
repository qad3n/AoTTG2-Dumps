// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiTransportRequest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiTransportRequest.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20007CA")]
public sealed class AottgApiTransportRequest
{
	[Token(Token = "0x400256A")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x400256B")]
	[FieldOffset(Offset = "0x18")]
	public string Url;

	[Token(Token = "0x400256C")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x400256D")]
	[FieldOffset(Offset = "0x28")]
	public int? TimeoutSeconds;

	[Token(Token = "0x400256E")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, string> Headers;

	[Token(Token = "0x6004AA0")]
	[Address(RVA = "0x43CD550", Offset = "0x43CD550", VA = "0x43CD550")]
	public AottgApiTransportRequest()
	{
	}
}
