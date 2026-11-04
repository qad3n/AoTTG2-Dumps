// ==================== AoTTG2 cross-reference ====================
// Type: Discord.RelationshipType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200002B")]
public enum RelationshipType
{
	[Token(Token = "0x400006E")]
	None,
	[Token(Token = "0x400006F")]
	Friend,
	[Token(Token = "0x4000070")]
	Blocked,
	[Token(Token = "0x4000071")]
	PendingIncoming,
	[Token(Token = "0x4000072")]
	PendingOutgoing,
	[Token(Token = "0x4000073")]
	Implicit
}
