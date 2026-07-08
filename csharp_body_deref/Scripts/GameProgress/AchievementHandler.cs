using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20001B9")]
internal class AchievementHandler : QuestHandler
{
	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x48")]
	private AchievementContainer _achievement;

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x4106A30", Offset = "0x4106A30", VA = "0x4106A30")]
	public AchievementHandler(AchievementContainer achievement)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x4106D90", Offset = "0x4106D90", VA = "0x4106D90")]
	public void ReloadAchievements()
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x4106DB0", Offset = "0x4106DB0", VA = "0x4106DB0")]
	private void LoadAchievements()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x41075E0", Offset = "0x41075E0", VA = "0x41075E0")]
	private void CacheActiveAchievements()
	{
	}
}
