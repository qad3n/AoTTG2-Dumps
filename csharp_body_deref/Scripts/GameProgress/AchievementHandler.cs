// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20001EC")]
internal class AchievementHandler : QuestHandler
{
	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x48")]
	private AchievementContainer _achievement;

	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4438BA0", Offset = "0x4438BA0", VA = "0x4438BA0")]
	public AchievementHandler(AchievementContainer achievement)
	{
	}

	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4438F00", Offset = "0x4438F00", VA = "0x4438F00")]
	public void ReloadAchievements()
	{
	}

	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x4438F20", Offset = "0x4438F20", VA = "0x4438F20")]
	private void LoadAchievements()
	{
	}

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x4439750", Offset = "0x4439750", VA = "0x4439750")]
	private void CacheActiveAchievements()
	{
	}
}
