// ==================== AoTTG2 cross-reference ====================
// Type: Discord.UserAchievement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Plugins/DiscordGameSDK/Core.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Discord;

[Token(Token = "0x200004B")]
public struct UserAchievement
{
	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x0")]
	public long UserId;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x8")]
	public long AchievementId;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x10")]
	public byte PercentComplete;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x18")]
	public string UnlockedAt;
}
