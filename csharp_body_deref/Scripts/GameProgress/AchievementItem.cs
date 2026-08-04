// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.AchievementItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/AchievementItem.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/AchievementItem.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x20001EF")]
internal class AchievementItem : QuestItem
{
	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting Tier;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x78")]
	public BoolSetting Active;

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x443A410", Offset = "0x443A410", VA = "0x443A410", Slot = "13")]
	public override string GetQuestName()
	{
		return null;
	}

	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x443A590", Offset = "0x443A590", VA = "0x443A590")]
	public AchievementItem()
	{
	}
}
