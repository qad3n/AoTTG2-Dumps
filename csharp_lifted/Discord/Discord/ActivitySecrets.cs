// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ActivitySecrets
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003D")]
public struct ActivitySecrets
{
	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x0")]
	public string Match;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x8")]
	public string Join;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x10")]
	public string Spectate;
}
