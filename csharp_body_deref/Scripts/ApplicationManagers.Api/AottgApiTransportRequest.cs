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

[Token(Token = "0x2000957")]
public sealed class AottgApiTransportRequest
{
	[Token(Token = "0x4002E3C")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x4002E3D")]
	[FieldOffset(Offset = "0x18")]
	public string Url;

	[Token(Token = "0x4002E3E")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x4002E3F")]
	[FieldOffset(Offset = "0x28")]
	public int? TimeoutSeconds;

	[Token(Token = "0x4002E40")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, string> Headers;

	[Token(Token = "0x6005719")]
	[Address(RVA = "0x23609F0", Offset = "0x235EFF0", VA = "0x1823609F0")]
	public AottgApiTransportRequest()
	{
	}
}
