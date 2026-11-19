// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x200035E")]
internal class AchievementHandler : QuestHandler
{
	[Token(Token = "0x40010DD")]
	[FieldOffset(Offset = "0x48")]
	private AchievementContainer _achievement;

	[Token(Token = "0x60014F6")]
	[Address(RVA = "0x581AB50", Offset = "0x5819B50", VA = "0x581AB50")]
	public AchievementHandler(AchievementContainer achievement)
	{
	}

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x581AEB0", Offset = "0x5819EB0", VA = "0x581AEB0")]
	public void ReloadAchievements()
	{
	}

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x581AED0", Offset = "0x5819ED0", VA = "0x581AED0")]
	private void LoadAchievements()
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x581B5F0", Offset = "0x581A5F0", VA = "0x581B5F0")]
	private void CacheActiveAchievements()
	{
	}
}
