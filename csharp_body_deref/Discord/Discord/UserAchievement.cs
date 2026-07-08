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
