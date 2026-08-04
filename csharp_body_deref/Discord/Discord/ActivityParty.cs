// ==================== AoTTG2 cross-reference ====================
// Type: Discord.ActivityParty
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200003E")]
public struct ActivityParty
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	public string Id;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x8")]
	public PartySize Size;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x10")]
	public ActivityPartyPrivacy Privacy;
}
