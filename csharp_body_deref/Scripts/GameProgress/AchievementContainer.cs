// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20002FB")]
internal class AchievementContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000F36")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<AchievementItem> AchievementItems;

	[Token(Token = "0x6001285")]
	[Address(RVA = "0x1E27B50", Offset = "0x1E26150", VA = "0x181E27B50")]
	public AchievementCount GetAchievementCount()
	{
		return null;
	}

	[Token(Token = "0x6001286")]
	[Address(RVA = "0x1E27E20", Offset = "0x1E26420", VA = "0x181E27E20")]
	public AchievementContainer()
	{
	}
}
