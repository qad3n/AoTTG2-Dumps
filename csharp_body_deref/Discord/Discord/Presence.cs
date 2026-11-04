// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Presence
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003F")]
public struct Presence
{
	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x0")]
	public Status Status;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x8")]
	public Activity Activity;
}
