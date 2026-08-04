// ==================== AoTTG2 cross-reference ====================
// Type: Discord.OAuth2Token
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000038")]
public struct OAuth2Token
{
	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x0")]
	public string AccessToken;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x8")]
	public string Scopes;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x10")]
	public long Expires;
}
