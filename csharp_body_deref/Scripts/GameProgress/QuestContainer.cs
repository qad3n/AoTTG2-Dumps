// ==================== AoTTG2 cross-reference ====================
// Type: GameProgress.QuestContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/GameProgress/QuestContainer.c
// Prior real C# source (older reference): Assets/Scripts/GameProgress/QuestContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace GameProgress;

[Token(Token = "0x200030F")]
internal class QuestContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000F93")]
	[FieldOffset(Offset = "0x30")]
	public ListSetting<QuestItem> DailyQuestItems;

	[Token(Token = "0x4000F94")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<QuestItem> WeeklyQuestItems;

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x1E36ED0", Offset = "0x1E354D0", VA = "0x181E36ED0")]
	public void CollectRewards()
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x1E370D0", Offset = "0x1E356D0", VA = "0x181E370D0")]
	public QuestContainer()
	{
	}
}
