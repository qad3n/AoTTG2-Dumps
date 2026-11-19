// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiRequest
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiRequest.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009BB")]
public sealed class AottgApiRequest
{
	[Token(Token = "0x40030D7")]
	[FieldOffset(Offset = "0x10")]
	public string Method;

	[Token(Token = "0x40030D8")]
	[FieldOffset(Offset = "0x18")]
	public string Path;

	[Token(Token = "0x40030D9")]
	[FieldOffset(Offset = "0x20")]
	public string JsonBody;

	[Token(Token = "0x40030DA")]
	[FieldOffset(Offset = "0x28")]
	public string BearerToken;

	[Token(Token = "0x40030DB")]
	[FieldOffset(Offset = "0x30")]
	public int? TimeoutSeconds;

	[Token(Token = "0x40030DC")]
	[FieldOffset(Offset = "0x38")]
	public bool ParseJson;

	[Token(Token = "0x40030DD")]
	[FieldOffset(Offset = "0x39")]
	public bool ReportNetworkError;

	[Token(Token = "0x6005A60")]
	[Address(RVA = "0x5D24A80", Offset = "0x5D23A80", VA = "0x5D24A80")]
	public AottgApiRequest()
	{
		// Lifted from source/cpp/ApplicationManagers/Api/AottgApiRequest.c (ApplicationManagers.Api.AottgApiRequest$$.ctor): clean
		this.Method = "GET";
		this.ReportNetworkError = true;
		base();
		return;
	}
}
