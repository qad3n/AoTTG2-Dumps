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

[Token(Token = "0x20001EA")]
internal class AchievementContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000A5B")]
	[FieldOffset(Offset = "0x20")]
	public ListSetting<AchievementItem> AchievementItems;

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x4438630", Offset = "0x4438630", VA = "0x4438630")]
	public AchievementCount GetAchievementCount()
	{
		return null;
	}

	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4438B20", Offset = "0x4438B20", VA = "0x4438B20")]
	public AchievementContainer()
	{
	}
}
