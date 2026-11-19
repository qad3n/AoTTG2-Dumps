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

[Token(Token = "0x200035C")]
internal class AchievementContainer : BaseSettingsContainer
{
	[Token(Token = "0x40010D4")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<AchievementItem> AchievementItems;

	[Token(Token = "0x60014F3")]
	[Address(RVA = "0x581A680", Offset = "0x5819680", VA = "0x581A680")]
	public AchievementCount GetAchievementCount()
	{
		return null;
	}

	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x581AAD0", Offset = "0x5819AD0", VA = "0x581AAD0")]
	public AchievementContainer()
	{
	}
}
