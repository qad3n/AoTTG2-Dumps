// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Relationship
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000042")]
public struct Relationship
{
	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x0")]
	public RelationshipType Type;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x8")]
	public User User;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x30")]
	public Presence Presence;
}
