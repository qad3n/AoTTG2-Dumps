// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementHandler.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace GameProgress;

[Token(Token = "0x20002FD")]
internal class AchievementHandler : QuestHandler
{
	[Token(Token = "0x4000F3F")]
	[FieldOffset(Offset = "0x48")]
	private AchievementContainer _achievement;

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x1E28AE0", Offset = "0x1E270E0", VA = "0x181E28AE0")]
	public AchievementHandler(AchievementContainer achievement)
	{
	}

	[Token(Token = "0x6001289")]
	[Address(RVA = "0x1E28AC0", Offset = "0x1E270C0", VA = "0x181E28AC0")]
	public void ReloadAchievements()
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x1E28500", Offset = "0x1E26B00", VA = "0x181E28500")]
	private void LoadAchievements()
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x1E27EA0", Offset = "0x1E264A0", VA = "0x181E27EA0")]
	private void CacheActiveAchievements()
	{
	}
}
