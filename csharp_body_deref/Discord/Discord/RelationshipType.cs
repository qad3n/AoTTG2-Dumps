// ==================== AoTTG2 cross-reference ====================
// Type: Discord.RelationshipType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200002D")]
public enum RelationshipType
{
	[Token(Token = "0x4000073")]
	None,
	[Token(Token = "0x4000074")]
	Friend,
	[Token(Token = "0x4000075")]
	Blocked,
	[Token(Token = "0x4000076")]
	PendingIncoming,
	[Token(Token = "0x4000077")]
	PendingOutgoing,
	[Token(Token = "0x4000078")]
	Implicit
}
