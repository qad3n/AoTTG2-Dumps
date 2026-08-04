// ==================== AoTTG2 cross-reference ====================
// Type: Discord.Activity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x2000040")]
public struct Activity
{
	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x0")]
	public ActivityType Type;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x8")]
	public long ApplicationId;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x10")]
	public string Name;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x18")]
	public string State;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x20")]
	public string Details;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x28")]
	public ActivityTimestamps Timestamps;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x38")]
	public ActivityAssets Assets;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x58")]
	public ActivityParty Party;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x70")]
	public ActivitySecrets Secrets;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x88")]
	public bool Instance;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x8C")]
	public uint SupportedPlatforms;
}
