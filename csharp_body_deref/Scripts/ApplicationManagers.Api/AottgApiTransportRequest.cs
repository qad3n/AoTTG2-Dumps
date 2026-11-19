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

[Token(Token = "0x20009BE")]
public sealed class AottgApiTransportRequest
{
	[Token(Token = "0x40030EA")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x40030EB")]
	[FieldOffset(Offset = "0x18")]
	public string Url;

	[Token(Token = "0x40030EC")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x40030ED")]
	[FieldOffset(Offset = "0x28")]
	public int? TimeoutSeconds;

	[Token(Token = "0x40030EE")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, string> Headers;

	[Token(Token = "0x6005A72")]
	[Address(RVA = "0x5D29600", Offset = "0x5D28600", VA = "0x5D29600")]
	public AottgApiTransportRequest()
	{
	}
}
